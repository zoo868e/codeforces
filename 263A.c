#include<stdio.h>
#include<stdlib.h>

int main(){
	int t, ans;
	for(int i = 0;i < 25;i++){
		scanf("%d",&t);
		if(t == 1)ans = i;
	}
	printf("%d\n", abs(ans / 5 - 2) + abs(ans % 5 - 2));
	return 0;
}
