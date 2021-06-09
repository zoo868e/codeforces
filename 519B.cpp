#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<cstdlib>
#include<vector>

using namespace std;

void solve(){
	int n, temp;
	cin >> n;
	int i;
	vector<int> err1, err2, err3;
	for(i = 0;i < n;i++){
		cin >> temp;
		err1.push_back(temp);
	}
	for(i = 0;i < n - 1;i++){
		cin >> temp;
		err2.push_back(temp);
	}
	for(i = 0;i < n - 2;i++){
		cin >> temp;
		err3.push_back(temp);
	}
	sort(err1.begin(), err1.end());
	sort(err2.begin(), err2.end());
	sort(err3.begin(), err3.end());
	i = 0;
	while(i < n - 1 && err1[i] == err2[i])
		i++;
	cout << err1[i] << endl;
	i = 0;
	while(i < n - 2 && err3[i] == err2[i])
		i++;
	cout << err2[i] << endl;


}

int main(){
	solve();
	return 0;
}

