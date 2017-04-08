/*
input:
3 3
1 2 3
1 2
1 3
2 3
*/
#include <stdio.h>

int main(){
  int snake[10000];
  int n, m;
  scanf("%d %d", &n, &m);
  for(int i = 0; i<n; i++){
    scanf("%d", &snake[i]);
  }
  int head, tail;
  int sum = 0;
  for (int j = 0; j<m; j++){
    scanf("%d%d", &head, &tail);
    for (int k = 0; k < (head-tail); k++){
      sum += snake[k];
    }
    printf("%d", sum);
  }
}
