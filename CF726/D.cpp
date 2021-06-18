#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<cstdlib>
#include<vector>

using namespace std;

static int winner[1000000001];

vector<int> fac;
vector<int> buildfac(int n, vector<int> primes){
	vector<int> ret;
	for(int i = 0;i < (int)primes.size();i++){
		if(n % primes[i] == 0)ret.push_back(primes[i]);
	}
	return ret;
}
/*
bool dfs(int n){
	cout << "now n = " << n << endl;
	vector<int> frac = buildfac(n);
	if(frac.size() == 0)return false;
	else {
		for(int i = 1;i < (int)frac.size() && frac[i] < n;i++){
//			cout << "i = " << i << endl;
			if(!dfs(n - frac[i]))return true;
		}
		return false;
	}
}
*/
void solve(){
	long long int n;
	cin >> n;
	if(winner[n] == 1)cout << "Bob\n";
	else cout << "Alice\n";
}

int main(){
	vector<int> primes;
	primes.push_back(2);
	winner[0] = 1;
	winner[1] = 1;
	winner[2] = 1;
	for(int i = 3;i <= 1000000000;i++){
		bool prime = true;
		for(int j = 0;j < (int)primes.size();j++){
			if(j % primes[j] == 0){
				prime = false;
				break;
			}
		}
		if(prime){
			primes.push_back(i);
			winner[i] = 1;
		}
		else{
			vector<int> frac = buildfac(i, primes);
			bool win = false;
			for(int j = 0;i < (int)frac.size();i++){
				if(winner[i - frac[j]] == 1){
					win = true;
					break;
				}
			}
			if(!win)winner[i] = 1;
			else winner[i] = 0;
		}
	}
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}
 
