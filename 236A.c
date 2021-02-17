#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
	int a[26];
	memset(a, 0, sizeof(a));
	char input[110];
	int count = 0;
	scanf("%s", input);
	for(int i = 0;i < (int)strlen(input);i++)a[input[i] - 'a']++;
	for(int i = 0;i < 26;i++)
		if(a[i])count++;
	if(count % 2)printf("IGNORE HIM!\n");
	else printf("CHAT WITH HER!\n");
	return 0;
}

