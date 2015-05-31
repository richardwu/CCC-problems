#include <iostream>
#include <vector>
#include <time.h>

using namespace std;

vector<int> quickSort(vector<int>v){

	vector<int>left;
	vector<int>right;
	int pivot = v[0];

	for (unsigned int i = 1; i < v.size(); i++)
	{
		if (v[i] <= pivot)
			left.push_back(v[i]);
		else
			right.push_back(v[i]);
	}

	if (left.size() > 1)
		left = quickSort(left);
	if (right.size() > 1)
		right = quickSort(right);

	v.clear();

	for (unsigned int i = 0; i < left.size(); i++)
		v.push_back(left[i]);
	v.push_back(pivot);
	for (unsigned int i = 0; i < right.size(); i++)
		v.push_back(right[i]);

	return v;

}

vector<int> mergeSort(vector<int>v){


	vector<int>left;
	vector<int>right;

	for (unsigned int i = 0; i < v.size() / 2; i++)
		left.push_back(v[i]);
	for (unsigned int i = v.size() / 2; i < v.size(); i++)
		right.push_back(v[i]);

	if (left.size() > 1)
		left = mergeSort(left);
	if (right.size() > 1)
		right = mergeSort(right);

	v.clear();

	unsigned int l = 0, r = 0;
	while (l < left.size() && r < right.size()) {
		if (left[l] <= right[r])
		{
			v.push_back(left[l]);
			l++;
		}
		else
		{
			v.push_back(right[r]);
			r++;
		}
	}

	if (l == left.size())
		for (unsigned int i = r; i < right.size(); i++)
			v.push_back(right[i]);
	else
		for (unsigned int i = l; i < left.size(); i++)
			v.push_back(left[i]);

	return v;

}

int binSearch(vector<int>v, int n) {

	int low = 0, high = v.size(), loc = v.size() / 2;
	while (v[loc] != n && (high-low)>1) {
		if (n < v[loc]){
			high = loc;
			loc = (high - low) / 2;
		}
		else{
			low = loc;
			loc = low + (high - low) / 2;
		}
	}

	if (high-low <= 1 && v[loc] != n)
		return -1;
	else
		return loc;

}

int main() {
	clock_t t = clock();

	vector<int>N = { 1,3,5,7,8,9,13,16,22,101,404,1001};

		N = quickSort(N);

	cout << binSearch(N, 23) << endl;

	for (unsigned int i = 0; i < N.size(); i++)
		cout << N[i] << ' ';

	cout << endl << clock() - t;
	return 0;
}