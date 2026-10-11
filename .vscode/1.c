#include<stdio.h> 
int main ( )
  { long long x; 
scanf("%lld",&x);
  if ( x % 400 == 0) 
  { printf("Leap Year\n"); 
  } 
  else if ( x % 100 == 0) 
  { 
    printf("Not a Leap Year\n"); 
  } 
  else if ( x % 4 == 0) 
  { 
    printf("Leap Year\n"); 
  } 
  else 
  { 
    printf("Not a Leap Year\n"); 
  }
}