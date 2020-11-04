#include "Header.h"

using namespace std;

void multiplication() {
	m = x * y;
}

int main() {
	cout << "Entrez x: ";
	cin >> x;
	cout << "Entrez y: ";
	cin >> y;
	multiplication();
	cout << "x * y = " << m;
}

