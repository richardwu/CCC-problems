//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//
//int main() {
//
//	int R, C, K;
//
//	cin >> R;
//	cin >> C;
//	cin >> K;
//
//	vector<vector<bool> > grid(R, vector <bool>(C, false));
//
//	for (int i = 0; i < K; ++i){
//		int num1, num2;
//		cin >> num1;
//		cin >> num2;
//		grid[num1 - 1][num2 - 1] = true;
//	}
//
//	//Pascal's triangle method (BEST)
//
//	vector<vector<int> > ways(R, vector <int> (C, 0));
//	ways[0][0] = 1;
//
//	for (unsigned int j = 0; j < ways.size(); j++)
//		for (unsigned int k = 0; k < ways[0].size(); k++){
//			if (!grid[j][k]){
//				if (j > 0)
//					ways[j][k] += ways[j - 1][k];
//				if (k > 0)
//					ways[j][k] += ways[j][k - 1];
//			}
//		}
//
//	cout << ways[R - 1][C - 1] << endl;
//
//	//bfs method
//
//		queue <vector<int> > path;
//
//	vector<int> pos = { 0, 0 };
//
//	int count = 0;
//
//	while (path.size() > 0 || (pos[1] + 1 < c && grid[pos[0]][pos[1] + 1] == false) || (pos[0] + 1 < r && grid[pos[0] + 1][pos[1]] == false)) {
//
//		if (pos[1] + 1 < c && grid[pos[0]][pos[1] + 1] == false)
//			path.push(vector < int > {pos[0], pos[1] + 1});
//
//
//		if (pos[0] + 1 < r && grid[pos[0] + 1][pos[1]] == false)
//			path.push(vector < int > {pos[0] + 1, pos[1]});
//
//		pos = path.front();
//		grid2[pos[0]][pos[1]]++;
//		if (pos[0] == r - 1 && pos[1] == c - 1)
//			count++;
//		path.pop();
//	}
//
//	for (int i = 0; i < grid2.size(); i++){
//		for (int j = 0; j < grid2[0].size(); j++)
//			cout << grid2[i][j] << ' ';
//		cout << endl;
//	}
//
//
//	//dfs method
//
//		stack <vector<int> > path;
//	stack <vector<int> > mem;
//
//	path.push(vector < int > {0, 0});
//
//	int count = 0;
//
//	while (path.size() > 0) {
//
//		if (path.top()[1] + 1 < c && grid[path.top()[0]][path.top()[1] + 1] == false){
//			grid[path.top()[0]][path.top()[1] + 1] = true;
//			path.push(vector < int > {path.top()[0], path.top()[1] + 1});
//		}
//		else if (path.top()[0] + 1 < r && grid[path.top()[0] + 1][path.top()[1]] == false) {
//			grid[path.top()[0] + 1][path.top()[1]] = true;
//			path.push(vector < int > {path.top()[0] + 1, path.top()[1]});
//		}
//		else{
//			if (path.top()[0] == r - 1 && path.top()[1] == c - 1)
//				count++;
//
//			while (mem.size() > 0 && ((mem.top()[0] == path.top()[0] + 1 && mem.top()[1] == path.top()[1]) || (mem.top()[0] == path.top()[0] && mem.top()[1] == path.top()[1] + 1))) {
//				grid[mem.top()[0]][mem.top()[1]] = false;
//				mem.pop();
//			}
//			mem.push(path.top());
//			path.pop();
//		}
//
//	}
//
//	cout << count << endl;
//
//	return 0;
//}
