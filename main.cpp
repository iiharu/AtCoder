
#include "bits/stdc++.h"

using namespace std;

int n;
vector<vector<pair<int, int>>> e;
vector<bool> visited;
vector<bool> color;

void dfs(int u, int v, int w) {
  visited[v] = true;
  if (w % 2 == 0)
    color[v] = color[u];
  else
    color[v] = !color[u];

  for (auto it = e[v].begin(); it != e[v].end(); ++it) {
    if (!visited[(*it).first])
      dfs(v, (*it).first, (*it).second);
  }
  
}

signed main(void) {

  cin >> n;
  e = vector<vector<pair<int, int>>>(n);
  visited = vector<bool>(n, false);
  color = vector<bool>(n, false);

  for (int i = 0; i < n - 1; ++i) {
    int u, v, w; cin >> u >> v >> w;
    e[u - 1].push_back({v - 1, w});
    e[v - 1].push_back({u - 1, w});
  }

  dfs(0, 0, 0);

  for (int i = 0; i < n; ++i) {
    if (color[i])
      cout << "1" << endl;
    else
      cout << "0" << endl;
  }

  

  return 0;
}
