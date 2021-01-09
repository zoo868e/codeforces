#include<stdio.h>
#include<string.h>

void solve()
{
	//0 = rest.2 = sport,1 = contest,3 = all
	int n,ans = 0;
	scanf("%d",&n);
	int x[n],dp[n],done[n];
	memset(dp,0,sizeof(dp));
	memset(done,0,sizeof(done));
	for(int i = 0;i < n;i++)scanf("%d",&x[i]);
	if(x[0] == 0){
		dp[0] = 1;
	}
	done[0] = x[0];
	for(int i = 1;i < n;i++){
		if(x[i] == 0){
			dp[i] = dp[i - 1] + 1;
			done[i] = 0;
		}
		else if(x[i] == 1){
			if(done[i - 1] != 1){
				dp[i] = dp[i - 1];
				done[i] = 1;
			}
			else{
				dp[i] = dp[i - 1] + 1;
				done[i] = 0;
			}
		}
		else if(x[i] == 2){
			if(done[i - 1] != 2){
				dp[i] = dp[i - 1];
				done[i] = 2;
			}
			else{
				dp[i] = dp[i - 1] + 1;
				done[i] = 0;
			}
		}
		else{
			dp[i] = dp[i - 1];
			if(done[i - 1] == 1)done[i] = 2;
			else if(done[i - 1] == 2)done[i] = 1;
			else done[i] = 3;
		}
		//printf("x[%d] = %d,dp[%d] = %d,done[%d] = %d\n",i,x[i],i,dp[i],i,done[i]);
	}
	printf("%d\n",dp[n - 1]);
}

int main(){
	int t = 1;
	//char w[10];
	//scanf("%d",&t);
	//gets(w);
	while(t--)solve();
	return 0;
}
