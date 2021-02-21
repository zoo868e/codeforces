#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int comp(const void *a, const void *b)
{
	int c = *(int *)a;
	int d = *(int *)b;
	if(c > d)return 1;
	else if(c == d)return 0;
	else return -1;
}

int main(){
	int n;
	scanf("%d", &n);
	int s[5];
	memset(s, 0, sizeof(s));
	for(int i = 0;i < n;i++){
		int t;
		scanf("%d", &t);
		s[t]++;
	}
	int ans = s[4];
	ans += s[3];
	s[1] = s[3] > s[1] ? 0:s[1] - s[3];
	ans += s[2] / 2;
	ans += s[2] % 2;
	if(s[2] % 2)s[1] = s[1] > 2 ? (s[1] - 2):0;
	ans += s[1] / 4;
	if(s[1] % 4)ans++;
	printf("%d\n", ans);
	return 0;
}

