#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<cstdlib>
#include<vector>

using namespace std;

void solve(){
	long long int n;
	cin >> n;
	long long int small = 1000000000, big = 0, temp, sc = 1, bc = 1;
	for(int i = 0;i < n;i++){
		cin >> temp;
		if(temp < small){
			sc = 1;
			small = temp;
		}
		else if(temp == small){
			sc++;
		}
		if(temp > big){
			bc = 1;
			big = temp;
		}
		else if(temp == big){
			bc++;
		}
	}
	if(big == small)cout << "0 " << (n*n - n) / 2 <<"\n";
	else
		cout << big - small << " " << bc*sc << endl;

}

int main(){
	solve();
	return 0;
}

