#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main(){
	int t;
	scanf("%d", &t);
	int c = 0, tmp, max, min;
	if(t--){
		scanf("%d", &max);
		min = max;
	}
	while(t--){
		scanf("%d", &tmp);
		if(tmp > max){
			c++;
			max = tmp;
		}
		if(tmp < min){
			c++;
			min = tmp;
		}
	}
	printf("%d\n", c);
	return 0;
}

