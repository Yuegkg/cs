#ifndef LIST_HPP
#define LIST_HPP

#include "node.hpp"

class List{
   private:
      Node* head;
      Node* tail;

   public:
      List();
      ~List();
      void add_back(char);
      char get_front();
      void remove_front();
      bool is_empty();
	void Front();
	void Back();

};

#endif



