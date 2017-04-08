//輸入包含兩個數字n, m(n<m, n>0, m<=1000000)
//代表所有尋找 armstrong number 的範圍
//將所有範圍內的 armstrong number 依序由小到大輸出
//如果沒有找到請輸出 none.

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

int main(void) {
	int num;
	for (num = 1; num<=1000000; num++){
		int n = 0;
		int temp_num = num;
		while (temp_num > 0){
			int a = temp_num % 10;
			temp_num = temp_num / 10;
			n = n+1;
		}

		int sum = 0;
		int temp1_num = num;
		while ( temp1_num > 0){
			int a = temp1_num % 10;
			temp1_num = temp1_num / 10;
			sum += power(a, n);
		}
		if (sum == num){
			printf("%d\n", num);
		}
	}
	return 0;
}
