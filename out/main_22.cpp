//
//main_22.cpp
//Mon Mar  2 09:08:12 2020

#include "list.h"

int main(){
  int n = 5;  list *head = creat(n);
  int shiftRes_0 = 1639018156<<11;
  for(int i_1 = 0; i_1 < 5; i_1++){
    deleteI(head, i_1);
  }
  int i_2 = 0;
  do{
    changeI(head,i_2, 55);
    i_2++;
  }while(i_2 < 5);
  deleteL(head);
  return 0;
}

