//
//main_5.cpp
//Mon Mar  2 09:08:12 2020

#include "list.h"

int main(){
  int n = 5;  list *head = creat(n);
  int bitRes_0 = ~652250137;
  int i_1 = 0;
  while(i_1 < 5){
    for(int i_2 = 0; i_2 < 5; i_2++){
      addI(head, i_2,23 );
    }
    addI(head, i_1,69 );
    i_1++;
  }
  deleteL(head);
  return 0;
}

