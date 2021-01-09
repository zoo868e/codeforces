#include<stdio.h>
#include<string.h>

void solve()
{
	int n,temp,one = 0,two = 0;
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d",&temp);
		if(temp % 2)one++;
		else two++;
	}
	if(one % 2 == 0 && two % 2 == 0)printf("YES\n");
	else if(two % 2 && one % 2 == 0 && one >= 2)printf("YES\n");
	else printf("NO\n");
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		solve();
	}
	return 0;
}
