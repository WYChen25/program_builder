//
//  MainS.cpp
//  ProgramBuilder
//
//  Created by wyc on 2020/1/17.
//  Copyright © 2020 wyc. All rights reserved.
//

#include "MainS.hpp"

string MainS::toString(){
    string indents = indentToString();
    string s = "";
    string contain = "  return 0;\n";
    
    s+="#include \"list.h\"\n\n";
    
    s+=indents;
    s+="int main(){\n";
    
    s+=indents; s+="  ";
    s+="int n = 5;  list *head = creat(n);\n";
    
    s+=stateToString();
    
    s+=bodyToString();
    
    s+=indents;
    s+="  deleteL(head);\n";
    
    s+=indents;
    s+=contain;
    
    s+=indents;
    s+="}\n";
    
    return s;
}
