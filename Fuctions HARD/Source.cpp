//Персональный шаблон проекта С++
#include <iostream>
using namespace std;

template <typename T> T func(T num) {
	return num * num * num;
}
template <typename T1,typename T2> T1 func(T1 num,T2 num2) {
	return num * num * num * num2;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	cin >> n;
	cout << func(n) << endl;
	cout << func(2.5) << endl;
	return 0;
}