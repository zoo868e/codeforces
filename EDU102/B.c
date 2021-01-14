#include<stdio.h>
#include<string.h>

int gcd(int m,int n)
{
	int r;
	while(n != 0){
		r = m%n;
		m = n;
		n = r;
	}
	return m;
}

int lcm(int m,int n)
{
	return m*n/gcd(m,n);
}

void solve()
{
	char s[30],t[30];
	char x[10000],y[10000];

	scanf("%s %s",s,t);
	int slen = (int)strlen(s);
	int tlen = (int)strlen(t);
	if(s[0] != t[0] || s[slen - 1] != t[tlen - 1]){
		printf("-1\n");
		return;
	}
	strcpy(x,s);
	strcpy(y,t);
	int l = lcm(slen,tlen);
	for(int i = 1;i < l/tlen;i++){
		strcat(y,t);
	}
	for(int i = 1;i < l/slen;i++){
		strcat(x,s);
	}
	if(strcmp(x,y) == 0)printf("%s\n",x);
	else printf("-1\n");
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--)solve();
	return 0;
}
