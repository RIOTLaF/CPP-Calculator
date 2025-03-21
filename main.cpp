#include <iostream>
using namespace std;

void static print(string text) {
	cout << text + "\n";
}

void static pvalue(int value) {
	cout << value;
	cout << "\n";
}

void static calculate() {
	string valor1;
	string valor2;
	string type;

	print("Enter a value");
	cin >> valor1;
	print("Enter another value");
	cin >> valor2;
	print("Choose + - / or *");
	cin >> type;

	int newvalue1 = atoi(valor1.c_str());
	int newvalue2 = atoi(valor2.c_str());

	if (type == "+") {
		cout << valor1 + " + " + valor2 + " = ";
		pvalue(newvalue1 + newvalue2);
	}
	else if (type == "-") {
		cout << valor1 + " - " + valor2 + " = ";
		pvalue(newvalue1 - newvalue2);
	}
	else if (type == "/") {
		cout << valor1 + " / " + valor2 + " = ";
		pvalue(newvalue1 / newvalue2);
	}
	else if (type == "*") {
		cout << valor1 + " * " + valor2 + " = ";
		pvalue(newvalue1 * newvalue2);
	}

	cout << "\n";
	calculate();
}

int main() {
	calculate();

	return 0;
}
