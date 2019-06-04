#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<time.h>
using namespace std;

int main() {

	int n, k = 1, i = 1;
	cout << "Ingrese m: ";
	cin >> n;

	for (int i = 0; i < 10; i++) {

		cout << endl;
	}
	for (int i = 1; i <= n; i++) {

		for (int k = 1; k < 50-i; k++) {

			cout << " ";
		}

		for (int l = 0; l < (2*i)-1; l++) {


				cout << "*";
			
		}

	
		cout << endl;

	}

	_getch();

	return 0;
}