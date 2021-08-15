#include"bits/stdc++.h"
#define ll long long int

using namespace std;

int a[100][100];

// if a = 
// 	0: '-'
// 	1: '.'
// 	2: 'B'
// 	-2: 'w'
bool dfs(int n, int m, int row, int col, int color){
//	cout << "EYSSSSSSSSSSSSS\n";
	if(row == n - 1 && col == m)return true;
	if(((col > 0 && a[row][col - 1] == color) || (row > 0 && a[row - 1][col] == color)) && a[row][col] != 0)return false;
	if(a[row][col] == 0){
		if(col == m){
			col = 0;
			row++;
		}
		else{
			col++;
		}
		if(dfs(n, m, row, col, color))return true;
		else return dfs(n, m, row, col, color * -1);
	}
	a[row][col] = color;
	if(col == m){
		if(dfs(n, m, row + 1, 0, color * -1))return true;
		else return dfs(n, m, row + 1, 0, color);
	}
	else{
		return dfs(n, m, row, col + 1, color * -1);
	}

}


void solve(){
	int n, m;
	cin >> n >> m;
	string s[n];
	memset(a, 0, sizeof(a));
	for(int i = 0;i < n;i++){
		cin >> s[i];
		for(int j = 0;j < m;j++){
			if(s[i][j] == '.'){
				if((i + j) & 1)s[i][j] = 'W';
				else s[i][j] = 'B';
			}
		}
		cout << s[i] << endl;
	}
}

int main(){
	solve();
	return 0;
}

