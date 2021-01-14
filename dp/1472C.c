#include<stdio.h>
#include<string.h>

void solve()
{
	long long int n,max = 0;
	scanf("%lld",&n);
	long long int x[n + 1],dp[n + 1];
	memset(dp,0,sizeof(dp));
	for(int i = 1;i <= n;i++)scanf("%lld",&x[i]);
	for(int i = n;i > 0;i--){
		dp[i] = x[i];
		if((i + x[i]) <= n)dp[i] = dp[i] + dp[i + x[i]];
		max = max > dp[i] ? max:dp[i];
	}
	printf("%lld\n",max);
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--)solve();
	return 0;
}
