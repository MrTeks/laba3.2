#include <iostream>
#include <clocale>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int num1, num2, num3, result1, result2;
	cout << "Введите 3 числа:" << endl;
	cin >> num1 >> num2 >> num3;
	if (num1 > num2) {
		result1 = num2;
	}
	else {
		(result1 = num1);
	}
	if (num2 > num3) {
		result2 = num3;
	}
	else {
		result2 = num2;
	}
	if (result1 > result2) {
		cout << "Минимальное число: " << result2 << endl;
	}
	else {
		cout << "Минимальное число: " << result1 << endl;
	}
}