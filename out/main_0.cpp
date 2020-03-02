//
//main_0.cpp
//Mon Mar  2 09:08:12 2020

#include "list.h"

int main(){
  int n = 5;  list *head = creat(n);
  long ariRes_0 = (long)753862718%17184126;
  int i_1 = 0;
  while(i_1 < 5){
    deleteI(head, i_1);
    i_1++;
  }
  int i_2 = 0;
  while(i_2 < 5){
    addI(head, i_2,61 );
    i_2++;
  }
  deleteL(head);
  return 0;
}

