/*
input:
3 4
1 2 3
1 2   = 3
1 3   = 6
2 3   = 5
1 2   = 3
*/
#include <stdio.h>

int main(){
  int snake[10000];
  int n, m;
  scanf("%d %d", &n, &m);  //輸入3, 4
  for(int i = 0; i<n; i++){
    scanf("%d", &snake[i]);  //將 1, 2, 3 存入snake[1, 2, 3]
  }
  int head, tail; //計算array的起始值
  int sum = 0;
  for (int j = 0; j<m; j++){
    scanf("%d %d", &head, &tail);
    for (int k = (head-1); k < (tail - 1); k++){ //輸入2,3;算array的第1項到第2項
      sum += snake[k];
    }
    printf("%d\n", sum);
  }
}
