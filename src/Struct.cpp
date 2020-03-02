//
//  Struct.cpp
//  ProgramBuilder
//
//  Created by wyc on 2020/1/16.
//  Copyright © 2020 wyc. All rights reserved.
//

#include "Struct.hpp"

Struct::Struct(){
    indent = 0;
    variable = 0;
}

Struct::Struct(int i){
    indent = i;
    
}

Struct::~Struct(){
    for(int i = 0; i < body.size(); i++)
        delete body[i];
    body.clear();
}

void Struct::setIndent(int i){indent = i;}


void Struct::insert(Struct &s){
    s.setIndent(this->indent+1);
    body.push_back(&s);
}

void Struct::insert(Struct &s, int position){
    insert(s);
}

string Struct::indentToString(){
    string s = "";
    for(int i = 0; i < indent; i++)
        s+= "  ";
    return s;
}

string Struct::bodyToString(){
    string s = "";
    for(int i = 0; i < body.size(); i++)
        s+=body[i]->toString();
    return s;
}

string Struct::toString(){
    return "erro type";
}

void Struct::setVariable(int i){
    variable = i;
}

void Struct::setState(State s){
    state = s;
}

string Struct::stateToString(){
    string s = "";
    s+=indentToString();
    s+="  ";
    s+=state.randomState();
    return s;
}

string Struct::listToString_adc(string var){
    string s = "";  s+=indentToString();
    s+="  ";
    int n = rand()%3;
    int seed = rand()%100;  string seeds = to_string(seed);
    switch (n) {
        case 0:s =s+ "addI(head, "+var+","+seeds+" );\n";break;
        case 1:s =s+ "deleteI(head, "+var+");\n";break;
        case 2:s =s+ "changeI(head,"+var+", "+seeds+");\n";break;
        default:break;
    }
    return s;
}

string Struct::listToString_ft(string var){
    string s = "";  s+=indentToString();
    s+="  ";
    int n = rand()%2;
    int seed = rand()%100;  string seeds = to_string(seed);
    switch (n) {
        case 0:s =s+ "findI(head, "+var+");\n";break;
        case 1:s =s+ "transpose(head);\n";break;
        default:break;
    }
    return s;
}




