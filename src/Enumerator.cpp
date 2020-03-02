//
//  Enumerator.cpp
//  ProgramBuilder
//
//  Created by wyc on 2020/1/18.
//  Copyright © 2020 wyc. All rights reserved.
//

#include "Enumerator.hpp"

bool isLess(Pair p_i, Pair p_j);

void Enumerator::init(){
    num_templates = 0;
    num_programs = 0;
    num_programs_valid = 0;
    printPrograms = new Print("/Users/wyc/Documents/毕设/out/");
}

void Enumerator::enumerate(int len){
    init();
    
    Entry *list = new Entry[len+1];
    list[0].setType(SEQUENTIAL);
    
    //printPrograms->printTime();
    //printPrograms->printInfo("");
    enumerateRec(list, 1, len+1,1);
    
    //printPrograms->printInfo("total programs:" + to_string(num_programs));
    //printPrograms->printTime();
}

void Enumerator::enumerateRec(Entry *list, int c_len, int len,int begin){
    if(c_len == len){
        
        string s = "[";
        for(int i = 1; i < c_len; i++){
            s+=list[i].typeToString();
            s+=" ";
        }
        s+="]";
        //printPrograms->printInfo("templates:" + s);
        
        //printPrograms->printInfo("number_templates:"+ to_string(num_templates+1)+"\n");
        
        generate(list, len);
        
        //printPrograms->printInfo("program quantity of template:"+to_string(num_programs_valid)+"\n");
        //printPrograms->printInfo("--------------------------------------\n");
        num_templates++;
        num_programs_valid = 0;
        return;
    }
    
    for(int i = 1; i <= IE; i++){
        list[c_len].setType((Type)i);
        enumerateRec(list, c_len+1, len,i);
    }
}

void Enumerator::generate(Entry *list, int len){
    initPairs(list, len);
    generateEachProgram(list, len);
    for(int i = 0; i < len; i++)
        list[i].clear();
    
}

void Enumerator::initPairs(Entry *list, int len){
    for(int index = 0; index < len-1; index++){
        if(index == 0) {
            vector<Pair> p;
            Pair p0(index,0);
            p.push_back(p0);
            list[index].setPairs(p);
            p.clear();
        }
        else{
            Type t = list[index].getType();
            vector<Pair> p_p = list[index-1].getPairs();
            vector<Pair> p_1(p_p);
            Pair p1(index,0);
            p_1.push_back(p1);
            vector<Pair> p_2(p_p);
            Pair p2(index,0);   Pair p3(index,1);
            p_2.push_back(p2);
            p_2.push_back(p3);
            switch (t) {
                case IF:
                case WHILE:
                case DOWHILE:
                case FOR:
                    list[index].setPairs(p_1);
                    break;
                case IE:
                    list[index].setPairs(p_2);
                    break;
                default:cout << "erro type" << endl;break;
            }
        }
    }
}

void Enumerator::generateEachProgram(Entry *list, int len){
    /*
    for(int i = 0; i < len; i++)
        cout << list[i].toString() << endl;
    cout << "combain times----------------------------" << endl;
    */
    
    vector<Pair> pairs(len);
    if(len < 2){cout <<"len erro"<< endl;return;}
    if(list[0].getPairs().size() != 1){cout << "pair len erro" << endl;return;}
    
    pairs[0] = list[0].getPairs()[0];
    generateRec(list, len, pairs, 1);
}

void Enumerator::generateRec(Entry *list, int len_l, vector<Pair> &pairs, int c_len){
    if(c_len == len_l-1){
        num_programs_valid++;
        num_programs++;
        Struct *s = generateProgram(list, len_l, pairs);
        printPrograms->clear();
        printPrograms->printTime();
        printPrograms->printOut(s);
        printPrograms->addCount();
        return;
    }
    vector<Pair> p = list[c_len].getPairs();
    for(int i = 0; i < p.size(); i++){
        pairs[c_len] = p[i];
        if(isLess(pairs[c_len-1], pairs[c_len])){
            generateRec(list, len_l, pairs, c_len+1);
        }
    }
}

Struct* Enumerator::generateProgram(Entry *list, int len, vector<Pair> pairs){
    vector<Struct*> s_list(len);
    Struct *mains = new MainS;
    s_list[0] = mains;
    State s1(0);
    s_list[0]->setState(s1);
    
    for(int i = 1; i < len; i++){
        Type t = list[i].getType();
        switch (t) {
            case IF:s_list[i] = new If;break;
            case WHILE:s_list[i] = new While;break;
            case DOWHILE:s_list[i] = new doWhile;break;
            case FOR:s_list[i] = new For;break;
            case IE:s_list[i] = new Ie;break;
            default:cout << "unknown type"<< endl;break;
        }
    }
    
    State s2(1);
    s_list[1]->setVariable(1);
    s_list[1]->setState(s2);
    
    s_list[0]->insert(*s_list[1],0);
    for(int i = 1; i < pairs.size()-1; i++) {
        Pair p = pairs[i];
        int index = p.getIndex();
        int position = p.getPosition();
        
        State s(i+1);
        s_list[i+1]->setVariable(i+1);
        s_list[i+1]->setState(s);
        s_list[index]->insert(*s_list[i+1],position);
    }
    
    return s_list[0];
}

bool isLess(Pair p_i, Pair p_j){
    int index_i = p_i.getIndex();
    int position_i = p_i.getPosition();
    
    int index_j = p_j.getIndex();
    int position_j = p_j.getPosition();
    
    if(index_i != index_j)
        return index_i < index_j;
    if(position_i != position_j)
        return position_i < position_j;
    return true;
}



