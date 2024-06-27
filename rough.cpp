vector<vector<int>> g;
vector<int> vis;
vector<int> values;
int mini = 1e9+1;
int last;

void dfs(int node){
	vis[node] = 1;
	for(auto v:g[node]){
		if (!vis[v]) dfs(v);
		else if (vis[v] == 1)
	}
	vis[node] = 2;
}

void solve(){
	int n;
	cin >> n;

	g = {};
	g.resize(n+1);
	vis.assign(n+1, 0);
	values.resize(n+1);

	mini = 1e9 + 1;
	last = 1;

	for (int i = 0; i < n; ++i)
	{
		cin >> values[i+1];
		if (values[i+1] < mini) {
			mini = values[i+1];
			last = i+1;
		}
	}

	int a, b;
	for (int i = 0; i < n-1; ++i)
	{
		cin >> a >> b;
		g[a].push_back(b);
		g[b].push_back(a);
	}

	dfs(last);
}
