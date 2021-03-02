#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int comp(const void *a, const void *b)
{
	int c = *(int *)a;
	int d = *(int *)b;
	if(c > d)return 1;
	else if(c == d)return 0;
	else return -1;
}

int main(){
	long long int s[4];
	for(int i = 0;i < 4;i++)scanf("%lld", &s[i]);
	qsort((void*)s, 4, sizeof(s[0]), comp);
	int sum = 0;
	for(int i = 0;i < 3;i++){
		if(s[i] == s[i + 1])sum++;
	}
	printf("%d\n", sum);
	return 0;
}

