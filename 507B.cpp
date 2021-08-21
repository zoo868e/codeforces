#include"bits/stdc++.h"
#define ll long long int

using namespace std;

ll dis(int x, int y, int xx, int yy){
	return pow(xx - x, 2) + pow(yy - y, 2);
}

void solve(){
	int r, x, y, xx, yy;
	cin >> r >> x >> y >> xx >> yy;
	cout << ceil(sqrt(dis(x, y, xx, yy)) / (2 * r)) << endl;
}

int main(){
	solve();
	return 0;
}

