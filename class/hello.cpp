#include <iostream>
using namespace std;

int main() {
  int year;
  year: cout<<"enter a year: \n";
  cin>>year;
  if(year>1000 && year<9999)
  {
    goto leap;
  }

  else{
    goto year;
  }
  leap:
  if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
    cout<<"leap year";
  }

    else{
        cout<<"Not a leap year";
    }
  return 0;
  
}