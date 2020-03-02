//
//  For.cpp
//  ProgramBuilder
//
//  Created by wyc on 2020/1/17.
//  Copyright © 2020 wyc. All rights reserved.
//

#include "For.hpp"

For::For(){
    iterations = 5;
}

string For::toString(){
    string var = "i_"+to_string(variable);
    string condition = "int "+var+" = 0; "+var+" < 5; "+var+"++";
    string indents = indentToString();
    string s = "";
    
    s+=indents;
    s+="for(";
    s+=condition;
    s+="){\n";
    
    s+=bodyToString();
    s+=listToString_adc(var);
    
    s+=indents;
    s+="}\n";
    
    return s;
}
