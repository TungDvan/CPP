# Vòng lặp nhập môn

## 01: Cơ bản 1

Cho số nguyên không âm N, bạn hãy in ra chữ số đầu tiên và cuối cùng của N bảng cách sử dụng vòng lặp while.

**Input Format.**

Dòng duy nhất chứa số nguyên N.

**Constraints.**

0 <= N <= 10^18.

**Output Format.**

In ra đáp án của bài toán.

**Sample Input 0.**

```
28282828
```

**Sample Output 0.**

```
2 8
```

```cpp
// loi giai
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
	long long n; cin >> n;
	int l = n % 10;
	while (n >= 10) {
		n /= 10;
	}
	cout << n << " " << l << endl;
	return 0;
}
```

## 02: Cơ bản 2

Cho số nguyên N có ít nhất 2 chữ số, bạn hãy tính tổng độ chênh lệch giữa các chữ số đứng cạnh nhau của N.

Ví dụ N = 12341 thì tổng độ chênh lệch sẽ là 1 + 1 + 1 + 3 = 6.

**Input Format.**

Dòng duy nhất chứa số nguyên N.

**Constraints.**

10 <= N <= 10^18.

**Output Format.**

In ra đáp án của bài toán.

**Sample Input 0.**

```
1234567
```

**Sample Output 0.**

```
6
```

```cpp
// loi giai
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
	long long n; cin >> n;
	int sum = 0;
	int l = n % 10;
	n /= 10;
	while (n) {
		sum += abs((n % 10) - l);
		l = n % 10;
		n /= 10;
	}
	cout << sum << endl;
	return 0;
}
```

```cpp
// loi giai
#include <iostream>
#include <math.h>
using namespace std;

int main() {
	long long n; cin >> n;
	int sum = 0;
	while (n >= 10) {
		int r = n % 10;
		n /= 10;
		sum += abs(r - n % 10);
	}
	cout << sum << endl;
	return 0;
}
```

## 03: Cơ bản 3

Cho số nguyên không âm N. bạn hãy in ra chữ số lớn nhất của N.

**Gợi ý:** Bạn lưu lại chữ số hàng đơn vị của n sau đó tách từng chữ số của n ra và so sánh để cập nhật lại số lớn nhất. Lưu ý rằng số có 1 chữ số thì nó chính là chữ số lớn nhất.

**Input Format.**

Dòng duy nhất chứa số nguyên N.

**Constraints.**

0 <= N <= 10^18.

**Output Format.**

In ra đáp án của bài toán.

**Sample input 0.**

```
28282828
```

**Sample Output 0.**

```
8
```

```cpp
// loi giai
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
	long long n; cin >> n;
	int max = -1e9;
	while (n) {
		if (max < (n % 10)) max = n % 10;
		n /= 10;

	}
	cout << max << endl;
	return 0;
}
```

## 04: Cơ bản 4

Cho số nguyên không âm N bạn hãy kiểm tra xem chữ số đầu tiên của N có phải là số lớn nhất trong mọi chữ số của N hay không. Ví dụ N = 9123189 thỏa mãn điều này.

**Gợi ý:** Tìm chữ số lớn nhất ngoại trừ số đầu tiên, lấy số đầu tiên so sánh với chữ số lớn nhất tìm được này.

Dùng vòng lặp while(n >= 10) để tách các chữ số ngoại trừ số đầu tiên, sau vòng lặp này thì n chính là số đầu tiên của nó.

**Input Format.**

Dòng duy nhất chứa số nguyên N.

**Constraints.**

0 <= N <= 10^18.

**Output Forrnat.**

In ra YES nếu N thỏa mãn, ngược lại in NO.

**Sample Input 0.**

```
9888811237
```

**Sample Output 0.**

```
YES
```

```cpp
// loi giai
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
	long long n; cin >> n;
	int max = 0;
	int tmp = 0;
	while (n) {
		if (max < (n % 10)) max = n % 10;
		tmp = n % 10;
		n /= 10;
	}
	if (tmp == max) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
```

```cpp
// loi giai
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
	long long n; cin >> n;
	int max = 0;
	while (n >= 10) {
		if (max < (n % 10)) max = n % 10;
		n /= 10;
	}
	if (n >= max) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
```

## 05: Cơ bản 5

Cho số nguyên N, bạn hãy kiểm tra xem có phải số lượng chữ số lẻ của N ít hơn chữ số chẵn của N hay không? Nếu đúng thì in ra `7un6Dv4n`, ngược lại in ra `TungDvan`. Lưu ý N có thể là số âm, số 0 và cả số dương. 

**Input Format.**

Dòng duy nhất chứa số nguyên N.

**Constraints.**

-10^18 <= n <= 10^18.

**Output Format.**

In ra `7un6Dv4n` hoặc `TungDvan`.

**Sample Input 0.**

```
12348882612
```

**Sample Output 0.**

```
7un6Dv4n
```

```cpp
// loi giai
#include <iostream>
#include <math.h>
using namespace std;

int main() {
	long long n; cin >> n;
	if (n == 0) {
		cout << "7un6Dv4n" << endl;
		return 0;
	}
	n = abs(n);
	int chan = 0, le = 0;
	while (n) {
		if ((n % 10) % 2 == 0) chan++;
		else le++;
		n /= 10;
	}
	if (le < chan) cout << "7un6Dv4n" << endl;
	else cout << "TungDvan" << endl;
	return 0;
}
```


## 06: Cơ bản 6

Cho số tự nhiên `N`, bạn hãy:

- n ra các số nguyên không âm là bội của 3 <= `N` (dùng bước nhảy = 3).

- In ra các số nguyên không âm là lũy thừa của 2 <= `N`.

- In ra số nguyên không âm nhỏ nhất lớn hơn hoặc bằng `N` mà địa hết cho 17.

- In ra số nguyên không âm lớn nhất nhỏ hơn `N` mà chia hết cho 7.

- In ra các số trong dãy số 1, 2, 4, 7, 11, 16, 22.... mà nhỏ hơn hoặc bằng `N`, các số trong dãy này có khoảng cách giữa các số tăng dần lên 1 đơn vị.

**Input Format.**

Dòng duy nhất chứa số nguyên N.

**Constraints.**

1 <= N <= 1000.

**Output Format.**

In ra 5 dòng tương ứng

**Samnple Input 0.**

```
50
```

**Samnple Output 0.**

```
0 3 6 9 12 15 18 21 24 27 30 33 36 39 42 45 48
1 2 4 8 16 32
51
49
1 2 4 7 11 16 22 29 37 46
```

```cpp
// loi giai
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
	int n; cin >> n;
	for (int i = 0; i <= n; i += 3) cout << i << " ";
	cout << endl;
	for (int i = 1; i <= n; i *= 2) cout << i << " ";
	cout << endl;
	for (int i = n;; i++) {
		if (i % 17 == 0) {
			cout << i << endl;
			break;
		}
	}
	for (int i = n - 1;; i--) {
		if (i % 7 == 0) {
			cout << i << endl;
			break;
		}
	}
	//cout << n / 17 * 17 << endl;
	//cout << (n - 1) / 7 * 7 << endl;
	int kc = 0;
	for (int i = 1; i <= n; i += kc) {
		cout << i << " ";
		kc++;
	}
	cout << endl;
	return 0;
}
```

## 07: Cơ bản 7

Bài này các bạn sử dụng cả 2 vòng lặp `for` và `while` để code. Lượt 1 sử dụng for, lượt 2 dùng while. Cho số tự nhiên N, nhiệm vụ của bạn in ra các dãy số bằng vòng lặp trên từng dòng, mỗi số cách nhau một dấu cách.

- Dòng 1. In ra các số từ 1 tới n.

- Dòng 2. In ra các số từ n về 0.

- Dòng 3. In ra các số chẵn nhỏ hơn hoặc bằng n.

- Dòng 4. In ra các số lẻ nhỏ hơn hoặc bảng n.

- Dòng 5. In ra các bội số của 4 nhỏ hơn n.

- Dòng 6. In ra N chữ cái in thường đầu tiên.

- Dòng 7. In ra N chữ cái in thường cuối cùng theo thứ tự tăng dần.

**Input Format.**

Dòng duy nhất chứa số nguyên dương N.

**Constraints.**

5 <= N <= 26.

**Samnple Input 0.**

```
12
```

**Samnple Output 0.**

```
1 2 3 4 5 6 7 8 9 10 11 12
12 11 10 9 8 7 6 5 4 3 2 1 0
0 2 4 6 8 10 12
1 3 5 7 9 11
0 4 8 12
a b c d e f g h i j k l
o p q r s t u v w x y z
```

```cpp
// loi giai
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
	int n; cin >> n;
	for (int i = 1; i <= n; i++) cout << i << " ";
	cout << endl;
	for (int i = n; i >= 0; i--) cout << i << " ";
	cout << endl;
	for (int i = 0; i <= n; i += 2) cout << i << " ";
	cout << endl;
	for (int i = 1; i <= n; i += 2) cout << i << " ";
	cout << endl;
	for (int i = 0; i <= n; i += 4) cout << i << " ";
	cout << endl;
	for (int i = 0; i < n; i++) cout << char(i + 'a') << " ";
	cout << endl;
	for (int i = n - 1; i >= 0; i--) cout << char('z' - i) << " ";
	cout << endl;
	return 0;
}
```

# Vòng lặp 

# 01: Tổng tự nhiên liên tiếp

Tính tổng S(n) = 1 + 2 + 3 + ... + n.

Gợi ý: Khai báo biến sum = 0, duyệt vòng lặp từ 1 tới n và cộng dồn i vào sum. Sau khi vòng lặp kết thúc thì in ra sum, chú ý phải lặp xong mới in sum, không in sum trong vòng for khi chưa tính xong tổng các số.

Đầu vào
Số nguyên dương N

Giới hạn
1≤N≤10^6

Đầu ra
Kết quả S(n)

Ví dụ :
Input 01
Copy
6
Output 01
Copy