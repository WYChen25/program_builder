#ifndef Struct_hpp
#define Struct_hpp

#include "Statement.hpp"

class Struct{
public:
    
/*variable*/
    vector<Struct*> body;
    int indent;
    int variable;
    State state;
    
/*method*/
    Struct();
    Struct(int i);
    void setIndent(int i);
    void insert(Struct &s);
    virtual void insert(Struct &s, int position);
    string indentToString();
    string bodyToString();
    virtual string toString();
    void setVariable(int i);
    
    void setState(State s);
    string stateToString();
    
    string listToString_adc(string var);
    string listToString_ft(string var);

    ~Struct();
    
};

#endif /* Struct_hpp */
