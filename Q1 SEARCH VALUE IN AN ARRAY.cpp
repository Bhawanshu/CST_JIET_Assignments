// C++ Program to search any element or number in an array
 
#include <iostream>
using namespace std;
   
int main(){
    int a[100], count, i, n;
       
    cout << "Enter Number of Elements in Array\n";
    cin >> count;
     
    cout << "Enter " << count << " numbers \n";
      
    
    for(i = 0; i < count; i++){
        cin >> a[i];
    }
      
    cout << "Enter a number to serach in Array\n";
    cin >> n;
      
   
    for(i = 0; i < count; i++){
        if(a[i] == n){
            cout << "Element found at index " << i;
            break;
        }
    }
      
    if(i == count){
        cout  << "Element Not Present in Input Array\n";
    }
 
    return 0;
}
