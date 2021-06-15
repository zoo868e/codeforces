#include<iostream>
#include<map>
#include<algorithm>
#include<string>
#include<cmath>
#include<cstdlib>
#include<vector>

using namespace std;

bool exist(pair<string, int>a, string temp){
	return a.first == temp;
}

void solve(){
	int n;
	cin >> n;
	string temp;
	map<string, int> a;
	for(int i = 0;i < n;i++){
		cin >> temp;
		auto iter = a.find(temp);
		if(iter != a.end())
			iter->second = iter->second + 1;
		else
			a.insert(pair<string, int>(temp, 1));
	}
	int m = 0;
	string ms = "";
	for(auto x:a){
		if(x.second > m){
			ms = x.first;
			m = x.second;
		}
	}
	cout << ms << endl;
}

int main(){
	solve();
	return 0;
}

