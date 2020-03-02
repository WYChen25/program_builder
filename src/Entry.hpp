//
//  Entry.hpp
//  ProgramBuilder
//
//  Created by wyc on 2020/1/17.
//  Copyright © 2020 wyc. All rights reserved.
//

#ifndef Entry_hpp
#define Entry_hpp

#include "Pair.hpp"

class Entry{
private:
    Type type;
    vector<Pair> pairs;
    
public:
    Entry();
    Entry(Type t);
    ~Entry();
    Type getType();
    void setType(Type t);
    void setPairs(vector<Pair> p);
    void clear();
    vector<Pair> getPairs();
    string toString();
    string typeToString();
    
};

#endif /* Entry_hpp */
