#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<cstdlib>
#include<vector>

using namespace std;

void p(vector<int> a){
	for(size_t i = 0;i < a.size();i++){
		cout << a[i] << " ";
	}
	cout << endl;
}

void solve(){
	int x1, y1, x2, y2, a, b;
	vector<int>pr;
	cin >> x1 >> y1 >> x2 >> y2;
	if(x1 > x2){
		swap(x1, x2);
		swap(y1, y2);
	}
	if(x1 != x2 && y1 != y2 && x2 != y2 && abs(x1 - x2) != abs(y1 - y2)){
		cout << -1 << endl;
	}
	else{
		if(x1 == x2){
			a = abs(y1 - y2);
			pr.clear();
			pr.push_back(x1 + a);
			pr.push_back(y1);
			pr.push_back(x1 + a);
			pr.push_back(y2);
		}
		else if(y1 == y2){
			a = abs(x1 - x2);
			pr.clear();
			pr.push_back(x1);
			pr.push_back(y1 + a);
			pr.push_back(x2);
			pr.push_back(y1 + a);
		}
		else{
			pr.clear();
			pr.push_back(x1);
			pr.push_back(y2);
			pr.push_back(x2);
			pr.push_back(y1);
		}
		p(pr);
	}
}

int main(){
	solve();
	return 0;
}

