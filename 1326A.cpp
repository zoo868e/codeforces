#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<cstdlib>
#include<vector>

using namespace std;

void solve(){
	int n;
	cin >> n;
	if(n == 1)cout << -1 << endl;
	else{
		cout << 2;
		n--;
		while(n > 0){
			cout << 3;
			n--;
		}
		cout << endl;
	}

}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

