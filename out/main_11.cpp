//
//main_11.cpp
//Mon Mar  2 09:08:12 2020

#include "list.h"

int main(){
  int n = 5;  list *head = creat(n);
  int bitRes_0 = 1799063918|297520066;
  int i_1 = 0;
  do{
    int i_2 = 0;
    while(i_2 < 5){
      deleteI(head, i_2);
      i_2++;
    }
    changeI(head,i_1, 29);
    i_1++;
  }while(i_1 < 5);
  deleteL(head);
  return 0;
}

