#include"bits/stdc++.h"
#define ll long long int

using namespace std;

bool isprime(int a){
	if(a <= 2) return true;
	for(int i = 2;i * i <= a;i++){
		if(a % i == 0)return false;
	}
	return true;
}

void solve(){
	int n, x, y;
	cin >> n >> x >> y;
	if(n == 2)cout << x << " " << y << endl;
	/*
	else if(isprime(y - x)){
		int t = y - x;
		if(t > n || t < n){
			while(x > 0 && n > 1){
				cout << x << " ";
				x += -1*t;
			n--;
			}
			while(n--){
				cout << y << " ";
				y += t;
			}
		}
		else{
			for(int i = x;i <= y;i++){
				cout << i << " ";
			}
		}
		cout << endl;
	}*/
	else{
		vector<int> factor;
		for(int i = 1;i <= y - x;i++){
			if((y - x) % i == 0)factor.push_back(i);
		}
		for(int i = 0;i < (int)factor.size();i++){
			int times = n;
			if((y - x) / factor[i] < n){
				int t = y + factor[i];
				while(y > 0 && times > 0){
					cout << y << " ";
					y -= factor[i];
					times--;
				}
				while(times > 0){
					cout << t << " ";
					t += factor[i];
					times--;
				}
				cout << endl;
				return;
			}
		}
		/*
		int t = y - x;
		while(x > 0 && n > 1){
			cout << x << " ";
			x += -1*t;
			n--;
		}
		while(n--){
			cout << y << " ";
			y += t;
		}
		cout << endl;
		*/
	}
}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

