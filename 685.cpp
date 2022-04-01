#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int money = 0;
	vector <int> san(3);
	vector <int> vol(3);
	
	for (int i = 0; i < 3; i++) {
		cin >> san[i];
	}
	for (int i = 0; i < 3; i++) {
		cin >> vol[i];
	}

	sort(san.begin(), san.end());

	sort(vol.begin(), vol.end());

	for (int i = 0; i < 3; i++)
		money += san[i] * vol[i];
	cout << money;
}