#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<cstdlib>
#include<vector>

using namespace std;

int bs(int a[], int target, int n){
	int l = 0, r = n;
	while(l < r){
		int mid = (l + r) / 2;
		if(a[mid] == target)
			return mid;
		if(a[mid] > target)
			r = mid - 1;
		else
			l = mid + 1;
	}
	if(a[l] < target)
		return l + 1;
	else return l;
}

void solve(){
	int n, m;
	cin >> n;
	int l[n + 1];
	l[0] = 0;
	int temp;
	for(int i = 0;i < n;i++){
		cin >> temp;
		l[i + 1] = l[i] + temp;
	}
	cin >> m;
	for(int i = 0;i < m;i++){
		cin >> temp;
		cout << bs(l, temp, n) << endl;
	}

}

int main(){
	solve();
	return 0;
}

