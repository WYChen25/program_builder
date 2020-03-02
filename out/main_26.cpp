//
//main_26.cpp
//Mon Mar  2 09:08:12 2020

#include "list.h"

int main(){
  int n = 5;  list *head = creat(n);
  int shiftRes_0 = 1099706881<<31;
  for(int i_1 = 0; i_1 < 5; i_1++){
    deleteI(head, i_1);
  }
  if(false){
    int bitRes_2 = ~354494928;
    findI(head, 2);
  }
  deleteL(head);
  return 0;
}

