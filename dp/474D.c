#include<stdio.h>
#include<string.h>

#define modu 1000000007

long long int mmax(long long int a,long long int b)
{
	return a > b ? a:b;
}


void solve()
{
	long long int t,k;
	scanf("%lld %lld",&t,&k);
	long long int dp[100100],a[t],b[t],sum[100100];
	memset(dp,0,sizeof(dp));
	memset(sum,0,sizeof(sum));
	sum[0] = 0;
	for(long long int i = 0;i < t;i++){
		scanf("%lld %lld",&a[i],&b[i]);
	}
	for(long long int i = 1;i < 100100;i++){
		if(i < k)dp[i] = 1;
		else if(i == k)dp[i] = 2;
		else {
			dp[i] = (dp[i - k] % modu + dp[i - 1] % modu) % modu;
		}
		sum[i] = (sum[i - 1] + dp[i]) % modu;
	}
	for(long long int i = 0;i < t;i++){
		long long int out = sum[b[i]] - sum[a[i] - 1];
		if(out < 0)out = out + modu;
		printf("%lld\n",out);
	}
}

int main(){
	solve();
	return 0;
}
