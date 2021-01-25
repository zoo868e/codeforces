#include<stdio.h>
#include<string.h>

#define lli long long int
#define maxi 100000
#define pmax 10000000

int dp[maxi];
lli prime[pmax];
int cnt;

lli llmax(lli a,lli b)
{
	return a > b ? a:b;
}

int imax(int a,int b)
{
	return a > b ? a:b;
}

void llswap(lli *a,lli *b)
{
	lli temp = *b;
	*b = *a;
	*a = temp;
}

void iswap(int *a,int *b)
{
	int temp = *b;
	*b = *a;
	*a = temp;
}

void solve()
{
	lli n;
	scanf("%lld",&n);
	/*
	for(int i = 0;i <= cnt && prime[i]<= n;i++){
		if(prime[i]%2 && n%prime[i] == 0){
			printf("YES\n");
			return;
		}
	}
	*/
	if(n%2)printf("YES\n");
	else printf("NO\n");
}

int main(){
	int t,flag;
	scanf("%d",&t);
	prime[0] = 2;
	cnt = 1;
	/*
	for(lli i = 3;i < 1e7;i++){
		flag = 1;
		for(lli j = 0;flag && j < cnt && prime[j]*prime[j] <= i;j++){
			if((i%prime[j]) == 0)flag = 0;
		}
		if(flag){
			prime[cnt] = i;
			cnt++;
		}
	}
	*/
	while(t--)solve();
	return 0;
}
