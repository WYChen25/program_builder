//
//  DoWhile.hpp
//  ProgramBuilder
//
//  Created by wyc on 2020/1/17.
//  Copyright © 2020 wyc. All rights reserved.
//

#ifndef DoWhile_hpp
#define DoWhile_hpp

#include "Struct.hpp"

class doWhile:public Struct{
private:
    int iterations;
public:
    doWhile();
    string toString();
};

#endif /* DoWhile_hpp */
