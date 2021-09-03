#include"bits/stdc++.h"
#define ll long long int


using namespace std;

int bs(vector<int> a, int lb, int start, int end){
	if(start == end)return start;
	int mid = (start + end) / 2;
//	cout << "start = " << start << ", end = " << end << endl;
	if(a[mid] < lb)return bs(a, lb, mid + 1, end);
	else if(a[mid] == lb)return mid;
	else return bs(a, lb, start, mid);
}

void solve(){
	int n, t;
	ll ans = 0;
	cin >> n;
	vector<int> a, b, c;
	a.resize(n);
	b.resize(n);
	for(int i = 0;i < n;i++)cin >> a[i];
	for(int i = 0;i < n;i++){
		cin >> t;
		b[i] = a[i] - t;
	}
	sort(b.begin(), b.end());
//	for(auto x:b)cout << x << " ";
//	cout << endl;
	for(int i = 0;i < n - 1;i++){
		int s = i + 1, e = n - 1;
		if(b[i] > 0)ans += n - 1 - i;
		else{
			int lb = -b[i] + 1;
			while(s < e){
				int m = s + (e - s) / 2;
				if(b[m] >= lb)e = m;
				else s = m + 1;
			}
			if(s < n && b[s] < lb)s++;
			ans += n - s;
		}
	}
	cout << ans << endl;
}

int main(){
	solve();
	return 0;
}

