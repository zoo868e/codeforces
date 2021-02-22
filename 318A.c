#include<stdio.h>
#include<string.h>

int main(){
	long long int n,k;
	scanf("%lld %lld", &n, &k);
	long long int middle = n % 2 ? (n / 2 + 1):n / 2;
	if(k > middle)printf("%lld\n", (k - middle)*2);
	else printf("%lld\n", 2*k-1);
	return 0;
}
