#include<stdio.h>
#include<string.h>

int mm(char a,char b,char c,char d)
{
	if(a == '2' && b == '0' && c == '2' && d == '0')return 1;
	else return 0;
}

void solve()
{
	int n;
	scanf("%d",&n);
	char w[n + 100];
	gets(w);
	gets(w);
	if(mm(w[0],w[1],w[2],w[3]) || mm(w[n - 4],w[n - 3],w[n - 2],w[n - 1]) || mm(w[0],w[1],w[n - 2],w[n - 1]) || mm(w[0],w[1],w[2],w[n - 1]) || mm(w[0],w[n - 3],w[n - 2],w[n - 1]))printf("YES\n");
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
