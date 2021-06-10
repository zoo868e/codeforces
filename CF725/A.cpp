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
	int del[2];
	int temp, j = 0;
	for(int i = 1;i <= n;i++){
		cin >> temp;
		if(temp == 1 || temp == n){
			del[j] = i;
			j++;
		}
	}
	cout << min(del[1], min(del[0] + n - del[1] + 1, n - del[0] + 1)) << endl;

}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

