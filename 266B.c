#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
	int n,t;
	scanf("%d %d", &n, &t);
	char str[n + 1];
	scanf("%s", str);
	while(t--){
		for(int i = 1;i < (int)strlen(str);i++){
			if(str[i] == 'G' && str[i - 1] == 'B'){
				str[i] = 'B';
				str[i - 1] = 'G';
				i++;
			}
		}
	}
	printf("%s\n",str);
	return 0;
}

