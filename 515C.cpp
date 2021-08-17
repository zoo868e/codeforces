#include"bits/stdc++.h"
#define ll long long int

using namespace std;

int a[10];

void deal(char c){
	if(c == '9'){
		a[7]++;
		a[3] += 2;
		a[2]++;
	}

	else if(c == '8'){
		a[7]++;
		a[2] += 3;
	}
	else if(c == '7'){
		a[7]++;
	}
	else if(c == '6'){
		a[5]++;
		a[3]++;
	}
	else if(c == '5'){
		a[5]++;
	}
	else if(c == '4'){
		a[3]++;
		a[2] += 2;
	}
	else if(c == '3'){
		a[3]++;
	}
	else if(c == '2'){
		a[2]++;
	}
}

void solve(){
	int n;
	string s;
	cin >> n >> s;
	memset(a, 0, sizeof(a));
	for(int i = 0;i < n;i++){
		deal(s[i]);
	}
	for(int i = 9;i > 1;i--){
		for(int j = 0;j < a[i];j++)cout << i;
	}
	cout << endl;
}

int main(){
	solve();
	return 0;
}

