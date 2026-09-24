#include<stdio.h>
int main(){
  char greetings[]={'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
  char greetings2[]="Hello World!";  
  printf("%zu\n", sizeof(greetings));
  printf("%zu\n", sizeof(greetings2));  
  return 0;
}