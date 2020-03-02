//
//  IF.cpp
//  ProgramBuilder
//
//  Created by wyc on 2020/1/17.
//  Copyright © 2020 wyc. All rights reserved.
//

#include "IF.hpp"

If::If(){

}

string getCondition(){
    int n = rand()%2;
    string s = (n==0)?"false":"true";
    return s;
}

string If::toString(){
    string indents = indentToString();
    string s = "";
    s+=indents;
    s+="if("+getCondition()+"){\n";

    s+= stateToString();
    s+= listToString_ft("2");
    
    s+=bodyToString();
    s+=indents;
    s+="}\n";
    return s;
}
