#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main(){
	int n;
	scanf("%d", &n);
	char hate[100] = "I hate ", love[100] = "I love ";
	while(n > 0){
		if(n > 2){
			printf("%sthat %sthat ",hate,love);
			n -= 2;
		}
		else if(n == 2){
			printf("%sthat %sit\n", hate, love);
			n -= 2;
		}
		else {
			printf("%sit\n", hate);
			n--;
		}

	}
	return 0;
}

