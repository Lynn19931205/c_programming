/*
4 2 3 -1 0 1: f(x) = 2 + 3x + (-1)x^2 + 0*x^3 + 1*x^4
3 3 -2 0: f(x) 帶入3個值算出來
*/
#include <stdio.h>

int f(int x){
  int k = 1;
  int sum = 0;
  int item;
  for (int j=0; j<=n; j++){
    item = array[j]*k; 
    k = k*x;
    sum += item;
  }
}

int main(){
  int n;
  scanf("%d", &n); //讀入array長度n
  int array[&n]; //給array一個長度n
  for (i=0; i<=n; i++){
    scanf("%d", &array[i]); //把係數存進array裡面
  }
  int count;
  scanf("%d", &count); //f(x) 帶入3個值算出來
  for (int i=0; i<count; i++){ //f(x) 帶入3個值算出來
    int x;
    scanf("%d", &x);
    int result = f(x);
    printf("%d\n", result);
  }
}
