#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdlib>
#include<cmath>
#include<string>
using namespace std;

bool bad(vector<int> x){
	for(int i = 1;i < (int)x.size();i++){
		if((x[i] % x[0]) != 0)return true;
	}
	return false;
}
bool f(vector<int> x, int t){
	for(int i = 0;i < (int)x.size();i++){
		if(x[i] == t)return true;
	}
	return false;
}
bool nice(vector<int> a){
	int t = a[1] - a[0];
	for(int i = 2;i < (int)a.size();i++){
		if((a[i] - a[i - 1]) != t)return false;
	}
	if(!f(a, t))return false;
	return true;
}
bool good(vector<int> a, int t){
	for(int i = 0;i < (int)a.size();i++){
		if(a[i] % t)return false;
	}
	return true;
}

void YES(vector<int> a, int dis){
	vector<int> temp;
	if(a[0] > dis)temp.push_back(dis);
	else temp.push_back(a[0]);
	while(temp[temp.size() - 1] < a[a.size() - 1])temp.push_back(temp[temp.size() - 1] + dis);
	cout << "YES\n" << temp.size() << endl;
	for(int i = 0 ;i < (int)temp.size();i++)cout << temp[i] << " ";
	cout << endl;
}

void solve(){
	int n;
	cin >> n;
	vector<int> a, x;
	int temp;
	int i = 0;
	while(i < n){
		cin >> temp;
		a.push_back(temp);
		i++;
	}
	sort(a.begin(), a.end());
	int minn = 101;
	for(int i = 1;i < (int)a.size();i++){
		minn = minn < (a[i] - a[i - 1]) ? minn:(a[i] - a[i - 1]);
	}
	if(a[0] < 0)cout << "No\n";
	else YES(a, 1);
/*	if(good(a, minn))YES(a, minn);
	else cout << "No\n";
	sort(x.begin(), x.end());
	if(a[0] < 0)cout << "No\n";
	else if(!good(a, x[0]))cout << "No\n";
	else if(nice(a)){
		cout << "YES\n";
		cout << a.size() << endl;
		for(int i = 0;i < (int)a.size();i++)
			cout << a[i] << " ";
		cout << endl;
	}
	else if(bad(x))cout << "No\n";
	else if(a[0] % x[0])cout << "No\n";
	else{
		vector<int> t;
		if(a[0] > x[0])t.push_back(x[0]);
		else t.push_back(a[0]);
		while(t[t.size() - 1] < a[a.size() - 1]){
			t.push_back(t[t.size() - 1] + x[0]);
		}
		if(f(t, x[0])){
			cout << "YES\n";
			cout << t.size() << endl;
			for(int i = 0;i < (int)t.size();i++)cout << t[i] << " ";
			cout << endl;
		}
		else cout << "No\n";
	}
	*/
}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

