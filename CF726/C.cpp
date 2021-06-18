#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<cstdlib>
#include<vector>

using namespace std;

void solve(){
	int n, mindis = 1000000000, minidx = 0;
	cin >> n;
	vector<int> h;
	h.resize(n);
	for(int i = 0;i < n;i++)cin >> h[i];
	sort(h.begin(), h.end());
	for(int i = 0;i < n - 1;i++){
		if(h[i + 1] - h[i] < mindis){
			mindis = h[i + 1] - h[i];
			minidx = i;
		}
	}
	int start = h[minidx], end = h[minidx + 1];
	h.erase(h.begin() + minidx);
	h.erase(h.begin() + minidx);
	cout << start << " ";
	for(int i = 0;i < (int)h.size();i++){
		if(h[i] < start);
		else{
			cout << h[i] << " ";
		}
	}
	for(int i = 0;i < (int)h.size();i++){
		if(h[i] >= start);
		else{
			cout << h[i] << " ";
		}
	}
	cout << end << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

