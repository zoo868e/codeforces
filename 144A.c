#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0;i < n;i++)scanf("%d", &a[i]);
	int max = n - 1, min = 0;
	for(int i = 0;i < n;i++){
		max = a[n - 1 - i] >= a[max] ? n - i - 1:max;
		min = a[i] <= a[min] ? i:min;
	}
	if(min < max)printf("%d\n", max + (n - 1) - min - 1);
	else if(min == max)printf("0\n");
	else printf("%d\n", max + (n - 1) - min);
	return 0;
}

