#include"bits/stdc++.h"
#define ll long long int

using namespace std;

typedef pair<int, int> ii;

const int MAXN = 1e5 + 3;
const int INF = INT_MAX;
vector<vector<ii>> p;
int n, dist[MAXN], par[MAXN];
bitset<MAXN> isDone;

bool dijkstra(int s, int t){
	priority_queue<ii, vector<ii>, greater<ii>> pq;
	fill(dist, dist + n + 1, INF);
	pq.push(ii(0, s));
	dist[s] = 0;
	par[s] = -1;
	while(!pq.empty()){
		int u = pq.top().second;
		pq.pop();
		if(u == t)return true;
		isDone[u] = true;
		for(auto &pr:p[u]){
			int v = pr.first, w = pr.second;
			if(!isDone[v] && dist[u] + w < dist[v]){
				dist[v] = dist[u] + w;
				pq.push(ii(dist[v], v));
				par[v] = u;
			}
		}
	}
	return false;
}

void solve(){
	int m;
	cin >> n >> m;
	p.resize(n + 3);
	int u, v, w;
	while(m--){
		cin >> u >> v >> w;
		p[u].push_back(ii(v, w));
		p[v].push_back(ii(u, w));
	}
	if(dijkstra(1, n)){
		vector<int> path;
		for(v = n;v != -1;v = par[v])path.push_back(v);
		for(int i = path.size() - 1;i > 0;--i)cout << path[i] << " ";
		cout << path[0] << endl;
	}
	else cout << "-1\n";
}

int main(){
	solve();
	return 0;
}

