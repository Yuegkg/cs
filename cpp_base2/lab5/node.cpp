#include <iostream>
#include "node.hpp"

using namespace std;

Node::Node(char dataValue, Node* nextValue){
   data=dataValue;
   next=nextValue;
}

char Node::get_data(){
   return data;
}

Node* Node::get_next(){
   return next;
}

void Node::set_next(Node* temp){
   next=temp;
}
