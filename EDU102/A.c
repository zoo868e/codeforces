#include<stdio.h>
#include<string.h>

void solve()
{
	int n,d,ans = 1;
	scanf("%d %d",&n,&d);
	int x[n];
	for(int i = 0;i < n;i++){
		scanf("%d",&x[i]);
		if(x[i] > d)ans = 0;
	}
	for(int i = 0;i < n - 1;i++){
		for(int j = i + 1;j < n;j++){
			if((x[i] + x[j]) <= d){
				ans = 1;
			}
		}
	}
	if(ans)printf("YES\n");
	else printf("NO\n");
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--)solve();
	return 0;
}
