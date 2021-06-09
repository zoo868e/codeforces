#include<iostream>
#include<string>
#include<cmath>
#include<cstdlib>
#include<vector>

using namespace std;

int solve(int n, int m){
	if(n > m)return n - m;
	else if(n == m)return 0;
	else if(m % 2){
		if(n <= (m + 1) / 2)
			return 2 + solve(n, (m + 1) / 2);
		else{
			int a = n - (m + 1) / 2 + 2;
			int b = solve(n, m+1) + 1;
			return a > b ? b:a;
		}
	}
	else{
		if(n <= m / 2)
			return 1 + solve(n, m / 2);
		else{
			int a = n - m / 2 + 1;
			int b = solve(2*n, m);
			return a > b ? b:a;
		}
	}
}

int main(){
	int n, m;
	cin >> n >> m;
	cout << solve(n, m) << endl;
	return 0;
}

