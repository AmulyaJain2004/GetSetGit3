#include<stdio.h>
int addition(a, b){
  return a+b;
}

int main(){
  int a, b;
  scanf("%d %d", &a, &b);
  printf("Addition of Two Numbers is ");
  addition(a, b);
}
