//
//  IE.cpp
//  ProgramBuilder
//
//  Created by wyc on 2020/1/17.
//  Copyright © 2020 wyc. All rights reserved.
//

#include "IE.hpp"


Ie::Ie(){
    
}

Ie::~Ie(){
    for(int i = 0; i < elseBody.size(); i++)
        delete elseBody[i];
    elseBody.clear();
}

void Ie::insert(Struct &s, int position){
    switch (position) {
        case 0:Struct::insert(s);break;
        case 1:
            s.setIndent(this->indent+1);
            elseBody.push_back(&s);
            break;
        default:break;
    }
}

string Ie::elseBodyToString(){
    string s = "";
    for(int i = 0; i < elseBody.size(); i++)
        s+=elseBody[i]->toString();
    return s;
}

string Ie::toString(){
    string indents = indentToString();
    string s = "";
    s+=indents;
    s+="if(true){\n";
    
    s+=stateToString();
    s+=listToString_ft("3");
    
    s+=bodyToString();
    s+=indents;
    s+="}else{\n";
    
    s+=stateToString();
    s+=listToString_ft("3");
    
    s+=elseBodyToString();
    s+=indents;
    s+="}\n";
    
    return s;
}
