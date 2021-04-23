#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main(){
	long long int n, m;
	scanf("%lld %lld", &n, &m);
	long long int h[m], turn = 0;
	for(int i = 0;i < m;i++)
		scanf("%lld", &h[i]);
	for(int i = 0;i < m - 1;i++){
		if(h[i] > h[i + 1])turn++;
	}
	printf("%lld\n", turn * n + h[m - 1] - 1);
	return 0;
}

