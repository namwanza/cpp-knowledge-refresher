#include <iostream>
#include <cmath>
using namespace std;

int main() {
  float a = 4.02;
  float b = 2.45;
  float computeSqrt;
  // write your code here
  a *= a;
  b *= b;
  computeSqrt = sqrt(a + b);
  cout << "Answer is: " << computeSqrt<<endl;
  return 0;
}