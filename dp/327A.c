#include <stdio.h>
#include <string.h>

int cal(int*,int,int,int);

int main(){
	int n,max = 0;
	scanf("%d",&n);
	int a[n + 1];
	a[0] = -1;
	for(int i = 1;i <= n;i++){
		scanf("%d",&a[i]);
	}
	int dp[n+1][n+1];
	memset(dp,0,sizeof(dp));
	for(int i = 1;i <= n;i++){
		for(int j = i;j <= n;j++){
			dp[i][j] = cal(a,i,j,n);
			max = dp[i][j] > max ? dp[i][j] : max;
		}
	}
	printf("%d\n",max);
	return 0;
}

int cal(int *a,int I,int J,int len)
{
	int ans = 0;
	if(len == 1)return 1 - a[1];
	for(int i = 1;i < I;i++){
		ans += a[i];
	}
	for(int i = I;i <= J;i++){
		if(a[i] == 0)ans++;
	}
	if(len <= J)return ans;
	for(int i = J+1;i <= len;i++){
		ans += a[i];
	}
	return ans;
}
