#include <stdio.h>

int main(){
	long long int ans = 0,n;
	scanf("%lld",&n);
	ans += n/100;
	n = n%100;
	ans += n/20;
	n = n%20;
	ans += n/10;
	n = n%10;
	ans += n/5;
	n = n%5;
	ans += n;
	printf("%lld",ans);
	return 0;
}
