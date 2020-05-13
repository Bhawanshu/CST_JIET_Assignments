// element that appears only once 
#include <iostream> 
using namespace std; 
  
int find(int a[], int ar_size) 
    { 
        // XOR operation  
        int res = a[0]; 
        for (int i = 1; i < ar_size; i++) 
            res = res ^ a[i]; 
  
        return res; 
    } 
  

int main() 
    { 
        int a[] = {2, 3, 5, 4, 5, 3, 4}; 
        int n = sizeof(a) / sizeof(a[0]); 
        cout << "Element occurring once is "
             << find(a, n); 
        return 0; 
    } 
