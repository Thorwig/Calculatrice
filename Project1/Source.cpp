#include "Header.h"

using namespace std;


int main() {
	while (b ==	1){
		cout << "\nChoisissez une operation: \n";
		cout << "1- Addition\n2- Soustraction \n3- Multiplication\n4- Division\n";
		cin >> v;
		if (v==0){
			b=0;
		}
		else if (v == 1) {
			cout << "Entrez x: ";
			cin >> x;
			cout << "Entrez y: ";
			cin >> y;
			m = x + y;
			cout << "x + y = " << m;
		}
		else if (v == 2) {
			cout << "Entrez x: ";
			cin >> x;
			cout << "Entrez y: ";
			cin >> y;
			m = x - y;
			cout << "x - y = " << m;
		}
		else if (v == 3) {
			cout << "Entrez x: ";
			cin >> x;
			cout << "Entrez y: ";
			cin >> y;
			m = x * y;
			cout << "x * y = " << m;
		}
		else if (v == 4) {
			cout << "Entrez x: ";
			cin >> x;
			cout << "Entrez y: ";
			cin >> y;
			m = x / y;
			cout << "x / y = " << m;
		}
	}
}

