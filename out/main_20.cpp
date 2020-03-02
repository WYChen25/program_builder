//
//main_20.cpp
//Mon Mar  2 09:08:12 2020

#include "list.h"

int main(){
  int n = 5;  list *head = creat(n);
  long ariRes_0 = (long)1552602865%522557358;
  for(int i_1 = 0; i_1 < 5; i_1++){
    addI(head, i_1,9 );
  }
  int i_2 = 0;
  while(i_2 < 5){
    deleteI(head, i_2);
    i_2++;
  }
  deleteL(head);
  return 0;
}

