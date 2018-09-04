ort(number,n);
* CS261- HW1 - Program3.c*/
/* Name:
 * Date:
 * Solution description:
 */
 
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include<time.h>

void sort(int* number, int n){
     /*Sort the array of integeres of length n*/     
	int i=0;
	int j=0;
	int temp;
	for(i;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(number[i]<number[j])
			{
				temp=number[i];
				number[i]=number[j];
				number[j]=temp;
			}
		}
	}	
}

int main(){
    /*Declare an integer n and assign it a value of 20.*/
	int n=20;    
    /*Allocate memory for an array of n integers using malloc.*/
	int *number = NULL;  
  number = (int *)malloc(sizeof(int)*n);
    /*Fill this array with random numbers, using rand().*/
	int i;
	for(i=0;i<n;i++)
	{
		number[i]=rand();
	}		
   
    /*Print the contents of the array.*/
	printf("The array: ");
	for(i=0; i<n; i++){
		printf(" %d\n",number[i]);
	}
    /*Pass this array along with n to the sort() function of part a.*/
    sort(number,n);
    /*Print the contents of the array.*/    
    	printf("the new array:\n");
	for(i=0;i<20;i++)
	{
		printf("%d \n", number[i]);
	}
 
 free(number);
	return 0;
}
