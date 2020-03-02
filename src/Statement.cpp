//
//  Statement.cpp
//  ProgramBuilder
//
//  Created by wyc on 2020/1/21.
//  Copyright © 2020 wyc. All rights reserved.
//

#include "Statement.hpp"

State::State(){
    variable = 0;
}

State::State(int v){
    variable = v;
}

string State::vToString(){
    return to_string(variable);
}

string State::arithOperation(){
    
    
    string res ="ariRes_"+vToString();
    string operators[7] = {"+","-","*","/","%","++","--"};
    //srand((unsigned)time(NULL));
    string ope = operators[rand()%7];
    
    string des1 = to_string(rand());
    string des2 = to_string(rand());
    
    if((ope.compare("++") == 0) || ope.compare("--") == 0){
        string s = "int ariDes_"+vToString()+" = "+des1+";";
        s += "  int "+res+" = ariDes_"+vToString()+ope+";\n";
        return s;
    }
    
    string s = "long "+res+" = (long)"+ des1 + ope + des2 + ";\n";
    return s;
};

string State::logicOperation(){
    
    
    string res ="logRes_"+vToString();
    
    string operators[3] = {"&&","||","!"};
    string operands[2] = {"true","false"};
    //srand((unsigned)time(NULL));
    string ope = operators[rand()%3];
    
    string des1 = operands[rand()%2];
    string des2 = operands[rand()%2];
    
    if(ope.compare("!") == 0){
        string s = "bool "+res+" = "+ope+des1+";\n";
        return s;
    }
    
    string s = "bool "+res+" = " + des1 + ope + des2+";\n";
    return s;
}


string State::bitOperation(){
    
    
    string res = "bitRes_"+vToString();
    
    string operators[4] = {"&","|","^","~"};
    //srand((unsigned)time(NULL));
    string ope = operators[rand()%4];
    
    string des1 = to_string(rand());
    string des2 = to_string(rand());
    
    if(ope.compare("~") == 0){
        string s = "int "+res+" = "+ope+des1+";\n";
        return s;
    }
    
    string s = "int "+res+" = "+des1+ope+des2+";\n";
    return s;
}

string State::shiftingOperation(){
    
    
    string res = "shiftRes_"+vToString();
    
    string operators[2] = {"<<",">>"};
    //srand((unsigned)time(NULL));
    string ope = operators[rand()%2];
    
    string des1 = to_string(rand());
    string des2 = to_string(1+rand()%31);
    
    if((ope.compare(">>") == 0)&&(rand()%2 == 0)){
        string s = "int "+res+" = "+"(unsigned)"+des1+ope+des2+";\n";
        return s;
    }
    
    string s = "int "+res+" = "+des1+ope+des2+";\n";
    return s;
}

string State::randomState(){
    //srand((unsigned)time(NULL));
    switch (rand()%4) {
        case 0:return arithOperation();break;
        case 1:return logicOperation();break;
        case 2:return bitOperation();break;
        case 3:return shiftingOperation();break;
        default:break;
    }
    return "erro random\n";
}



string State::listStruct(){
    string  s = "struct list{\n";
            s+= "   int x;\n";
            s+= "   list *next;\n";
            s+= "};\n";
    return s;
}
