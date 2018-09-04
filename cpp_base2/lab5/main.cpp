#include <iostream>
#include "node.hpp"
#include "list.hpp"

using namespace std;

int main(){

	
  List *l = new List;
  
   char input='a';
  
   while(input!='0'){
	  cin.get(input);
      l->add_back(input);
   }


   while(!l->is_empty()){

	  
      cout << l->get_front();
	 
      l->remove_front();
   }
   cout << endl;
   
   return 0;
}
