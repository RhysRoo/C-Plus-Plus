#include <iostream>
#include <cmath>
using namespace std;

double circumferenceOfCircle (int radius)
{
  double q;
  q=2*M_PI*radius;
  return q;

}

int main ()
{
  double z;
  z = circumferenceOfCircle(5);
  cout << "The circumference of circle is: " << z;
}