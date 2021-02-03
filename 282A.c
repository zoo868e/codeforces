#include<stdio.h>
#include<string.h>

void solve(int t)
{
	int x = 0,l;
	char in[10];
	while(t--){
		l = 0;
		scanf("%s",in);
		if(in[l] == 'X'){
			l++;
		}
		if(in[l] == '+')x++;
		else x--;
	}
	printf("%d\n",x);
}

int main(){
	int t;
	scanf("%d",&t);
	solve(t);
	return 0;
}
