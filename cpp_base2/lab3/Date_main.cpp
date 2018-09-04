#include <iostream>
#include <string>
#include "Date.h"

using namespace std;

int main()
{
  int mon, dy, yr;

  cout << "Give a month, day, and year for beginning: " << endl;
  cout << "Month: ";
  cin >> mon;
  cout << "Day: ";
  cin >> dy;
  cout << "Year: ";
  cin >> yr;
  
  Date Beginning (mon, dy, yr);
  
  cout << "Give a month, day, and year for ending: " << endl;
  cout << "Month: ";
  cin >> mon;
  cout << "Day: ";
  cin >> dy;
  cout << "Year: ";
  cin >> yr;
  
  Date Ending (mon, dy, yr);
  
  Date date_array[2] = {Beginning, Ending};
  
  cout << "Beginning: " << endl;
  Beginning.display_date_short();
  Beginning.display_date_long();
  
  cout << "Ending: " << endl;
  Ending.display_date_short();
  Ending.display_date_long();

   return 0;
}
