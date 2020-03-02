//
//  IE.hpp
//  ProgramBuilder
//
//  Created by wyc on 2020/1/17.
//  Copyright © 2020 wyc. All rights reserved.
//

#ifndef IE_hpp
#define IE_hpp

#include "Struct.hpp"

class Ie :public Struct{
private:
    vector<Struct*> elseBody;
public:
    Ie();
    ~Ie();
    void insert(Struct &s, int position);
    string elseBodyToString();
    string toString();
};

#endif /* IE_hpp */
