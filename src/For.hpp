//
//  For.hpp
//  ProgramBuilder
//
//  Created by wyc on 2020/1/17.
//  Copyright © 2020 wyc. All rights reserved.
//

#ifndef For_hpp
#define For_hpp

#include "Struct.hpp"

class For :public Struct{
private:
    int iterations;
public:
    For();
    string toString();
};

#endif /* For_hpp */
