#include<iostream>
#include<stdlib.h>
#include<map>
#include<string>

using namespace std;

int multiname(map<string, int> mapName, string name)
{
	auto iter = mapName.find(name);
	if(iter != mapName.end())return iter->second;
	return 0;
}
int main(){
	map<string, int> mapName;
	int t;
	string temp;
	cin >> t;
	while(t--){
		cin >> temp;
		mapName[temp]++;
		if(mapName[temp] == 1){
			cout << "OK" << endl;
		}
		else{
			cout << temp + to_string(mapName[temp] - 1) << endl;
		}
	}
	return 0;
}
