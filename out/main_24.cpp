//
//main_24.cpp
//Mon Mar  2 09:08:12 2020

#include "list.h"

int main(){
  int n = 5;  list *head = creat(n);
  long ariRes_0 = (long)242755070/1913015837;
  for(int i_1 = 0; i_1 < 5; i_1++){
    deleteI(head, i_1);
  }
  for(int i_2 = 0; i_2 < 5; i_2++){
    changeI(head,i_2, 44);
  }
  deleteL(head);
  return 0;
}

