#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<cstdlib>
#include<vector>

using namespace std;

void solve(){
	int n;
	string x, ret1 = "", ret2 = "";
	cin >> n >> x;
	bool flag = false;
	for(size_t i = 0;i < x.size();i++){
		if(!flag){
			if(x[i] == '1'){
				ret1.append("1");
				ret2.append("0");
				flag = true;
			}
			else if(x[i] == '2'){
				ret1.append("1");
				ret2.append("1");
			}
			else{
				ret1.append("0");
				ret2.append("0");
			}
		}
		else{
			ret1.append("0");
			ret2 = ret2 + x[i];
		}
	}
	cout << ret1 << endl << ret2 << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

