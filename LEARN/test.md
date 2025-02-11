# Bài 1. Tổng tự nhiên liên tiếp

Tính tổng S(n) = 1 + 2 + 3 + ... + n.

**Gợi ý :** Khai báo biến sum = 0, duyệt vòng lặp từ 1 tới n và cộng dồn i vào sum. Sau khi vòng lặp kết thúc thì in ra sum, chú ý phải lặp xong mới in sum, không in sum trong vòng for khi chưa tính xong tổng các số.

**Đầu vào.**

Số nguyên dương N

**Giới hạn.**

1 ≤ N ≤ 10^6.

**Đầu ra.**

Kết quả S(n).

**Input 01.**

```
6
```

**Output 01.**

```
21
```

```cpp
// loi giai
#include <iostream>
using namespace std;

int main(){
	int n; cin >> n;
	long long sum = 0;
	for (int i = 0; i <= n; i++) sum += i;
	cout << sum;
	return 0;
}
```

# Bài 2. Tổng bình phương

Tính tổng S(n) = 1^2 + 2^2 + 3^2 + 4^2 + ... + n^2.

**Đầu vào.**

Số nguyên dương n.

**Giới hạn.**

1 ≤ N ≤ 10^5.

**Đầu ra.**

S(n)

**Input 01.**

```
3
```

**Output 01.**

```
14
```

```cpp
// loi giai
#include <iostream>
using namespace std;

int main(){
	int n; cin >> n;
	long long sum = 0;
	for (int i = 0; i <= n; i++) sum += i;
	cout << sum;
	return 0;
}
```

# Bài 3. Tổng bội 3

Nhập vào giá trị của n không quá 10^6, tính tổng các số nguyên dương không vượt quá n chia hết cho 3.

**Đầu vào.**

Số nguyên dương n.

**Giới hạn.**

1 ≤ n ≤ 10^6.

**Đầu ra.**

In ra kết quả cùa biểu thức.


**Input 01.**

```
10
```

**Output 01.**

```
18
```

```cpp
// loi giai
#include <iostream>
using namespace std;

int main(){
	int n; cin >> n;
	long long sum = 0;
	for (int i = 0; i <= n; i += 3) sum += i;
	cout << sum;
	return 0;
}
```

# Bài 4. Tổng nghịch đảo

Tính tổng : S(n) = 1 + 1/2 + 1/3 + 1/4 + … + 1/n.

Lưu ý : Lấy 1.0/i khi tính toán thay vì 1/i.

**Đầu vào.**

Số nguyên dương n.

**Giới hạn.**

1 ≤ n ≤ 10^5.

**Đầu ra.**

In ra kết quả lấy độ chính xác 3 số sau dấu phẩy.

**Input 01.**

```
2
```

**Output 01.**

```
1.500
```

```cpp
// loi giai
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int n; cin >> n;
	double sum = 0;
	for (int i = 1; i <= n; i++) sum += 1.0 / i;
	cout << fixed << setprecision(3) << sum;
	return 0;
}
```

# Bài 5. Tổng nghịch đảo 2

Tính tổng : S(n) = 1/2 + 1/4 + 1/6 + 1/8 + ...+ 1/(2n).

**Đầu vào.**

Số nguyên dương n.

**Giới hạn.**

1 ≤ n ≤ 10^6.

**Đầu ra.**

Kết quả S(n) lấy độ chính xác 5 số sau dấu phẩy.

**Input 01.**

```
993856
```

**Output 01.**

```
7.19328
```

```cpp
// loi giai
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int n; cin >> n;
	double sum = 0;
	for (int i = 1; i <= n; i++) sum += 1.0 / (2 * i);
	cout << fixed << setprecision(5) << sum;
	return 0;
}
```

# Bài 6. Tổng ước

Tính tổng ước của số nguyên dương N. Độ phức tạp mong đợi O(sqrt(N)).

**Hướng dẫn:** Tổng ước tối ưu.

**Đầu vào.**

Số nguyên dương N.

**Giới hạn.**

1 ≤ N ≤ 10^10.

**Đầu ra.**

Tổng ước của N.

**Input 01.**

```
28
```

**Output 01.**

```
56
```

```cpp
// loi giai
#include <iostream>
#include <math.h>
using namespace std;

int main(){
	long long n; cin >> n;
	long long sum = 0;
	for (int i = 1; i <= sqrt(n); i++) {
		if (n % i == 0) {
			sum += i;
			if (n / i != i) sum += n / i;
		}
	}
	cout << sum << endl;
	return 0;
}
```

# Bài 7. Liệt kê ước

Đếm số lượng ước và liệt kê các ước theo thứ tự tăng dần của số nguyên dương N.

**Gợi ý :** Duyệt vòng lặp từ 1 tới N lượt thứ nhất để đếm ước, lượt thứ 2 để liệt kê ước.

**Đầu vào.**

Số nguyên dương N.

**Giới hạn.**

1 ≤ N ≤ 10^6.

**Đầu ra.**

Kết quả của bài toán.

**Input 01.**

```
28
```

**Output 01.**

```
6
1 2 4 7 14 28
```

```cpp
// loi giai
#include <iostream>
#include <math.h>
using namespace std;

int main(){
	long long n; cin >> n;
	long long dem = 0;
	for (int i = 1; i <= sqrt(n); i++) {
		if (n % i == 0) {
			dem++;
			if (n / i != i) dem++;
		}
	}
	cout << dem << endl;
	for (int i = 1; i <= n; i++) if (n % i == 0) cout << i << " ";
	cout << endl;
	return 0;
}
```

# Bài 8. Liệt kê số chính phương

Liệt kê các số chính phương dương và không vượt quá N.

**Gợi ý:** Số chính phương là số có dạng i^2 với i là số nguyên => i^2 <= N => Duyệt các số nguyên từ 1 tới căn N và in ra i^2 ta sẽ có các số chính phương không vượt quá N.

**Đầu vào.**

Số nguyên dương N.

**Giới hạn.**

1 ≤ N ≤ 10^10.

**Đầu ra.**

Liệt kê các số chính phương không vượt quá N mỗi số cách nhau 1 khoảng trắng.

**Input 01.**

```
50
```

**Output 01.**

```
1 4 9 16 25 36 49
```

```cpp
// loi giai
#include <iostream>
using namespace std;

int main(){
	long long n; cin >> n;
	long long dem = 0;
	for (int i = 1; i <= sqrt(n); i++) cout << 1ll * i * i << " ";
	cout << endl;
	return 0;
}
```

# Bài 9. Tích các ước

Tính tích các ước của số tự nhiên N.

**Đầu vào.**

Số nguyên dương N.

**Giới hạn.**

1 ≤ N ≤ 1000.

**Đầu ra.**

Tích các ước số của N.


**Input 01.**

```
10
```

**Output 01.**

```
100
```

```cpp
// loi giai
#include <iostream>
using namespace std;

int main(){
	long long n; cin >> n;
	long long tich = 1;
	for (int i = 1; i <= sqrt(n); i++) {
		if (n % i == 0) {
			tich *= i;
			if (n / i != i) tich *= n / i;
		}
	}
	cout << tich << endl;
	return 0;
}
```

# Bài 10. Kiểm tra số 2022

Nhập vào 1 dãy số có không quá 10000 số nguyên. Hãy xác định trong quá trình nhập có xuất hiện số 2022 hay không?

**Đầu vào.**

Dòng đầu tiên là số lượng số nguyên sẽ nhập: N.

Dòng thứ 2 là N số viết cách nhau một khoảng trắng.

**Giới hạn.**

1 ≤ N ≤ 10000.

Các số được nhập là số nguyên không quá 10^6.

**Đầu ra.**

In `YES` nếu trong các số vừa nhập có số `2022`, ngược lại in `NO`.


**Input 01.**

```
4
2019 2020 2021 2022
```

**Output 01.**

```
YES
```

```cpp
// loi giai
#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int n; cin >> n;
	int check = 0;
	for (int i = 0; i < n; i++) {
		int tmp; cin >> tmp;
		if (tmp == 2022) check = 1;
	}
	if (check == 1) cout << "YES\n";
	else cout << "NO\n";
	return 0;
}
```

# Bài 11. Tổng chẵn lẻ

Tính tổng : S(n) = -1 + 2 - 3 + 4 - 5 + ...... + (-1)^n*n.

**Gợi ý :** Duyệt i từ 1 tới n, nếu i chẵn thì cộng vào tổng, i lẻ thì trừ khỏi tổng.

**Đầu vào.**

Số nguyên dương n.

**Giới hạn.**

1 ≤ n ≤ 10^6.

**Đầu ra.**

Kết quả của bài toán.


**Input 01.**

```
6
```

**Output 01.**

```
3
```

```cpp
// loi giai
#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int n; cin >> n;
	int sum = 0;
	for (int i = 1; i <= n; i++) sum += pow(-1, i) * i;
	cout << sum;
}
```

# Bài 12. Tổng bội 2

Nhập vào n nguyên dương không quá 10^6, tính và in tổng sau ra màn hình S = 2 + 4 + 6 + 8 +.....+ 2*n.

**Đầu vào.**

Số nguyên dương n.

**Giới hạn.**

1 ≤ n ≤ 10^6.

**Đầu ra.**

Kết quả của bài toán.

**Input 01.**

```
4
```

**Output 01.**

```
20
```

```cpp
// loi giai
#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int n; cin >> n;
	long long = 0;
	for (int i = 1; i <= n; i++) sum += 2 * i;
	cout << sum;
}
```

# Bài 13. Tổng lẻ


Nhập vào n nguyên dương không qua 10^6, tính và in tổng sau ra màn hình. S = 1 + 3 + 5 + 7 +.....+ 2*n-1.

**Đầu vào.**

Số nguyên dương n.

**Giới hạn.**

1 ≤ n ≤ 10^6.

**Đầu ra.**

Kết quả của bài toán.

**Input 01.**

```
4
```

**Output 01.**

```
16
```

```cpp
// loi giai
#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int n; cin >> n;
	long long sum = 0;
	for (int i = 1; i <= n; i++) sum += 2 * i - 1;
	cout << sum;
}
```

# Bài 14. Tổng lập phương

Nhập vào n nguyên dương không quá 1000 và tính tổng sau, kết quả in ra màn hình. S = 1^3 + 2^3 + 3^3 + 4^3 +……+ n^3.

**Đầu vào.**

Số nguyên dương n.

**Giới hạn.**

1 ≤ n ≤ 10^3.

**Đầu ra.**

Kết quả của bài toán.


**Input 01.**

```
3
```

**Output 01.**

```
36
```

```cpp
// loi giai
#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int n; cin >> n;
	 long long sum = 0;
	for (int i = 1; i <= n; i++) sum += pow(i, 3);
	cout << sum;
}
```

# Bài 15. Giai thừa

Nhập n không âm không quá 15, tính và in ra n! (n giai thừa).

**Đầu vào.**

Số nguyên không âm n.

**Giới hạn.**

0 ≤ n ≤ 15.

**Đầu ra.**

Kết quả của bài toán.

**Input 01.**

```
5
```

**Output 01.**

```
120
```

```cpp
// loi giai
#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int n; cin >> n;
	 long long gt = 1;
	for (int i = 1; i <= n; i++) gt *= i;
	cout << gt;
}
```

# Bài 16. Đếm số lượng chữ số của N

Nhập vào n, đếm số lượng chữ số của n và in ra kết quả.

**Đầu vào.**

Số nguyên không âm n.

**Giới hạn.**

0 ≤ n ≤ 10^18.

**Đầu ra.**

Số lượng chữ số của n.

**Input 01.**

```
12345
```

**Output 01.**

```
5
```

**Input 02**

```
0
```

**Output 02**

```
1
```

```cpp
// loi giai
#include <iostream>
#include <math.h>
using namespace std;

int main(){
	long long n; cin >> n;
	if (n == 0) {
		cout << 1 << endl;
		return 0;
	}
	int count = 0;
	while (n) {
		count++;
		n /= 10;
	}
	cout << count << endl;
}
```

# Bài 17. Tính tổng chữ số của N

Nhập vào n, tính tổng các chữ số của n, và in ra kết quả.

**Đầu vào.**

Số nguyên không âm n.

**Giới hạn.**

0 ≤ n ≤ 10^18.

**Đầu ra.**

Tổng chữ số của n.


**Input 01.**

```
12341
```

**Output 01.**

```
11
```

```cpp
// loi giai
#include <iostream>
#include <math.h>
using namespace std;

int main(){
	long long n; cin >> n;
	int sum = 0;
	while (n) {
		sum += n % 10;
		n /= 10;
	}
	cout << sum << endl;
}
```

# Bài 18. Đếm chữ số nguyên tố của số nguyên

Nhập vào n nguyên. Đếm số lượng chữ số của n là số nguyên tố.

**Đầu vào.**

Số nguyên không âm n.

**Giới hạn.**

0 ≤ n ≤ 10^18.

**Đầu ra.**

Kết quả của bài toán.

**Input 01.**

```
1222333999888
```

**Output 01.**

```
6
```

```cpp
// loi giai
#include <iostream>
#include <math.h>
using namespace std;

int main(){
	long long n; cin >> n;
	int count = 0;
	while (n) {
		if (n % 10 == 3 || n % 10 == 2 || n % 10 == 5 || n % 10 == 7) count++;
		n /= 10;
	}
	cout << count << endl;
}
```

# Bài 19. Mua bia

28techland là vùng đất mà cư dân cực kì thích uống bia, vì thế để tăng số lượng bia bán ra các cửa hàng bia ở đây đưa ra khuyến mại như sau : Cứ 3 vỏ chai bia sẽ được đổi một chai bia mới. Biết rằng ở 28techland, mỗi chai bia có giá 28 xu, nhiệm vụ của bạn là xác định với N xu cho trước, bạn có thể mua được tối đa bao nhiêu chai bia tính cả việc đổi thưởng bằng vỏ chai?

Bạn phải trả lời được câu hỏi này rồi hãy bắt tay vào code : Nếu có 7 vỏ chai thì đổi được bao nhiêu chai bia tất cả, nếu câu trả lời là 2 thì xem lại.

**Gợi ý :** Đầu tiên bạn tính số chai bia mua bằng tiền (N/28), sau đó dùng vòng lặp while lặp đi lặp lại chừng nào số vỏ bia còn >= 3

```cpp
int bia = N / 28;
int vo = bia;
while(vo >= 3){
    //Tính số chai bia đổi bằng vỏ
    //Cập nhật vỏ 
}
```

**Đầu vào.**

Dòng duy nhất chứa N là số đồng xu ban đầu.

**Giới hạn.**

1 ≤ n ≤ 10^6.

**Đầu ra.**

In ra số lượng chai bia tối đa có thể mua.

**Input 01.**

```
138
```

**Output 01.**

```
5
```

```cpp
#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int n; cin >> n;
	int volon = n / 28;
	int bonus = volon / 3 + volon % 3;
	volon += volon / 3;
	while (bonus >= 3) {
		volon += bonus / 3;
		bonus = bonus / 3 + bonus % 3;
	}
	cout << volon << endl;
	return 0;
}
```

# Bài 20. Biểu diễn số nguyên

Cho một số nguyên dương n, hãy biểu diễn n dưới dạng tổng của các số nguyên tố sao cho số lượng số hạng trong tổng là lớn nhất có thể.

**Gợi ý :** N chẵn => biểu diễn dưới toàn số 2, N lẻ thì biểu diễn dưới các số 2 thêm vào 1 số 3 ở cuối. Vì 2 và 3 là 2 số nguyên tố nhỏ nhất.

**Đầu vào.**

Số nguyên dương N trên 1 dòng.

**Giới hạn.**

1 ≤ n ≤ 10^4.

**Đầu ra.**

Dòng đầu tiên in ra số lượng số hạng trong tổng. Nếu không thể biểu diễn n dưới dạng tổng các số nguyên tố thì in ra -1 cho dòng này và không cần in dòng 2.

Dòng 2 in ra các số hạng trong tổng theo thứ tự tăng dần.

**Input 01.**

```
6
```

**Output 01.**

```
3
2 2 2
```

```cpp
#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int n; cin >> n;
	if (n <= 1) {
		cout << -1 << endl;
		return 0;
	}
	int count = n / 2;
	cout << count << endl;
	for (int i = 0; i < n / 2 - 1; i++) {
		cout << 2 << " ";
	}
	if (n % 2 == 1) cout << 3 << endl;
	else cout << 2 << endl;
	return 0;
}
```

# Bài 21. Vẽ hình 1

Nhập N là một số nguyên không quá 100. In ra các hình tương ứng, mỗi hình cách nhau một dòng trống.

**Đầu vào.**

Số nguyên dương N.

**Giới hạn.**

1 ≤ n ≤ 100.

**Đầu ra.**

In ra hình sao theo mẫu.


**Input 01.**

```
5
```

**Output 01.**

```
*****
*****
*****
*****
*****

*****
*   *
*   *
*   *
*****

*****
*###*
*###*
*###*
*****

1 1 1 1 1 
2       2 
3       3 
4       4 
5 5 5 5 5
```

```cpp
#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) cout << "*";
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == 0 || i == n - 1 || j == 0 || j == n - 1) cout << "*";
			else cout << " ";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == 0 || i == n - 1 || j == 0 || j == n - 1) cout << "*";
			else cout << "#";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == 0 || i == n - 1 || j == 0 || j == n - 1) cout << i + 1 << " ";
			else cout << "  ";
		}
		cout << endl;
	}
}
```

# Bài 22. Vẽ hình 2

Nhập N là một số nguyên không quá 100. In ra các hình tương ứng, mỗi hình cách nhau một dòng trống.

**Đầu vào.**

Số nguyên dương N.

**Giới hạn.**

1 ≤ n ≤ 100.

**Đầu ra.**

In ra hình sao theo mẫu.

**Input 01.**

```
5
```

**Output 01.**

```
*
**
***
****
*****

*****
****
***
**
*

    *
   **
  ***
 ****
*****

*****
 ****
  ***
   **
    *

*
**
* *
*  *
*****
```

```cpp
#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j <= i) cout << "*";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j <= n - i - 1) cout << "*";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j < n - i - 1) cout << " ";
			else cout << "*";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j < i) cout << " ";
			else cout << "*";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j == 0 || i == n - 1 || i == j) cout << "*";
			else cout << " ";
		}
		cout << endl;
	}
}
```

# Bài 23. Vẽ hình 3

Nhập N là một số nguyên không quá 100. In ra các hình tương ứng, mỗi hình cách nhau một dòng trống.

**Đầu vào.**

Số nguyên dương N.

**Giới hạn.**

1 ≤ n ≤ 100.

**Đầu ra.**

In ra hình số theo mẫu.

**Input 01.**

```
5
```

**Output 01.**

```
1 2 3 4 5 
6 7 8 9 10 
11 12 13 14 15 
16 17 18 19 20 
21 22 23 24 25 

1 2 3 4 5 
2 3 4 5 6 
3 4 5 6 7 
4 5 6 7 8 
5 6 7 8 9 

~~~~1
~~~22
~~333
~4444
55555

1 
2 6 
3 7 10 
4 8 11 13 
5 9 12 14 15
```

```cpp
#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 1; j <= n; j++) cout << j + n * i << " ";
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 1; j <= n; j++) cout << j + i << " ";
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j < n - i - 1) cout << "~";
			else cout << i + 1;
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 1; i <= n; i++) {
		cout << i << " ";
		int tmp = n - 1, count = i;
		for (int j = 1; j < i; j++) {
			cout << tmp + count << " ";
			count = tmp + count;
			tmp--;
		}
		cout << endl;
	}
	cout << endl;
}
```

# Bài 24. UCLN của giai thừa

ố a và b. Nhiệm vụ của bạn là tính ước chung lớn nhất của a giai thừa và b giai thừa.

**Gợi ý :** Bài này không thể tính a! và b! vì long long chỉ lưu được cỡ 20!. Bạn thử nghĩ xem UCLN của 10! và 5! là bao nhiêu?

**Đầu vào.**

2 số nguyên không âm a và b.

**Giới hạn.**

0 <= a,b <= 10^12.

0 <= min(a, b) <= 12.

**Đầu ra.**

In ra kết quả trên 1 dòng.

**Input 01.**

```
2 5
```

**Output 01.**

```
2
```

**Input 02**

```
3 500000000
```

**Output 02**

```
6
```

```cpp
#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int a, b; cin >> a >> b;
	int _min = min(a, b);
	long long tich = 1;
	for (int i = 1; i <= _min; i++) tich *= i;
	cout << tich << endl;
	return 0;
}
```

# Bài 25. Thương giai thừa

Cho số nguyên dương N, bạn hãy tính tổng : S(N) = 1/0! + 1/1! + 1/2! + 1/3! +... + 1/(N - 1)!. Trong đó ! là kí hiệu của giai thừa.

**Đầu vào.**

Dòng duy nhất chứa số nguyên dương N.

**Giới hạn.**

2 ≤ n ≤ 15.

**Đầu ra.**

In ra kết quả lấy độ chính xác 4 số đằng sau dấu thập phân.


**Input 01.**

```
4
```

**Output 01.**

```
2.6667
```

```cpp
#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int n; cin >> n;
	double ans = 1;
	long long gt = 1;
	for (int i = 1; i <= n - 1; i++) {
		gt *= i;
		ans += 1.0 / gt;
	}
	cout << fixed << setprecision(4) << ans;
}
```

# Bài 26. Giải phương trình

Cho 3 số a, b, n. Nhiệm vụ của bạn là xác định xem phương trình ax + by = n có tồn tại cặp nghiệm (x, y) nguyên không âm hay không?

**Gợi ý :** Duyệt x từ 0 tới n / a => Kiểm tra xem n - a * x có chia hết cho b hay không, nếu có là sẽ tồn tại cặp nghiệm nguyên x, y không âm.

**Đầu vào.**

1 dòng duy nhất chứa 3 số a, b, n.

**Giới hạn.**

1<=a,b,n<=1000

**Đầu ra.**

In ra `YES` nếu tồn tại cặp nghiệm nguyên không âm, ngược lại in ra `NO`.

**Input 01.**

```
7 10 16
```

**Output 01.**

```
NO
```

**Input 02**

```
5 3 14
```

**Output 02**

```
YES
```

```cpp
#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int a, b, n; cin >> a >> b >> n;
	for (int i = 0; i <= n / a; i++) {
		if ((n - i * a) % b == 0) {
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
}
```

# Bài 27. Digital root.

Cho số nguyên dương không âm N, ở mỗi thao tác bạn thực hiện tính tổng các chữ số của N sau đó gán lại cho N, thao tác này được thực hiện cho tới khi N chỉ còn 1 chữ số.

Ví dụ N = 278 -> 17 -> 8, vậy ta có dạng rút gọn của 278 là 8. Nhiệm vụ của bạn là tìm dạn rút gọn của 1 số nguyên không âm N cho trước.

**Đầu vào.**

1 dòng chứa số N.

**Giới hạn.**

0 ≤ n ≤ 10^18.

**Đầu ra.**

In ra dạng rút gọn của N.

**Input 01.**

```
999991020
```

**Output 01.**

```
3
```

```cpp
#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	long long n; cin >> n;
	while (n >= 10) {
		int sum = 0;
		while (n) {
			sum += n % 10;
			n /= 10;
		}
		n = sum;
	}
	cout << n;
}
```

# Bài 28. Tổng giai thừa	

Tính tổng S(n) = 1 + 1.2 + 1.2.3 + 1.2.3.4 + ... + 1.2.3....n.

**Đầu vào.**

Số nguyên dương n.

**Giới hạn.**

1 ≤ n ≤ 12.

**Đầu ra.**

In ra kết quả của S(n).


**Input 01.**

```
5
```

**Output 01.**

```
153
```

```cpp
#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int n; cin >> n;
	long long gt = 1;
	long long sum = 0;
	for (int i = 1; i <= n; i++) {
		gt *= i;
		sum += gt;
	}
	cout << sum;
}
```

# Bài 29. Tổng chẵn

Cho N số nguyên, nhiệm vụ của bạn là tính tổng các số nguyên được nhập là số chẵn.

**Đầu vào.**

Dòng đầu tiên là số nguyên dương N - số lượng số được nhập.

Dòng thứ 2 là N số nguyên được nhập, mỗi số cách nhau một khoảng trắng.

**Giới hạn.**

1 ≤ n ≤ 100000.

Các số được nhập là số nguyên dương không quá 10^6.

**Đầu ra.**

In ra tổng các số chẵn được nhập vào.


**Input 01.**

```
8
8 9 4 1 5 1 6 6
```

**Output 01.**

```
24
```

```cpp
#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int n; cin >> n;
	long long sum = 0;
	for (int i = 0; i < n; i++) {
		int tmp; cin >> tmp;
		if (tmp % 2 == 0) sum += tmp;
	}
	cout << sum;
}
```

# Bài 30. Kiểm tra nhiều test case

Bài này rất đơn giản, nhiệm vụ của bạn là kiểm tra số nhập vào là chẵn hay lẻ. Các bạn phải trả lời nhiều trường hợp. (Bài này có nhiệm vụ cho các bạn làm quen với các bài toán mà đề bài cho nhiều test case sau này).

**Đầu vào.**

Dòng đầu tiên là số lượng trường hợp T.

T dòng tiếp theo mỗi dòng là một số nguyên N cần kiểm tra tính chẵn lẻ.

**Giới hạn.**

1 <= T <= 100.

Các số cần kiểm tra là số không âm không quá 1000.

**Đầu ra.**

Đối với mỗi trường hợp, các bạn in kết quả trên 1 dòng, nếu số ở trường hợp đó là chẵn thì in ra "EVEN", ngược lại in ra "ODD".


**Input 01.**

```
3
166
721
665
```

**Output 01.**

```
EVEN
ODD
ODD
```

```cpp
#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int tmp; cin >> tmp;
		if (tmp % 2 == 0) cout << "EVEN\n";
		else cout << "ODD\n";
	}
}
```