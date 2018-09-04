/************************************************************
 * Author: Yue Fan
 * Data: 11/6/2016
 * Des:it is a roll die games, first time roll some number win or some loss, if nothor you need conution.
 * input: balance and wager
 * output: win or loss, balance.
 * **********************************************************/


#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

//function to get balance
void get_bank_balance(double &balance)
{
	cout << "please input how many money do you have : ";
	cin >> balance;
}
//function that to get the wager
void get_wager_amount(double &wager)
{
	cout << "how many wager: ";
	cin >> wager;
}

//function that check the wager should smaller than balance
int check_wager_amount(double wager, double balance)
{
	if (wager > balance)
	{
		cout << " You do not have enough money on your balance." <<endl;
		return 0;	
	}
	else return 1;

}

//function that roll die, give a random number between 1 to 6.
int roll_die(void)
{
	int roll_die;
	srand(time(NULL));
	roll_die = rand() % 6 +1;
	return roll_die;
}

//funtion that calcultor the sum of roll dice
int calculate_sum_dice(int die1_value, int die2_value)
{
	int sum;
	sum = die1_value + die2_value;
	return sum;
}

//function to check win or loss
int is_win_loss_or_point(int sum_dice)
{
	if(sum_dice == 7 || sum_dice == 11)
	{
		cout <<"You win!";
		return 1;
	}
	else if(sum_dice == 2 ||sum_dice == 3 ||sum_dice == 12)
		{
			cout << "You loss!";
			return 0;
		}
		else
			return -1;
}

//funtion that show win or loss when not frist time
int is_point_loss_or_neither(int sum_dice, int point_value)
{
	if(sum_dice == point_value)
	{
		cout << "You win." <<endl;
		return 1;
	}
	else
		if(sum_dice == 7)
		{
			cout << "You loss." << endl;
			return 0;	
		}
		else
			return -1;
}

// function that to get or loss your wager
void adjust_bank_balance(double &bank_balance, double wager_amount, int add_or_subtract)
{
	if(add_or_subtract == 1)
		bank_balance += wager_amount;
	else
		if(add_or_subtract == 0)
			bank_balance -= wager_amount;
	cout << "You balance amount is " << bank_balance << endl;
}
// main function
int main()
{
	double bal,wager; // banlance
	int ii;
	int die1,die2,sum,sum2; 
	int firstwinorloss; //get the result of the function is_win_loss_or_point()
	int loss_neither; // get the result of the funtion is_point_loss_or_neither()
	get_bank_balance(bal);
	do{		// get more times chance
		get_wager_amount(wager);
		if (check_wager_amount(wager,bal) == 0)
		{
			get_wager_amount(wager);
		}
		die1 = roll_die();
		die2 = roll_die();
		sum = calculate_sum_dice(die1, die2);
		firstwinorloss = is_win_loss_or_point(sum);
		int i = 1; //count hte number of times.
		if(firstwinorloss == -1)
		{	
			do{
				i++;
				die1 = roll_die();
				die2 = roll_die();
				sum2 = calculate_sum_dice(die1,die2);
				loss_neither = is_point_loss_or_neither(sum2,sum);
			}while(loss_neither == -1);
			adjust_bank_balance(bal,wager,loss_neither);
		}
		else
		adjust_bank_balance(bal,wager,firstwinorloss);
	cout << "do you want start next?(1for yes,0 for no)";
	cin >> ii;
	}
	while( ii==1 );
		cout << "your balance is " << bal << endl;
	return 0;
}
