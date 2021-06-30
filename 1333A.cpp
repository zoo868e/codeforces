#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<cstdlib>
#include<vector>
#include"bits/stdc++.h"

using namespace std;

void solve(){
	int n, m;
	cin >> n >> m;
	if(n % 2 && m % 2){
		for(int i = 0;i < n;i++){
			for(int j = 0;j < m;j++){
				if((i * m + j) % 2)cout << "W";
				else cout << "B";
			}
			cout << endl;
		}
	}
	else if(n % 2){
		for(int i = 0;i < n - 1;i++){
			for(int j = 0;j < m;j++){
				if((i * m + j) % 2)cout << "B";
				else cout << "W";
			}
			cout << endl;
		}
		for(int i = 1;i <= m - 1;i++){
			if(i % 2)cout << "B";
			else cout << "W";
		}
		cout << "B\n";
	}
	else if(m % 2){
		for(int i = 0;i < n - 1;i++){
			for(int j = 0;j < m;j++){
				if((i * m + j) % 2)cout << "W";
				else cout << "B";
			}
			cout << endl;
		}
		for(int i = 0;i < m - 1;i++){
			if(i % 2)cout << "B";
			else cout << "W";
		}
		cout << "B\n";
	}
	else{
		for(int i = 0;i < n - 1;i++){
			for(int j = 0;j < m;j++){
				if((i * m + j) % 2)cout << "B";
				else cout << "W";
			}
			cout << endl;
		}
		for(int i = 1;i <= m - 1;i++){
			if(i % 2)cout << "B";
			else cout << "W";
		}
		cout << "B\n";
	}
}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

