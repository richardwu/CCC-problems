//#include <iostream>
//#include <string>
//#include <stack>
//#include <vector>
//
//using namespace std;
//
//int main() {
//
//	int T;
//	cin >> T;
//
//	vector<char> O;
//
//	for (int i = 0; i < T; i++)
//	{
//		int N;
//		cin >> N;
//
//		stack<int> M;
//		stack<int> B;
//
//		for (int j = 0; j < N; j++){
//			int n;
//			cin >> n;
//			M.push(n);
//		}
//
//		int k = 1;
//		while (k < N){
//
//
//			if (M.size() > 0 && M.top() == k){
//				M.pop();
//				k++;
//			}
//			else if (B.size() > 0 && B.top() == k){
//				B.pop();
//				k++;
//			}
//			else{
//				if (M.size() == 0)
//					break;
//				else{
//					B.push(M.top());
//					M.pop();
//				}
//			}
//
//		}
//
//		if (k == N)
//			O.push_back('Y');
//		else
//			O.push_back('N');
//
//
//	}
//	for (unsigned int i = 0; i < O.size(); i++)
//		cout << O[i] << endl;
//
//	return 0;
//}
