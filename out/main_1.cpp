//
//main_1.cpp
//Mon Mar  2 09:08:12 2020

#include "list.h"

int main(){
  int n = 5;  list *head = creat(n);
  int shiftRes_0 = 1315658804<<25;
  int i_1 = 0;
  while(i_1 < 5){
    int i_2 = 0;
    while(i_2 < 5){
      changeI(head,i_2, 74);
      i_2++;
    }
    addI(head, i_1,38 );
    i_1++;
  }
  deleteL(head);
  return 0;
}

