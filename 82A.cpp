#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<cstdlib>
#include<vector>

using namespace std;

void solve(){
	int n, i = 1;
	cin >> n;
	string n1[5] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
	int sum = 0;
	for(i = 5;sum < n;i = i * 2)sum += i;
	if(n <= 5)
		cout << n1[n - 1] << endl;
	else
		cout << n1[(n - sum + i / 2) / (i / 2 / 5)] << endl;
}

int main(){
	solve();
	return 0;
}

