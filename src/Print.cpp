//
//  Print.cpp
//  ProgramBuilder
//
//  Created by wyc on 2020/1/18.
//  Copyright © 2020 wyc. All rights reserved.
//

#include "Print.hpp"


Print::Print(string d){
    count = 0;
    dir = d;
    ofstream out(getDir());
}

string Print::getDir(){
    return dir+"main_"+to_string(count)+".cpp";
}

void Print::addCount(){
    count++;
}

void Print::clear(){
    ofstream out(getDir());
    if(out.is_open())
        out.close();
}

void Print::printOut(Struct *s){
    ofstream out(getDir(),ios::out|ios::ate|ios::app);
    if(out.is_open()){
        out << s->toString()<< endl;
        out.close();
        return;
    }
    cout << "file open erro in func2" << endl;
    return;
}

void Print::printTime(){
    time_t now = time(0);
    string dt = ctime(&now);
    
    ofstream out(getDir(),ios::out|ios::ate|ios::app);
    if(out.is_open()){
        out << "//" << endl;
        out << "//main_"+to_string(count)+".cpp" << endl;
        out << "//"+dt << endl;
        out.close();
        return;
    }
    cout << "file open in time erro" << endl;
    return;
}
