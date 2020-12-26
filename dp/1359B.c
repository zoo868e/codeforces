#include<stdio.h>
#include<string.h>

int main(){
	int n,m,t,x,y,ans;
	scanf("%d",&t);
	while(t--){
		ans = 0;
		scanf("%d%d%d%d",&n,&m,&x,&y);
		char temp[10000],a[n + 1][m + 10];
		memset(a,0,sizeof(a));
		gets(temp);
		for(int i = 1;i <= n;i++){
			gets(a[i]);
		}
		if(y >= x*2){
			for(int i = 1;i <= n;i++){
				for(int j = 0;j < m;j++){
					if(a[i][j] == '.')ans += x;
				}
			}
		}
		else{
			for(int i = 1;i <= n;i++){
				for(int j = 0;j < m;j++){
					if(a[i][j] == '.')ans += x;
					if(a[i][j] == '.' && j > 0 && a[i][j - 1] == '.'){
						ans = ans + y - 2*x;
						a[i][j] = '0';
						a[i][j - 1] = '0';
					}
				}
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}
