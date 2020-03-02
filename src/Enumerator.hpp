//
//  Enumerator.hpp
//  ProgramBuilder
//
//  Created by wyc on 2020/1/18.
//  Copyright © 2020 wyc. All rights reserved.
//

#ifndef Enumerator_hpp
#define Enumerator_hpp

#include "Entry.hpp"
#include "MainS.hpp"
#include "IF.hpp"
#include "IE.hpp"
#include "While.hpp"
#include "DoWhile.hpp"
#include "For.hpp"
#include "Print.hpp"

class Enumerator{
private:
    long num_templates;
    long num_programs;
    long num_programs_valid;
    Print *printPrograms;
    
public:
    void init();
    void enumerate(int len);
    void enumerateRec(Entry *list,int c_len, int len,int begin);
    void generate(Entry *list, int len);
    void initPairs(Entry *list, int len);
    void generateEachProgram(Entry *list, int len);
    void generateRec(Entry *list, int len_l, vector<Pair> &pairs, int c_len);
    Struct* generateProgram(Entry *list,int len, vector<Pair> pairs);
};


#endif /* Enumerator_hpp */
