//
//main_14.cpp
//Mon Mar  2 09:08:12 2020

#include "list.h"

int main(){
  int n = 5;  list *head = creat(n);
  long ariRes_0 = (long)687689393+238639997;
  int i_1 = 0;
  do{
    deleteI(head, i_1);
    i_1++;
  }while(i_1 < 5);
  for(int i_2 = 0; i_2 < 5; i_2++){
    changeI(head,i_2, 24);
  }
  deleteL(head);
  return 0;
}

