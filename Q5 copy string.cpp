// CPP program to copy one string to other 
// without using in-built function 
  
#include <stdio.h> 
int main() 
{ 
    // s1 is the input string and s2 is the destination string 
    char s1[] = "Story of my life", s2[100], i; 
  
    // Print s1 
    printf("%s\n", s1); 
  
    // Execute loop till null found 
    for (i = 0; s1[i] != '\0'; ++i) { 
        // copying the characters by 
        // character to str2 from str1 
        s2[i] = s1[i]; 
    } 
  
    s2[i] = '\0'; 
  
    // printing the destination string 
    printf("%s", s2); 
  
    return 0; 
} 
