//
//main_31.cpp
//Mon Mar  2 09:08:12 2020

#include "list.h"

int main(){
  int n = 5;  list *head = creat(n);
  bool logRes_0 = false&&false;
  if(true){
    bool logRes_1 = true||true;
    findI(head, 2);
    int i_2 = 0;
    while(i_2 < 5){
      changeI(head,i_2, 62);
      i_2++;
    }
  }
  deleteL(head);
  return 0;
}

