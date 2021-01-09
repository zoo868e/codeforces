#include<stdio.h>

void solve()
{
	int n,ans = 1;
	scanf("%d",&n);
	int x[n][n];
	char w[100];
	gets(w);
	for(int i = 0;i < n;i++){
		gets(w);
		int j = 0;
		while(w[j]){
			x[i][j] = w[j] - '0';
			j++;
		}
	}
	for(int i = 0;i < n - 1;i++){
		for(int j = 0;j < n - 1;j++){
			if(x[i][j] == 1 && x[i + 1][j] == 0 && x[i][j + 1] == 0)ans = 0;
		}
	}
	if(ans == 1)printf("YES\n");
	else printf("NO\n");
}

int main(){
	int t;
	char w[10];
	scanf("%d",&t);
	gets(w);
	while(t--)solve();
	return 0;
}
