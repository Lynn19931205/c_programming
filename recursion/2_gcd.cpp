#include <stdio.h>

int gcd (int a, int b){
  if (a%b == 0 ){
    return b;
  }
  else{
    return gcd(b, a%b);
  }
}

int main(){
  int num_1;
  int num_2;
  scanf("Please enter: %d, %d", &num_1, &num_2);
  int result = gcd(num_1, num_2);
  printf("%d", result);
}
