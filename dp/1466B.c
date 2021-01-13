#include<stdio.h>
#include<string.h>

void solve()
{
	int n,ans = 1;
	scanf("%d",&n);
	int x[n],map[2*(n + 1)];
	memset(map,0,sizeof(map));
	for(int i = 0;i < n;i++)scanf("%d",&x[i]);
	map[x[0] - 1] = 1;
	for(int i = 1;i < n;i++){
		if(map[x[i] - 1] == 1){
			if(map[x[i]] == 0){
				ans++;
				map[x[i]] = 1;
			}
		}
		else {
			ans++;
			map[x[i] - 1] = 1;
		}
	}
	printf("%d\n",ans);
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		solve();
	}
	return 0;
}
