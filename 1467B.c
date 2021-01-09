#include<stdio.h>
#include<string.h>

int n,x[300010];

int isHV(int a)
{
	return (a > 0 && a < n - 1 && ((x[a] < x[a - 1] && x[a] < x[a + 1]) || (x[a] > x[a - 1] && x[a] > x[a + 1])));
}

void solve()
{
	scanf("%d",&n);
	int ans = 0,is[n],s = 0;
	memset(is,0,sizeof(is));
	for(int i = 0;i < n;i++)scanf("%d",&x[i]);
	for(int i = 1;i < n - 1;i++){
		if(isHV(i)){
			s++;
			is[i] = 1;
		}
	}
	ans = s;
	for(int i = n - 2;i > 0;i--){
		int temp = x[i];
		x[i] = x[i - 1];
		ans = ans < (s - is[i - 1] - is[i] - is[i + 1] + isHV(i - 1) + isHV(i) + isHV(i + 1)) ? ans:(s - is[i - 1] - is[i] - is[i + 1] + isHV(i - 1) + isHV(i) + isHV(i + 1));
		x[i] = x[i + 1];
		ans = ans < (s - is[i - 1] - is[i] - is[i + 1] + isHV(i - 1) + isHV(i) + isHV(i + 1)) ? ans:(s - is[i - 1] - is[i] - is[i + 1] + isHV(i - 1) + isHV(i) + isHV(i + 1));
		x[i] = temp;
		if((s - ans) == 3)break;
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
