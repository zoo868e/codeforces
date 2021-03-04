#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main(){
	int n;
	scanf("%d", &n);
	char s[n + 10];
	scanf("%s", s);
	int a[26];
	memset(a, 0, sizeof(a));
	for(int i = 0;i < (int)strlen(s);i++){
		a[(s[i] | 0x20) - 'a']++;
	}
	int c = 0;
	for(int i = 0;i < 26;i++){
		if(a[i])c++;
	}
	if(c == 26)printf("YES\n");
	else printf("NO\n");
	return 0;
}

