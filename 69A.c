#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
	int n;
	scanf("%d", &n);
	int input[3], temp;
	memset(input, 0 ,sizeof(input));
	for(int i = 0;i < n;i++){
		for(int j = 0;j < 3;j++){
			scanf("%d",&temp);
			input[j] += temp;
		}
	}
	for(int i = 0;i < 3;i++){
		if(input[i]){
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n");
	return 0;
}

