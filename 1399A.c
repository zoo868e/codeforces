    #include<stdio.h>
    #include<string.h>
     
    void solve()
    {
    	int n[110], x, tmp;
    	scanf("%d", &x);
    	memset(n, 0, sizeof(n));
    	for(int i = 0;i < x;i++){
    	    scanf("%d", &tmp);
    	    n[tmp] = 1;
    	}
    	int i = 0;
    	while(!n[i])i++;
    	while(n[i])i++;
    	while(!n[i])i++;
    	if(i != 110)printf("NO\n");
    	else printf("YES\n");
    }
     
    int main(){
        int t;
        scanf("%d", &t);
        while(t--){
    	    solve();
        }
    	return 0;
    }
