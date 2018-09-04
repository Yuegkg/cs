/* CS261- HW1 - Program2.c*/
/* Name:
 * Date:
 * Solution description:
 */
 
#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

struct student{
	char initials[2];
	int score;
};

struct student* allocate(){
     /*Allocate memory for ten students*/
    struct student* p;
    p=(struct student*)malloc(sizeof(struct student)*10);
     /*return the pointer*/
    return p;
}

void generate(struct student* students){
     /*Generate random initials and scores for ten students.
	The two initial letters must be capital and must be between A and Z. 
	The scores must be between 0 and 100*/
	int i=0;
	srand((unsigned)time(NULL));
	
	for(;i<10;i++)
	{
		students[i].initials[1]='A'+rand()%26;
 		students[i].initials[2]='A'+rand()%26;
		students[i].score=rand()%100+0;
	}	

}
void output(struct student* students){
     /*Output information about the ten students in the format:
              1. Initials  Score
              2. Initials  Score
              ...
              10. Initials Score*/
	int i=0;
	for(i;i<10;i++)
	{
		printf("Initials:%c%c  Score:%d\n",students[i].initials[1],students[i].initials[2],students[i].score);
	}
}

void summary(struct student* students){
     /*Compute and print the minimum, maximum and average scores of the ten students*/
	int min=0;
	min=students[0].score;
	int max=0;
	max=students[0].score;
	int i=0;
	int total=0;
	for (i;i<10;i++)
	{
		if(min>students[i].score);
		{
			min=students[i].score;
		}
		if(max<students[i].score);
		{
			max=students[i].score;
		}
		total=total+students[i].score;
	}
	double avg=0;
	avg=total/10;
	printf("min: %d; max: %d; avg: %.8f",min,max,avg);

}

void deallocate(struct student* stud){
     /*Deallocate memory from stud*/
	if(stud!=NULL)
	{
		free(stud);
	}
}

int main(){
    struct student* stud = NULL;
    
    /*call allocate*/
    stud = allocate();
    /*call generate*/
	generate(stud);    
    /*call output*/
	output(stud);    
    /*call summary*/
    	summary(stud);
    /*call deallocate*/
	deallocate(stud);
    return 0;
}
