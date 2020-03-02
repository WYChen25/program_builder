//
//main_12.cpp
//Mon Mar  2 09:08:12 2020

#include "list.h"

int main(){
  int n = 5;  list *head = creat(n);
  int shiftRes_0 = 689511005>>12;
  int i_1 = 0;
  do{
    changeI(head,i_1, 79);
    i_1++;
  }while(i_1 < 5);
  int i_2 = 0;
  do{
    deleteI(head, i_2);
    i_2++;
  }while(i_2 < 5);
  deleteL(head);
  return 0;
}

