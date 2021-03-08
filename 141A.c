#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main(){
	char s1[110], s2[110], t[110];
	int alp[26];
	memset(alp, 0, sizeof(alp));
	scanf("%s %s %s", s1, s2, t);
	for(int i = 0;s1[i];i++){
		alp[s1[i] - 'A']++;
	}
	for(int i = 0;s2[i];i++){
		alp[s2[i] - 'A']++;
	}
	for(int i = 0;t[i];i++){
		alp[t[i] - 'A']--;
	}
	int ans = 0;
	for(int i = 0;i < 26;i++){
		if(alp[i] != 0)ans = 1;
	}
	if(ans == 0)printf("YES\n");
	else printf("NO\n");
	return 0;
}

