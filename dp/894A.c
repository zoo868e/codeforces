#include<stdio.h>
#include<string.h>

int main(){
	char s[110];
	memset(s,0,sizeof(s));
	gets(s);
	int dpQ[110],dpQA[110],dpQAQ[110],i = 1;
	memset(dpQ,0,sizeof(dpQ));
	memset(dpQA,0,sizeof(dpQA));
	memset(dpQAQ,0,sizeof(dpQAQ));
	if(s[0] == 'Q')dpQ[0] = 1;
	for(;s[i];i++){
		if(s[i] == 'Q')dpQ[i] = dpQ[i - 1] + 1;
		else dpQ[i] = dpQ[i - 1];
		if(s[i] == 'A' && i > 0){
			dpQA[i] = dpQA[i - 1] + dpQ[i - 1];
		}
		else dpQA[i] = dpQA[i - 1];
		if(s[i] == 'Q' && i > 1){
			dpQAQ[i] = dpQAQ[i - 1] + dpQA[i - 1];
		}
		else dpQAQ[i] = dpQAQ[i - 1];
		//printf("dpQ[%d] = %d, dpQA[%d] = %d, dpQAQ[%d] = %d\n",i,dpQ[i],i,dpQA[i],i,dpQAQ[i]);
	}
	printf("%d\n",dpQAQ[i - 1]);
	return 0;
}
