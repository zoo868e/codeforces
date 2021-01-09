#include <stdio.h>
#include <string.h>

int my_max();

int main(){
	int n,a[4],max;
	scanf("%d %d %d %d",&n,&a[1],&a[2],&a[3]);
	int dp[n+1];
	dp[0] = 0;
	for(int i = 1;i <= n;i++){
		max = -1;
		if((i - a[1]) >= 0)max = my_max(max,dp[i-a[1]]);
		if((i - a[2]) >= 0)max = my_max(max,dp[i-a[2]]);
		if((i - a[3]) >= 0)max = my_max(max,dp[i-a[3]]);
		if(max == -1)
			dp[i] = max;
		else dp[i] = max + 1;
	}
	printf("%d\n",dp[n]);
	return 0;
}

int my_max(int a,int b)
{
	return a > b ? a : b;
}
