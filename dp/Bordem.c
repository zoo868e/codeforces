#include <stdio.h>
#include <string.h>

long long int my_max();

int main(){
	long long int n,a[100002],ans = 0,index = 0;
	int temp;
	long long int dp[100002];
	memset(a,0,sizeof(a));
	memset(dp,0,sizeof(dp));
	scanf("%lld",&n);
	index = 0;
	while(index < n){
		scanf("%d",&temp);
		a[temp]++;
		index++;
	}
	dp[0] = 0;
	dp[1] = a[1];
	for(long long int i = 2;i < 100002;i++){
		dp[i] = my_max(dp[i-2]+i*a[i],dp[i-1]);
	}
	printf("%lld\n",dp[100001]);

	return 0;
}
long long int my_max(long long int a,long long int b)
{
	return a > b ? a:b;
}
