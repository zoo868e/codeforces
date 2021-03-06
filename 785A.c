#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main(){
	int n;
	scanf("%d", &n);
	char s[100];
	int ans = 0;
	for(int i = 0;i < n;i++){
		scanf("%s", s);
		if(s[0] == 'T')ans+=4;
		else if(s[0] == 'C')ans+=6;
		else if(s[0] == 'O')ans+=8;
		else if(s[0] == 'D')ans+=12;
		else if(s[0] == 'I')ans+=20;
	}
	printf("%d\n", ans);
	return 0;
}

