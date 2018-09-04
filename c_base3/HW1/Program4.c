/* CS261- HW1 - Program4.c*/
/* Name:Yue Fan
 * Date:4/9/2018 
 * Solution description:random name and sort by score
 */
 
#include <stdio.h>
#include <stdlib.h>

struct student{
	char initials[2];
	int score;
};

void sort(struct student* students, int n){
     /*Sort n students based on their initials*/
	int j;
	struct student temp;   /*for saving temp#*/
	int i=0;
	for(i;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(students[i].score<students[j].score)
			{
				temp.initials[1]=students[i].initials[1];
				temp.initials[2]=students[i].initials[2];

				temp.score=students[i].score;

				students[i].initials[1]=students[j].initials[1];
				students[i].initials[2]=students[j].initials[2];

				students[i].score=students[j].score;

				students[j].initials[1]=temp.initials[1];
				students[j].initials[2]=temp.initials[2];

				students[j].score=temp.score;
			}
		}
	}	     
}

int main(){
    /*Declare an integer n and assign it a value.*/
    int n=10;
	int i =0;
    /*Allocate memory for n students using malloc.*/
    struct student*students = (struct student*)malloc(sizeof(struct student)*n);
    /*Generate random IDs and scores for the n students, using rand().*/
    int Id =0;
	Id =rand();
	for(i;i<n;i++)
	{
		students[i].initials[1]='A'+rand()%26;
		students[i].initials[2]='A'+rand()%26;
		students[i].score=rand()%100;
	}
    /*Print the contents of the array of n students.*/

	for(i=0;i<n;i++)
		{
		printf("initials %c%c  Score%d\n",students[i].initials[1],students[i].initials[2],students[i].score);
		}
    /*Pass this array along with n to the sort() function*/
    	sort(students, n);
    /*Print the contents of the array of n students.*/
	for(i=0;i<n;i++)
	{
		printf("initials %c%c  Score%d\n",students[i].initials[1],students[i].initials[2],students[i].score);
	}
    return 0;
}
