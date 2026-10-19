#include<stdio.h>
int main(){
  int time=16;
  if(time<12){
    printf("Good morning.");
  }else if(time<18){
    printf("Good day.");
  }else{
    printf("Good evening.");
  }
  return 0;
}