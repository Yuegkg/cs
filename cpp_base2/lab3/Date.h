#ifndef DATE_H
#define DATE_H
#include <string>

class Date
{
   private:
      int month;
      int day;
      int year;

   public:
      Date();
      Date(int, int, int);
      void display_date_short();
      void display_date_long();
      void check_day(int&);
      void check_month(int&);
      void check_year(int&);
};
#endif
