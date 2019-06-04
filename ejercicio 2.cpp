#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<time.h>
using namespace std;

void Fibo(int n){

	int  suma, newsuma;
	
	int *n1;
	n1 = new int[n];

	n1[0] = 1;
	n1[1] = 1;
	cout << n1[0] << " " << n1[1]<<" ";

	for (int i = 0; i <= n; i++) {

		n1[i + 2] = n1[i] + n1[i+1];

		cout << n1[i + 2] << " ";
	}

	int  k = 1, i = 1;

	for (int i = 0; i < 10; i++) {

		cout << endl;
	}
	for (int l = 1; l <= n; l++) {

		for (int k = 1; k < 50-l; k++) {

			cout << " ";
		}

		for (int i = 0; i < (2*l)-1; i=i+1) {
				
				cout << n1[i]<<" ";
				
			    if(i==((2*l)-1))
			  
			      i=i-1;
			  
			  cout;
		}

	
		cout << endl;

	}



}


int main() {
	int n;
	cout << "Ingrese N: ";
	cin >> n;

	Fibo(n);


	_getch();
	return 0;
}
