//
//main_6.cpp
//Mon Mar  2 09:08:12 2020

#include "list.h"

int main(){
  int n = 5;  list *head = creat(n);
  int shiftRes_0 = (unsigned)1249464498>>17;
  int i_1 = 0;
  while(i_1 < 5){
    deleteI(head, i_1);
    i_1++;
  }
  if(false){
    bool logRes_2 = true||true;
    findI(head, 2);
  }
  deleteL(head);
  return 0;
}

