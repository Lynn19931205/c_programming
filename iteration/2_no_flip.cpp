//輸入包含一個整數，不超過 100000
//輸出翻轉過後的數字
//倒轉後有0的話要去掉 e.g. 1020 => 201

#include <stdio.h>
int main(){
  int num;
  scanf("%d", &num); 
  int status = 0;
  while (num > 0){
    int a = num % 10;
    num = num / 10;
    if (a != 0){
      status = 1;
    }
    if (status ==1){
      printf("%d", a);
    }
  }
  printf("\n");
  return 0;
}
