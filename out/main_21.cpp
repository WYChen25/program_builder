//
//main_21.cpp
//Mon Mar  2 09:08:12 2020

#include "list.h"

int main(){
  int n = 5;  list *head = creat(n);
  long ariRes_0 = (long)767007782%1902942780;
  for(int i_1 = 0; i_1 < 5; i_1++){
    int i_2 = 0;
    while(i_2 < 5){
      changeI(head,i_2, 72);
      i_2++;
    }
    deleteI(head, i_1);
  }
  deleteL(head);
  return 0;
}

