#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<cstdlib>
#include<vector>

using namespace std;

void solve(){
	long long int n, l, r, i = 0;
	int sum = 0;
	cin >> n >> l >> r;
	vector<long long int> a;
	while(i < n){
		int temp;
		cin >> temp;
		if(temp < r)a.push_back(temp);
		i++;
	}
	sort(a.begin(), a.end());
	for(int i = 0;i < (int)a.size() - 1;i++){
		if(a[i] > r / 2)break;
		int j = (int)a.size() - 1, m = i + 1;
		while(a[i] + a[j] > r && j > i)j--;
		while(a[i] + a[m] < l && m > i)m++;
		if(j >= m)
			sum += j - m + 1;
	}
	cout << sum << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

