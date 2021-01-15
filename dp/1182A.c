#include<stdio.h>
#include<string.h>

int ipow(int a,int b)
{
	if(b == 1)return a;
	return a*ipow(a,b - 1);
}

void solve()
{
	int n;
	scanf("%d",&n);
	if(n % 2){
		printf("0\n");
		return;
	}
	else {
		int ans = ipow(2,n/2);
		printf("%d\n",ans);
		return;
	}
}

int main(){
	solve();
	return 0;
}
