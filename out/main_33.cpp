//
//main_33.cpp
//Mon Mar  2 09:08:12 2020

#include "list.h"

int main(){
  int n = 5;  list *head = creat(n);
  bool logRes_0 = true||true;
  if(true){
    bool logRes_1 = true&&true;
    transpose(head);
    int i_2 = 0;
    do{
      deleteI(head, i_2);
      i_2++;
    }while(i_2 < 5);
  }
  deleteL(head);
  return 0;
}

