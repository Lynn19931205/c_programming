#include <stdio.h>

int power(int a, int n){
	int i;
	int c;
	int b = 1;
	if (n < 0){
		printf("%s\n", "Not Admitted!");
		return 0;
	}
	if (n==0){
		a = 1;
		printf("%d", a);
		return a;
	}
	for (i=1; i<=n; i++){
		c = b*a;
		b = c;
	}
	return c;
}

int main(){
  scanf("%d", &num_1);
  scanf("%d", &num_2);
  int result = power(num_1, num_2);
  printf("%d", result);
}
