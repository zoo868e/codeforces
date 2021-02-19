#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
	long long int k, n, w;
	scanf("%lld %lld %lld", &k, &n, &w);
	long long int ans = k * w * (1 + w) / 2;
	printf("%lld\n", ans > n ? (ans - n):0);
	return 0;
}

