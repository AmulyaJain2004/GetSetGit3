#include<stdio.h>
int addition(a, b){
  return a+b;
}

int square(a){
  return pow(a, 2);
}

int main(){
  int a, b;
  printf("Enter a number a and b: ")
  scanf("%d %d", &a, &b);
  printf("Addition of Two Numbers is ", addition(a, b));
  printf("Square of a Number a: ", square(a))
}
