#include"bits/stdc++.h"

using namespace std;

void solve(){
	int n, m;
	cin >> n >> m;
	int map[n + 1][m + 1], t;
	int remain[n + 1];
	bool win = true;
	memset(remain, 0, sizeof(remain));
	memset(map, 0, sizeof(map));
	for(int i = 1; i <= n;i++){
		for(int j = 1;j <= m;j++){
			cin >> t;
			if(t){
				for(int k = 1;k <= n;k++){
					map[k][j] = 1;
				}
				for(int k = 1;k <= m;k++){
					map[i][k] = 1;
				}
			}
		}
	}
	for(int i = 1; i <= n;i++){
		for(int j = 1;j <= m;j++){
			if(map[i][j] == 0){
				for(int k = 1;k <= m;k++){
					map[i][k] = 1;
				}
				for(int k = 1;k <= n;k++){
					map[k][j] = 1;
				}
				win = !win;
				break;
//				cout << "i = " << i << ", j = " << j << endl;
			}
		}
	}
	if(win)cout << "Vivek\n";
	else cout << "Ashish\n";
/*	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= m;j++){
			cout << map[i][j] << " ";
		}
		cout << endl;
	}
	for(int i = 1; i <= n;i++){
		cout << remain[i] << endl;
	}
	int maxxid, maxx = 0;
	for(int i = 1;i <= n;i++){
		if(remain[i] > maxx){
			maxx = remain[i];
			maxxid = i;
		}
	}
*/
}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

