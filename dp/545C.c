#include<stdio.h>
#include<string.h>
#include<limits.h>

#define lli long long int

void solve()
{
	int n,ans;
	scanf("%d",&n);
	lli x[n],h[n];
	for(int i = 0;i < n;i++)scanf("%lld %lld",&x[i],&h[i]);
	if(n == 1){
		printf("1\n");
		return;
	}
	else if(n == 2){
		printf("2\n");
		return;
	}
	lli right;
	right = x[0];
	ans = 2;
	for(int i = 1;i < n - 1;i++){
		lli nextX = x[i + 1],preX = x[i - 1],nowX = x[i],nowH = h[i];
		if((nowX - nowH) > preX && (nowX - nowH) > right){
			ans++;
			right = nowX;
		}
		else if((nowX + nowH) < nextX){
			ans++;
			right = nowH + nowX;
		}
		else right = nowX;
	}
	printf("%d\n",ans);
}

int main(){
	solve();
	return 0;
}
