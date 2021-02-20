#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int is(int);

int main(){
	int n;
	scanf("%d",&n);
	n++;
	while(is(n) == 0)n++;
	printf("%d\n",n);
	return 0;
}

int is(int n)
{
	int x[10];
	for(int i = 0;i < 10;i++)x[i] = 0;
	while(n){
		x[n % 10]++;
		if(x[n % 10] > 1)return 0;
		n = n / 10;
	}
	return 1;
}
