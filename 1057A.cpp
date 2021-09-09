#include"bits/stdc++.h"
#define ll long long int

using namespace std;

void solve(){
	int n;
	cin >> n;
	int a[n + 1];
	for(int i = 2;i <= n;i++){
		cin >> a[i];
	}
	a[1] = -1;
	stack<int> stack;
	int w = n;
	while(w != -1){
		stack.push(w);
		w = a[w];
	}
	while(!stack.empty()){
		cout << stack.top() << " ";
		stack.pop();
	}
	cout << endl;
}

int main(){
	solve();
	return 0;
}

