#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	char w[110];
	int sum;
	gets(w);
	for(int i = 0;i <(int) strlen(w);i++){
		for(int j = i + 1;j <(int) strlen(w);j++){
			for(int k = j + 1;k <(int) strlen(w);k++){
				sum = w[i] - '0';
				sum = 10*sum + w[j] - '0';
				sum = 10*sum + w[k] - '0';
				if(!(sum % 8)){
					printf("YES\n");
					printf("%d\n",sum);
					return 0;
				}
			}
		}
	}
	for(int i = 0;i < (int) strlen(w);i++){
		for(int j = i + 1;j <(int) strlen(w);j++){
			sum = (w[i] - '0')*10 + w[j] - '0';
			if(!(sum%8)){
				printf("YES\n%d\n",sum);
				return 0;
			}
		}
	}
	for(int i = 0;i < (int)strlen(w);i++){
		if(!((w[i] - '0')%8)){
			printf("YES\n%c\n",w[i]);
			return 0;
		}
	}
	printf("NO\n");
	return 0;
}
