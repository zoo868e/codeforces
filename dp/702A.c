#include<stdio.h>
#include<string.h>

int main(){
	int n,max = 0;
	scanf("%d",&n);
	long long int now,pre,dp[n + 1];
	memset(dp,0,sizeof(dp));
	pre = 0;
	for(int i = 1; i <= n; i++){
		scanf("%lld",&now);
		if(now > pre)dp[i] = dp[i - 1] + 1;
		else dp[i] = 1;
		pre = now;
		max = max > dp[i] ? max:dp[i];
	}
	printf("%d\n",max);
	return 0;
}
