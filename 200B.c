#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main(){
	int n, all = 0, t;
	scanf("%d", &n);
	for(int i = 0;i < n;i++){
		scanf("%d", &t);
		all += t;
	}
	printf("%lf\n", all * 1.0 / n);
	return 0;
}

