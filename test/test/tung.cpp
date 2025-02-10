// loi giai
#include <iostream>
#include <math.h>
using namespace std;
int dem;
int main(){
	int n; cin >> n;
	int volon = n / 28;
	int volon1 = volon;
	int count = volon / 3;
	int them = volon % 3;
	while (volon >= 3) {
		 volon /= 3;
	}
	cout << volon + volon1 ;
}