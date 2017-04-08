#include <stdio.h>

void flip(int num){
  int r = num%10;
  num = num/10;
  printf("%d", r);
  if (a>0){     //不能用while!!
    flip(a);
  }
  //return 0;
}

int main(){
  int num;
  scanf("%d", &num);
  flip(num);
}
