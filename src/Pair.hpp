//
//  Pair.hpp
//  ProgramBuilder
//
//  Created by wyc on 2020/1/17.
//  Copyright © 2020 wyc. All rights reserved.
//

#ifndef Pair_hpp
#define Pair_hpp

#include "Global.h"

class Pair{
private:
    int index;
    int position;
    
public:
    Pair();
    void init(int i, int p);
    Pair(int i, int p);
    string toString();
    int getIndex();
    int getPosition();
};

#endif /* Pair_hpp */
