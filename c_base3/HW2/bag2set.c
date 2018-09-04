/* bag2set.c */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dynArray.h"


/* Converts the input bag into a set using dynamic arrays 
	param: 	da -- pointer to a bag 	
	return value: void
        result: after exiting the function da points to a set 		
*/
void printDynArr(DynArr *da)
{
  int i;
  printf("\nArray size = %d\n", da->size);
  printf("Array capacity  = %d\n", da->capacity);
  printf("Array Contents: \n ====================== \n");
  for(i=0; i < da->size; i++)
    {
      printf("DA[%d] == ",i);
      printf("%c", da->data[i]);
      printf("\n");
    }
}

void bag2set(struct DynArr *da)
{
    

     /* FIX ME */

	int i;	
	for(i=0;i<da->size;i++){
	  addDynArr(da,i+'a');
	}
	int old_cap = da->capacity;
	printDynArr(da);
  

}



/* An example how to test your bag2set() */
int main(int argc, char* argv[]){

	int i;
        struct DynArr da;  /* bag */
        
        initDynArr(&da, 100);
        da.size = 10;
        da.data[0] = 1.3;
	for (i=1;i<da.size;i++){
	    da.data[i] = 1.2;
	 }

        printf("Bag:\n\n");
	for (i=0;i<da.size;i++){
          printf("%g  \n", da.data[i]);
        }
        
        printf("\n\n\n");
        printf("Set:\n\n");
        bag2set(&da);
	for (i=0;i<da.size;i++){
          printf("%g ", da.data[i]);
        }
        printf("\n");
        
	return 0;	
}

