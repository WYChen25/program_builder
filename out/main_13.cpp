//
//main_13.cpp
//Mon Mar  2 09:08:12 2020

#include "list.h"

int main(){
  int n = 5;  list *head = creat(n);
  long ariRes_0 = (long)1033563106*99901959;
  int i_1 = 0;
  do{
    int i_2 = 0;
    do{
      changeI(head,i_2, 37);
      i_2++;
    }while(i_2 < 5);
    changeI(head,i_1, 60);
    i_1++;
  }while(i_1 < 5);
  deleteL(head);
  return 0;
}

