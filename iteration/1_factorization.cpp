//輸入一個整數，大於 1 且小於等於 1000000
//輸出該整數的因數分解

#include <stdio.h>
int main(){
  int num;
  scanf("%d", &num);

  int temp_num = num;
  int i;
  for (i = 0; i < 1000000; i++){
  int r = temp_num%i;
  if(r == 0){
    printf("%d", r);
    }
  }
  return 0;
}
