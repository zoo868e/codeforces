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
	int a,b,k,sum = 0;
	scanf("%d %d %d",&a,&b,&k);
	int boy[k],girl[k];
	for(int i = 0;i < k;i++)scanf("%d",&boy[i]);
	for(int i = 0;i < k;i++)scanf("%d",&girl[i]);
	if(k == 1){
		printf("0\n");
		return;
	}
	for(int i = 0;i < k - 1;i++){
		for(int j = i + 1;j < k;j++){
			if(boy[i] != boy[j] && girl[i] != girl[j])sum++;
		}
	}
	printf("%d\n",sum);
}

int main(){
	int t,flag;
	scanf("%d",&t);
	while(t--)solve();
	return 0;
}
