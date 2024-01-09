#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
	int age=0;
	cout <<"Legal Age Checker 1.0";
	cout << "\n\n";
	cout <<"Give Your Age : " ;
	cin >> age;
	if (age>=18) {
		cout << "\n\n";
		cout <<"Your An Adult";
		cout <<"\n\n";
	}
else {
	cout <<"\n\n";
	cout <<"Sorry Your an Minor.";
	cout <<"\n\n";
}
 system("pause");
}
