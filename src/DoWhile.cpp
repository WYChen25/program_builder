//
//  DoWhile.cpp
//  ProgramBuilder
//
//  Created by wyc on 2020/1/17.
//  Copyright © 2020 wyc. All rights reserved.
//

#include "DoWhile.hpp"


doWhile::doWhile(){
    iterations = 5;
}

string doWhile::toString(){
    string var ="i_"+ to_string(variable);
    string variable = "int "+var+" = 0;\n";
    string indents = indentToString();
    string condition = var+" < 5";
    string contain = "  "+var+"++;\n";
    
    string s = "";
    
    s+=indents;
    s+=variable;
    
    s+=indents;
    s+="do{\n";
    
    s+=bodyToString();
    s+=listToString_adc(var);
    
    s+=indents;
    s+=contain;
    
    s+=indents;
    s+="}while(";
    s+=condition;
    s+=");\n";
    
    return s;
    
}
