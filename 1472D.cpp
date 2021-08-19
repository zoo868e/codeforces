#include"bits/stdc++.h"
#define ll long long int

using namespace std;

void solve(){
	int n, ta;
	cin >> n;
	vector<int> a, b;
	for(int i = 0;i < n;i++){
		cin >> ta;
		if(ta % 2)b.push_back(ta);
		else a.push_back(ta);
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	ll Alice = 0, Bob = 0, At = (int)a.size(), Bt = (int)b.size();
	for(int i = 0;i < n;i++){
		if(i % 2 == 0){
			if(Bt && At){
				if(a[At - 1] >= b[Bt - 1]){
					Alice += a[At - 1];
					At--;
				}
				else{
					Bt--;
				}
			}
			else if(At){
				Alice += a[At - 1];
				At--;
			}
			else{
				Bt--;
			}
		}
		else {
			if(Bt && At){
				if(b[Bt - 1] >= a[At - 1]){
					Bob += b[Bt - 1];
					Bt--;
				}
				else{
					At--;
				}
			}
			else if(Bt){
				Bob += b[Bt - 1];
				Bt--;
			}
			else{
				At--;
			}
			
		}
	}
//	cout << "Alice: " << Alice << ", Bob: " << Bob << endl;
	if(Alice == Bob)cout << "Tie\n";
	else if(Alice > Bob) cout << "Alice\n";
	else cout << "Bob\n";
}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

