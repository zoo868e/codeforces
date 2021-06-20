#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<cstdlib>
#include<vector>

using namespace std;

void solve(){
	int n, k;
	cin >> n >> k;
	if(n == k){
		cout << "YES\n";
		for(int i = 0;i < n;i++){
			cout << "1 ";
		}
		cout << endl;
	}
	else if(n < k)cout << "NO\n";
	else{
		int z = k - 1;
		if((n - z) % 2 && (n - z) > 0){
			cout << "YES\n";
			for(int i = 0;i < z;i++){
				cout << "1 ";
			}
			cout << n - z << endl;
		}
		else{
			z *= 2;
			if((n - z) % 2 == 0 && (n - z) > 0){
				cout << "YES\n";
				for(int i = 0;i < z;i+=2){
					cout << "2 ";
				}
				cout << n - z << endl;
			}
			else cout << "NO\n";
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

