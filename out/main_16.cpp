//
//main_16.cpp
//Mon Mar  2 09:08:12 2020

#include "list.h"

int main(){
  int n = 5;  list *head = creat(n);
  int shiftRes_0 = 916203691<<19;
  int i_1 = 0;
  do{
    addI(head, i_1,48 );
    i_1++;
  }while(i_1 < 5);
  if(true){
    int shiftRes_2 = 37346107<<8;
    transpose(head);
  }
  deleteL(head);
  return 0;
}

