#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int num = 1;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << num << " ";
			num++;
		}
		cout << endl;
	}

	cout << endl;

	num = 1;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << num << " ";
			num++;
		}
		//num = num - 4; chir dudnsg khi n = 5
		num = num - n + 1;
		cout << endl;
	}

	cout << endl;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (j <= n - i) cout << "~";
			else cout << i;
		}
		cout << endl;
	}

	cout << endl;

	for (int i = 0; i < n; i++) {
		cout << i + 1 << " ";
		int kc = n - 1;
		int tmp = i + 1;
		for (int j = 0; j < i; j++){
			cout << tmp + kc << " ";
			tmp = tmp + kc;
			kc--;
		}
		cout << endl;
	}

	return 0;

}
