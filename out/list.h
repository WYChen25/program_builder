//
//  list.h
//  lianbiao
//
//  Created by wyc on 2020/2/28.
//  Copyright © 2020 wyc. All rights reserved.
//

#ifndef list_h
#define list_h

#include <iostream>

struct list{
    int item;
    list* next;
};

list *creat(int n){
    if(n < 1){
        return NULL;
    }
    list *head = new list;
    head->item = 0;
    head->next = NULL;
    list*temp = head;
    for(int i = 1; i < n; i++){
        list *p = new list;
        p->item = i;
        p->next = NULL;
        temp->next = p;
    }
    return head;
}


list *transpose(list *head){
    list *temp = NULL;
    while(head != NULL){
        list *p = head;
        head = head->next;
        p->next = temp;
        temp = p;
    }
    return temp;
}


void deleteL(list *head){
    while(head != NULL){
        list *temp = head;
        head = head->next;
        delete temp;
    }
}

//
void addI(list *head,int position,int i){
    if(position < 0){
        list *p = new list;
        p->item = i;
        p->next = head;
        head = p;
        return;
    }
    
    if(head == NULL)
        return;
    list *temp = head;
    for(int i = 0; i < position; i++){
        if(temp ->next == NULL)break;
        temp = temp->next;
    }
    list *p = new list;
    p->item = i;
    temp->next = p;
}

//
void changeI(list* head, int position, int i){
    if(position < 0 || head == NULL)
        return;
    list *temp = head;
    for(int i = 0; i < position; i++){
        if(temp == NULL)return;
        temp = temp->next;
    }
    if(temp == NULL)
        return;
    temp->item = i;
}

bool findI(list* head, int i){
    if(head == NULL)
        return false;
    list *temp = head;
    while(temp != NULL){
        if(temp->item == i)
            return true;
        temp = temp->next;
    }
    return false;
}

//
void deleteI(list *head, int position){
    if(head == NULL)
        return;
    if(position <= 0){
        list *temp = head;
        head = head->next;
        delete temp;
        return;
    }
    list* temp = head;
    if(temp->next == NULL)
        return;
    for(int i = 0; i < position-1; i++){
        if(temp == NULL || temp->next == NULL)return;
        temp = temp->next;
    }
    list* p = temp->next;
    temp->next = p->next;
    delete p;
}


#endif /* list_h */
