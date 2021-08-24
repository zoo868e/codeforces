#include"bits/stdc++.h"
#define ll long long int

using namespace std;

void solve(){
	int n;
	cin >> n;
	ll a[n];
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	int low = 0, high = 0, ansh = 0, ansl = 0;
	for(int i = 1;i < n;i++){
		if(a[i] < a[i - 1] || a[i] < a[high]){
			if(a[i] < a[low])low = i;
		}
		else{
			if((a[high] - a[low]) > (a[ansh] - a[ansl])){
				ansh = high;
				ansl = low;
			}
			high = i;
			low = i;
		}
	}
	if((a[high] - a[low]) > (a[ansh] - a[ansl])){
			ansh = high;
			ansl = low;
	}
	int ans = 0, t = a[ansh] - a[ansl];
	while(t > 0){
		t /= 2;
		ans++;
	}
	cout << ans << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

