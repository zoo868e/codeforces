#include<stdio.h>
#include<string.h>

#define lli long long int

const lli mod = 1e9 + 7;

void dfs();
void solve();
void Add(lli *a, lli b)
{
	*a += b;
	*a = *a >= mod ? *a-mod:*a;
}

void dfs(lli sum,int n,int k,int d,lli *ans,int flag)
{
	if(sum == n){
		if(flag)
			*ans += 1;
		return;
	}
	else{
		for(int i = 1;i <= k;i++){
			if((sum + i) <= n){
				if(i >= d)dfs(sum + i,n,k,d,ans,1);
				else dfs(sum + i,n,k,d,ans,flag);
			}
			else break;
		}
	}
}

void solve()
{
	int n,k,d;
	scanf("%d %d %d",&n,&k,&d);
	lli dp[100][2];
	dp[0][0] = 1;
	dp[0][1] = 0;
	for(int i = 1;i <= n;i++){
		dp[i][0] = 0;
		dp[i][1] = 0;
		for(int j = 1;j <= k;j++){
			if(i - j < 0)break;
			if(j < d){
				Add(&dp[i][0],dp[i - j][0]);
				Add(&dp[i][1],dp[i - j][1]);
			}
			else{
				Add(&dp[i][1],dp[i - j][0]);
				Add(&dp[i][1],dp[i - j][1]);
			}
		}
	}
	printf("%lld\n",dp[n][1]);
}

int main(){
	solve();
	return 0;
}
