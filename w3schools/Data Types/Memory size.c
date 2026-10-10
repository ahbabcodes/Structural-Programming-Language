#include<stdio.h>
int main(){
  int myInt;
  float myFloat;
  double myDouble;
  char myChar; 
  printf("%zu\n", sizeof(myInt));
  printf("%zu\n", sizeof(myFloat));
  printf("%zu\n", sizeof(myDouble));
  printf("%zu\n", sizeof(myChar));  
  return 0;
}