//#include <iostream>
//#include <math.h>
//
//using namespace std;
//
//bool isCrystal(int m, int x, int y) {
//
//	int unit = (int)(pow(5.0, (m - 1)*1.0));
//
//	//crystal part
//	if (m > 1 && (((x >= unit && x <= 2 * unit - 1) || (x >= 3 * unit && x <= 4 * unit - 1)) && (y >= unit && y <= 2 * unit - 1)) || ((x >= 2 * unit && x <= 3 * unit - 1) && (y >= 2 * unit && y <= 3 * unit - 1)))
//		return isCrystal(m - 1, x - unit*(x / unit), y - unit*(y / unit));
//
//	//solid part	
//	return ((x >= unit && x <= 4 * unit - 1) && (y >= 0 && y <= unit - 1)) || ((x >= 2 * unit && x <= 3 * unit - 1) && (y >= unit && y <= 2 * unit - 1));
//}
//
//int main() {
//
//	int T;
//	cin >> T;
//
//	for (int i = 0; i < T; i++){
//		int m;
//		cin >> m;
//		int x, y;
//		cin >> x;
//		cin >> y;
//
//		if (isCrystal(m, x, y))
//			cout << "crystal" << endl;
//		else
//			cout << "empty" << endl;
//	}
//
//	return 0;
//}
