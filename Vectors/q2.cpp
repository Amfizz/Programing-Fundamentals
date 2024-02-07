#include<stdio.h>
#include<vector>
using namespace std;
int main() {
	vector<int>g1{1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (auto i = g1.begin(); i != g1.end(); ++i) {
		cout << *i << " ";
	}
	cout << endl;
	for (auto i = g1.rbegin(); i != g1.rend(); ++i) {
		cout << *i << " ";
	}
	return 0;

}