#include <stdio.h>

int main(){
	int ans = 0,n;
	scanf("%d",&n);
	n = n + 1;
	long long int a[n],dp[n];
	dp[0] = 0;
	for(int i = 1;i < n;i++)scanf("%lld",&a[i]);
	for(int i = 1;i < n;i++){
		dp[i] = a[i-1] <= a[i] ? dp[i-1]+1:1;
		ans = ans > dp[i] ? ans:dp[i];
	}
	printf("%d\n",ans);
	return 0;
}
