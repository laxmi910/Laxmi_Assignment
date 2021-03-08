#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
  
// Function to concatenate 
// two integers into one 
int concat(int a, int b) 
{ 
  
    char s1[20]; 
    char s2[20]; 
  
    // Convert both the integers to string 
    sprintf(s1, "%d", a); 
    sprintf(s2, "%d", b); 
  
    // Concatenate both strings 
    strcat(s1, s2); 
  
    // Convert the concatenated string 
    // to integer 
    int c = atoi(s1); 
  
    // return the formed integer 
    return c; 
    }
    int main() 
{ 
    int a = 23; 
    int b = 43; 
  
    printf("%d\n", concat(a, b)); 
  
    return 0; 
} 
