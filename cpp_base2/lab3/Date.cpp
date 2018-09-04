#include <iostream>
#include <string>
#include "Date.h"

Date::Date()
{
   month = 1;
   day = 1;
   year = 1970;
}

Date::Date(int month1, int day1, int year1)
{
  check_month(month1);
  month = month1;
  
  check_day(day1);
  day = day1;
  
  check_year(year1);
  year = year1;
}
   

void Date::display_date_short()
{
   std::cout << month << "/" << day << "/" << year << std::endl;
}

void Date::display_date_long()
{
  std::string month_long;
  
  if(month == 1)
  {
    month_long = "January";
  }
  if(month == 2)
  {
    month_long = "February";
  }
  if(month == 3)
  {
    month_long = "March";
  }
  if(month == 4)
  {
    month_long = "April";
  }
  if(month == 5)
  {
    month_long = "May";
  }
  if(month == 6)
  {
    month_long = "June";
  }
  if(month == 7)
  {
    month_long = "July";
  }
  if(month == 8)
  {
    month_long = "August";
  }
  if(month == 9)
  {
    month_long = "September";
  }
  if(month == 10)
  {
    month_long = "October";
  }
  if(month == 11)
  {
    month_long = "November";
  }
  if(month == 12)
  {
    month_long = "December";
  }

  std::cout << month_long << " " << day << ", " << year << std::endl;

}

void Date::check_month(int &month1)//needs to be combined into the constructor
{
  
     while(month1 < 1 || month1 > 12)
     { 
       std::cout << "Only 1-12 for month. Enter again: ";
       std::cin >> month1;
     }

}

void Date::check_day(int &day1)
{   
   if(month == 9 || month == 4 || month == 6 || month == 11)
   {
     if(day1 >= 1 && day1 <= 30)
     { 
       day = day1;
     }
     else
     {
       while(day1 < 1 || day1 > 30)
       { 
         std::cout << "Only 1-30 for days. Enter again: ";
         std::cin >> day1;
       }
     }
   }
   else if(month == 2)
   {
     if(day1 >= 1 && day1 <=28)
     { 
       day = day1;
     }
     else
     {
       while(day1 < 1 || day1 > 28)
       {
         std::cout << "Only 1-28 days. Enter again: ";
         std::cin >> day1;
       } 
     }
   }
   else
   {
     if(day1 >= 1 && day1 <= 31)
     { 
       day = day1;
     }
     else
     {
       while(day1 < 1 || day1 > 31)
       { 
         std::cout << "Only 1-31 days. Enter again: ";
         std::cin >> day1;
       }
     }
   }
}

void Date::check_year(int &year1)
{ 
  while(year1 < 0)
  {
    std::cout << "Enter in positive numbers for year: ";
    std::cin >> year1;
  }
}
  
