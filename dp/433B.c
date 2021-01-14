#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define lli long long int

int comp(const void * a,const void *b)
{
	lli c = *(lli*)a;
	lli d = *(lli*)b;
	if(c < d)return -1;
	else if(c == d)return 0;
	else return 1;
}

void solve()
{
	lli n;
	scanf("%lld",&n);
	lli v[n];
	for(lli i = 0;i < n;i++)scanf("%lld",&v[i]);
	lli dp[n + 1];
	memset(dp,0,sizeof(dp));
	for(lli i = 1;i <= n;i++)dp[i] = dp[i - 1] + v[i - 1];
	qsort((void*)v,n,sizeof(v[0]),comp);
	lli dps[n + 1];
	memset(dps,0,sizeof(dps));
	for(lli i = 1;i <= n;i++){
		dps[i] = dps[i - 1] + v[i - 1];
	}
	lli t;
	scanf("%lld",&t);
	while(t--){
		lli type,l,r;
		scanf("%lld %lld %lld",&type,&l,&r);
		if(type == 1){
			printf("%lld\n",dp[r] - dp[l - 1]);
		}
		else {
			printf("%lld\n",dps[r] - dps[l - 1]);
		}
	}
}

int main(){
	solve();
	return 0;
}
