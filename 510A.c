#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			if(i % 2){
				if(j == m - 1 && i % 4 == 1)
					printf("#");
				else if(j == 0 && i % 4 == 3)
					printf("#");
				else printf(".");
			}
			else
				printf("#");
		}
		printf("\n");
	}
	return 0;
}

