//
//  Statement.hpp
//  ProgramBuilder
//
//  Created by wyc on 2020/1/21.
//  Copyright © 2020 wyc. All rights reserved.
//

#ifndef Statement_hpp
#define Statement_hpp

#include "Global.h"

class State{
    int variable;
public:
    State();
    State(int v);
    string vToString();
    
    string arithOperation();
    string logicOperation();
    string bitOperation();
    string shiftingOperation();
    
    string randomState();
    
    string listStruct();
     
};

#endif /* Statement_hpp */
