//
//  Pair.cpp
//  ProgramBuilder
//
//  Created by wyc on 2020/1/17.
//  Copyright © 2020 wyc. All rights reserved.
//

#include "Pair.hpp"


Pair::Pair(){
    index = 0;
    position = 0;
}

Pair::Pair(int i, int p){
    index = i;
    position = p;
}

void Pair::init(int i, int p){
    index = i;
    position = p;
}

string Pair::toString(){
    string s = "";
    s+="<";
    s+=to_string(index);
    s+=",";
    s+=to_string(position);
    s+=">";
    
    return s;
}

int Pair::getIndex(){return index;}
int Pair::getPosition(){return position;}
