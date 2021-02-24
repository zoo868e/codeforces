#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main(){
	long long int n, ans;
	scanf("%lld", &n);
	ans = n / 2;
	if(n % 2)ans -= n;
	printf("%lld\n", ans);
	return 0;
}

