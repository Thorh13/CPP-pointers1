#include <iostream>
using namespace std;

// Function prototypes
int do_something(int *, int *);

int main() 
{
  int x = 10, y = 2;

  cout  << "Before calling the function:\n"
        << "x = " << x << endl
        << "y = " << y << endl << endl;
  
  cout  << "The function returns "
        << do_something(&x, &y) << endl << endl;

  cout  << "After calling the function:\n"
        << "x = " << x << endl
        << "y = " << y << endl << endl;

  return 0;
}

int do_something(int *x, int *y)
{
  int temp = *x;
  *x = *y * 10;
  *y = temp * 10;
  return *x + *y;
}