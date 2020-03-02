//
//  While.hpp
//  ProgramBuilder
//
//  Created by wyc on 2020/1/17.
//  Copyright © 2020 wyc. All rights reserved.
//

#ifndef While_hpp
#define While_hpp

#include "Struct.hpp"

class While :public Struct{
private:
    int iterations;
public:
    While();
    string toString();
};

#endif /* While_hpp */
