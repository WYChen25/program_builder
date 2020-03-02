//
//main_8.cpp
//Mon Mar  2 09:08:12 2020

#include "list.h"

int main(){
  int n = 5;  list *head = creat(n);
  bool logRes_0 = true&&false;
  int i_1 = 0;
  while(i_1 < 5){
    addI(head, i_1,92 );
    i_1++;
  }
  if(true){
    bool logRes_2 = false||true;
    findI(head, 3);
  }else{
    int ariDes_2 = 892344579;  int ariRes_2 = ariDes_2--;
    transpose(head);
  }
  deleteL(head);
  return 0;
}

