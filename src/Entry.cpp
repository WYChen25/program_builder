//
//  Entry.cpp
//  ProgramBuilder
//
//  Created by wyc on 2020/1/17.
//  Copyright © 2020 wyc. All rights reserved.
//

#include "Entry.hpp"

Entry::Entry(){
    
}

Entry::Entry(Type t){
    type = t;
}

Entry::~Entry(){
    pairs.clear();
}

void Entry::clear(){
    pairs.clear();
}

Type Entry::getType(){return type;}

void Entry::setType(Type t){type = t;}

void Entry::setPairs(vector<Pair> ps){
    for(int i = 0; i < ps.size(); i++)
        pairs.push_back(ps[i]);
}


vector<Pair> Entry::getPairs(){
    vector<Pair> ps;
    for(int i = 0; i < pairs.size(); i++)
        ps.push_back(pairs[i]);
    return ps;
}

string Entry::typeToString(){
    string t = "";
    switch (type) {
        case SEQUENTIAL:t = "SEQUENTIAL";break;
        case IF:t = "IF";break;
        case IE:t = "IE";break;
        case WHILE:t = "WHILE";break;
        case DOWHILE:t = "DOWHILE";break;
        case FOR:t = "FOR";break;
        default:t = "erro type";break;
    }
    return t;
    
}

string Entry::toString(){
    string s = "";
    string t;
    t = typeToString();
    s+=t;
    s+=":[";
    for(int i = 0; i < pairs.size(); i++)
        s+=pairs[i].toString();
    s+="]\n";
    return s;
}






