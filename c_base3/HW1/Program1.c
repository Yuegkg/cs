/* CS261- HW1 - Program1.c*/
/* Name:Yue Fan
 * Date:4/3/2018
 * Solution description:
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int foo(int* a, int* b, int c){
    /* Increment a */
    *a=*a+1;
    /* Decrement  b */
    *b=*b-1;
    /* Assign a-b to c */
    c=*a-*b;
    /* Return c */
	return c;	
}

int main(){
    /* Declare three integers x,y and z and initialize them randomly to values in [0,10] */
	int x;
	int y;
	int z;
	int c;
	srand((unsigned)time(NULL));
	x=rand()%10+0;
	y=rand()%10+0;
	z=rand()%10+0;
    /* Print the values of x, y and z */
    printf("x=%d\ny=%d\nc=%d\n",x,y,z);
    /* Call foo() appropriately, passing x,y,z as parameters */
    c=foo(&x,&y,z);
    /* Print the values of x, y and z */
    printf("x=%d\ny=%d\nc=%d\n",x,y,z);
    /* Print the value returned by foo */
	printf("foo reyurn value is %d\n",c);	 
    /* Is the return value different than the value of z?  Why? */
    /* c is passed by value and the function do not change its value. */
    return 0;
}
    
    
