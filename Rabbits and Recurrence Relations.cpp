#include<iostream>
using namespace std;

long long rabbitPairs(int numMonths, int numOffspring) {
	if (numMonths == 1) {
		return 1;
	}
	else if (numMonths == 2) {
		return numOffspring;
	}
	long long oneGen = rabbitPairs(numMonths - 1, numOffspring);
	long long twoGen = rabbitPairs(numMonths - 2, numOffspring);
	if (numMonths <= 4) {
		return (oneGen + twoGen);
	}
	return (oneGen + (twoGen * numOffspring));
}

int main() {

	int numMonths, numOffspring;
	cin >> numMonths >> numOffspring;
	cout << rabbitPairs(numMonths, numOffspring);
}