//reverse string

#include<iostream>

using namespace std;

int main() {
	char a[100];
	cin.getline(a, 100);
	int len = 0;
	while (a[len] != '\0')len++;

		for (int i = 0;i < len / 2;i++) {
		char t = a[i];
		a[i] = a[len - i - 1];
		a[len - i - 1] = t;
	}
		cout << a;
}