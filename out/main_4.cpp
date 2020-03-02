//
//main_4.cpp
//Mon Mar  2 09:08:12 2020

#include "list.h"

int main(){
  int n = 5;  list *head = creat(n);
  bool logRes_0 = false&&false;
  int i_1 = 0;
  while(i_1 < 5){
    deleteI(head, i_1);
    i_1++;
  }
  for(int i_2 = 0; i_2 < 5; i_2++){
    deleteI(head, i_2);
  }
  deleteL(head);
  return 0;
}

