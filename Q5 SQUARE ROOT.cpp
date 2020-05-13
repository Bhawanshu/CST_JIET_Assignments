// A C++ program to find floor(sqrt(x) 
#include <iostream>
#include <cmath>
using namespace std; 
  // ALGO
//Create a variable (counter) i and take care of some base cases, i.e when the given number is 0 or 1.
//Run a loop until i*i <= n , where n is the given number. Increment i by 1.
//The floor of the square root of the number is i – 1
int floorSqrt(int a) 
{ 
    // Base cases 
    if (a == 0 || a == 1) 
    return a; 
  
    int i = 1, r = 1; 
    while (r <= a) 
    { 
      i++; 
      r = i * i; 
    } 
    return i - 1; 
} 
  

int main() 
{ 
    int a = 11; 
    cout << floorSqrt(a); 
    return 0; 
} 
