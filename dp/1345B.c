#include<stdio.h>
#include<string.h>

int bs(long long int *,int,int,long long int);

int main(){
	int t,i,ans;
	int dplen = 25822;
	long long int level = 1,n,dp[25822],temp = 0;
	memset(dp,0,sizeof(dp));
	while(temp <= 1e10 && level < 25822){
		temp = 3*level - 1 + temp;
		dp[level] = temp;
		//printf("dp[%lld] = %lld\n",level,dp[level]);
		level++;
	}
	scanf("%d",&t);
	while(t--){
		scanf("%lld",&n);
		ans = 0;
		while(n >= dp[1]){
			i = bs(dp,1,dplen - 1,n);
			//printf("dp[%d] = %lld\n",i,dp[i]);
			ans += n/dp[i];
			n = n % dp[i];
		}
		printf("%d\n",ans);
	}
	return 0;
}

int bs(long long int *dp,int s,int e,long long int tar)
{
	if(s == e)return s;
	int mid = (s + e) / 2;
	if(dp[mid] == tar)return mid;
	if(dp[s] == tar)return s;
	if(dp[e] == tar)return e;
	else if(dp[mid] < tar && dp[mid + 1] > tar)return mid;
	else if(dp[mid] < tar)return bs(dp,mid + 1,e,tar);
	else return bs(dp,s,mid,tar);
}
