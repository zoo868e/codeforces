#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
	int n, ans = 1, t;
	scanf("%d", &n);
	scanf("%d", &t);
	n--;
	int pre = t;
	while(n--){
		scanf("%d", &t);
		if(t != pre){
			ans++;
			pre = t;
		}
	}
	printf("%d\n", ans);
	return 0;
}

