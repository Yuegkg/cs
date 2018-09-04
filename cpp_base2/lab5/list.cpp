#include <iostream>
#include "list.hpp"
#include "node.hpp"

using namespace std;

List::List(){
   head = NULL;
   tail = NULL;
}

List::~List(){
   
}

void List::add_back(char c){
   if(tail==NULL){
      tail=new Node(c, NULL);
      head=tail;
   }
   else{
      Node* temp= new Node(c, NULL);
      tail->set_next(temp);
      tail=tail->get_next();
   }

}

char List::get_front(){
   return head->get_data();
}

void List::remove_front(){
   if(head != NULL){
      Node* temp=head;
      head=head->get_next();
      delete temp;
   }
}

bool List::is_empty(){
   if(head==NULL){
      return true;
   }
   else{return false;}
}
