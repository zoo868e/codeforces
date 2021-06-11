#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<cstdlib>
#include<vector>

using namespace std;

class A{
	public:
		int price;
		int quality;
		A(int a, int b):price(a),quality(b){}
};

void solve(){
	int n, temp, temp2;
	cin >> n;
	vector<A> a;
	for(int i = 0;i < n;i++){
		cin >> temp >> temp2;
		a.push_back(A(temp, temp2));
	}
	sort(a.begin(), a.end(), [](A a, A b){
			return a.price < b.price;
			});
	//for(int i = 0;i < n;i++)cout << a[i].price << endl;
	for(int i = 0;i < n - 1;i++){
		if(a[i].quality > a[i + 1].quality){
			cout << "Happy Alex\n";
			return;
		}
	}
	cout << "Poor Alex\n";
}

int main(){
	solve();
	return 0;
}

