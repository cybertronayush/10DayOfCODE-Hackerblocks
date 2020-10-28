#include<iostream>
using namespace std;
int main() {

	int n;
	cin >> n;
	cout << "*";
	for (int i = 1; i <= (n - 3) / 2; i++) {
		cout << " ";
	}
	for (int i = 1; i <= (n + 1) / 2; i++) {
		cout << "*";
	}
	cout << endl;

	for (int rows = 1; rows <= (n - 3) / 2; rows++) {
		cout << "*";
		
		for (int i = 1; i <= (n - 3) / 2; i++) {
			cout << " ";
		}
		cout << "*" << endl;
	}

	
	for (int i = 1; i <= n; i++) {
		cout << "*";
	}
	cout << endl;

	
	for (int rows = 1; rows <= (n - 3) / 2; rows++) {

		
		for (int i = 1; i <= (n - 3) / 2 + 1; i++) {
			cout << " ";
		}

		cout << "*";

		
		for (int i = 1; i <= (n - 3) / 2; i++) {
			cout << " ";
		}


		cout << "*" << endl;

	}

	
	for (int i = 1; i <= (n + 1) / 2; i++) {
		cout << "*";
	}

	for (int i = 1; i <= (n - 3) / 2; i++) {
		cout << " ";
	}
	cout << "*" << endl;
	return 0;


}