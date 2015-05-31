#include <iostream>
#include <vector>

using namespace std;

int main() {

	int G;
	cin >> G;
	int P;
	cin >> P;

	bool isOccupied[100000] = { false };

	int count = 0;
	for (int i = 0; i < P; i++){
		int g;
		cin >> g;
		bool isLanded = false;
		for (int j = g; j >= 1; j--)
		{
			if (isOccupied[j - 1] == false){
				isOccupied[j - 1] = true;
				isLanded = true;
				count++;
				break;
			}
		}
		if (isLanded == false)
			break;
	}

	cout << count << endl;

	return 0;
}
