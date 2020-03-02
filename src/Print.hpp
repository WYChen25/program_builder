//
//  Print.hpp
//  ProgramBuilder
//
//  Created by wyc on 2020/1/18.
//  Copyright © 2020 wyc. All rights reserved.
//

#ifndef Print_hpp
#define Print_hpp

#include "Struct.hpp"
#include <fstream>
#include<ctime>

class Print{
private:
    string dir;
    int count;
public:
    Print(string d);
    string getDir();
    void clear();
    void addCount();
    
    void printOut(Struct *s);
    void printTime();
    
};

#endif /* Print_hpp */
