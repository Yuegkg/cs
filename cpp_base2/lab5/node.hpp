#ifndef NODE_HPP
#define NODE_HPP


class Node {
   private:
      char data;
      Node* next;

   public:
      Node(char dataValue, Node* nextValue);
      char get_data();
      Node* get_next();
      void set_next(Node* temp);
};

#endif




