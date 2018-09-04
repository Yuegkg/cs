/*****************************************************************************
 * author Yue Fan
 * date:10/16/2016
 * Description: Coulatite value
 * input: score data
 * output: valeu
 ********************************************************************/
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int te;				
int tes;
int as;
int ass;
int la;
int lab;
int qu;
int qui;
int avgt, avga, avgl, avgq;
int tot, toa, tol, toq;
int totalt, totala, totall, totalq, totalpq;


int main()				//main function
	{
	void input_test();		//call function
	void input_assignment();
	void input_labs();
	void input_quizzes();
	
	cout << "How many tsets?:";		//input
	cin >> te;
	input_test();
	cout << endl <<  "weight for the test(only number):";
	cin >> tes;
	avgt = totalt / te ;			//calcultor the average test score
	tot = avgt * tes / 100;			// calcultor how many point in the total score.

	cout << "How many assignments?:";	//function for the assigments
	cin >> as;
	input_assignment();
	cout << endl << "weight for the assignment:";
	cin >> ass;
	avga = totala / as ;
        toa = avga * ass / 100;


	cout << "How many labs?:";		// function for the labs
	cin >> la;
	input_labs();
	cout << endl << "weight for the labs:";
        cin >> lab;
	avgl = totall/ la ;
        tol = avga * lab / 10;			//lab's full point is 10

	cout <<"How many quizzes?:";		//function for the quizzes
	cin >> qu;
	input_quizzes();
	cout << endl << "weight for the quizzes:";
        cin >> qui;
	avgq = totalq  * 100 / totalpq;		//because it's int so first *100, and then / full point
        toq = avgq * qui / 100;
	cout << toq << endl;

	char final_point;			// input char
	int fin;
	int wfin;
	int tfin;
	cout << "Do you have final?yes(y),no(n)";
	cin >> final_point;
	if (final_point = 'y')			//check for the final.
		{
		cout << "how many points you got in the final? ";
		cin >> fin;
		cout << "weight for the final: ";
		cin >> wfin;
		tfin = fin * wfin / 100;
		}
	else
		tfin = 0;
	int last;
	last = tot + toa + tol +toq + tfin;		//calcultor the total score.
	cout << "Total point is: " << last << "%" << endl;;
	return 0;

	}

void input_test()			//function test
	{
	int i;
	int temt;
	
	for (i=0; i<te; i++)		// loop te times
		{
		cout << "test " << i+1 << " score:";
		cin >> temt;
		totalt += temt;
		}
	}	
void input_assignment()			//function assignment
        {
        int i;
	int tema;

        for (i=0; i<as; i++)
                {
                cout << "assignments " << i+1 << " score:";
                cin >> tema;
		totala += tema;
                }
        }
void input_labs()			//function labs
        {
        int i;
	int teml;

        for (i=0; i<la; i++)
                {
                cout << "labs " << i+1 << " score:";
                cin >> teml;
		totall += teml;
                }
        }
void input_quizzes()			//funcition quizzes
        {
        int i;
	int temq;
	int tempq;

        for (i=0; i<qu; i++)
                {
                cout << "quizzes " << i+1 << " score:";		
                cin >> temq;
		totalq += temq;				//calcultor how many point did you get
		cout << "How many points for quizze " << i+1 << ": ";
		cin >> tempq;
		totalpq += tempq;			// calcultor total point does the test have.
                }
        }

