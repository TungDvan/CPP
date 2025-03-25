# 01: HÀM VOID

Bạn hãy hoàn thành nốt mã nguồn cho hàm sau để có thể in ra 3 dòng:

- Dòng 1 hiển thị nội dung : "Xin chao" không có dấu nháy kép.

- Dòng 2 hiển thị nội dung : "Ham void" không có dấu nháy kép.

- Dòng 3 hiển thị nội dung : “28tech.com.vn” không có dấu nháy kép.

Bạn chỉ cần triển khai chương trình bằng cách hoàn thành nốt mã nguồn cho hàm display dưới đây :
    

```cpp
void disp1ay(){
    //code here
}
int main(){
    return 0;
}
```

**Input Format.**

Không có input.

**Constraints.**

N/A.

**Output Format.**

In ra output 3 dòng the yêu cầu.

```cpp
#include<iostream>

using namespace std;

void xinchao() {
    cout << "Xin chao" << endl;
    cout << "Ham void" << endl;
    cout << "28tech.com.vn" << endl;
    return;
}

int main() {
    xinchao();
    return 0;
}
```

# 02: HÀM VỚI THAM SỐ.

Cho 3 số nguyên a, b, c bạn hãy cài đặt hàm thực hiện chức năng in ra 3 số theo thứ tự b, a, c ở dòng thứ 1, dòng thứ 2 in ra tổng của 3 số, dòng thứ 3 in ra "KET THUC !". Bạn cần hoàn thiện code cho chương trình theo mã nguồn gợi ý sau:

```cpp
#define ll long long
void displayNumber(ll x, ll y, ll z){
    //code here
}
int main(){
    ll a, b, c;
    cin >> a >> b >> c;
    displayNumber(a, b, c);
    return 0;
}
```

**Input Format.**

1 dòng duy nhất chứa 3 số nguyên.

**Constraints.**

0 <= a, b, c <= 10^15.

**Output Format.**

In ra kết quả 3 dòng tương ứng theo yêu cầu.

**Sample Input 0.**

```
10 20 30
```

**Sample Output 0.**

```
20 10 30
60
KET THUC
```

```cpp
#include<iostream>

using namespace std;

#define ll long long
void displayNumber(ll x, ll y, ll z) {
    cout << y << " " << x << " " << z << endl;
    cout << x + y + z << endl;
    cout << "KET THUC" << endl;
    return;
}
int main() {
    ll a, b, c;
    cin >> a >> b >> c;
    displayNumber(a, b, c);
    return 0;
}
```

# 04: GIÁ TRỊ TRẢ VỀ CỦA HÀM.

Cho 3 số nguyên a, b, c. Bạn hãy xây dựng hàm thực hiện những công việc sau: Dòng 1 in ra dòng chữ "28tech.com.vn", Dòng 2 in ra 2 * a, 3 * b,  4 * c, Dòng 3 in ra tích của 3 số.

Bạn chỉ được sử dụng mã nguồn hàm `main` như dưới đây mà không được thêm bất cứ câu lệnh nào trong hàm `main`, công việc của bạn cần làm là hoàn thiện nốt hàm solve để có thể cho ra output như yêu cầu.

```cpp
int solve(int x, int y, int z){
    //Code here
}
int main(){
    int a, b, c;
    cin >> a>> b >> c;
    cout << solve(a, b, c) << endl;
    return 0;
}
```

**Input Format.**

Dòng duy nhất chứa 3 số nguyên a, b, c.

**Constraints.**

0 <= a, b, c <= 10000.

**Output Format.**

In ra 3 dòng theo yêu cầu của đề bài.

**Sample Input 0.**

```
23 5436 1234
```

**Sample Output 0.**

```
28tech.com.vn
46 16308 4936
154284552
```

```cpp
#include<iostream>

using namespace std;

#define ll long long

int solve(int x, int y, int z) {
    cout << "28tech.com.vn\n";
    cout << 2 * x << " " << 3 * y << " " << 4 * z << endl;
    return x * y * z;
}
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << solve(a, b, c) << endl;
    return 0;
}
```

# 05: HÀM TÌNH TỔNG CHỮ SỐ.

Hãy viết hàm trả về tổng chữ số của 1 số nguyên và sử dụng nó để in ra tổng chữ số của số nguyên N. Bạn cần cài đặt theo gợi ý sau:

```cpp
int sum_digit(long long n){
    //code here
}

int main(){
    long long a; cin >> a;
    cout << sum_digit(a) << endl;
    return 0;
}
```

**Input Format.**

Dòng duy nhất chứa số nguyên N.

**Constraints.**

0 <= n <= 10^18.

**Output Format.**

In ra tổng chữ số của N.

**Sample Input 0.**


```
111
```

**Sample Output 0.**

```
3
```

```cpp
#include<iostream>

using namespace std;

#define ll long long

int sum_digit(long long n) {
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    long long a; cin >> a;
    cout << sum_digit(a) << endl;
    return 0;
}
```

# 06: TỔNG DÃY SỐ

Cho rất nhiều số nguyên, bạn hãy tính tổng chữ số của các số này và in ra màn hình. Triển khai mã nguồn theo gợi ý sau

```cpp
int sum_digit(Long tong n){
    //code here
}

int main(){
    int n; cin >> n;
    long long x;
    for(int i = 1; i <= n; i++){
        cin >> x;
        cout << sum_digit(x) << " ";
    }
    return 0;
}
```

**Input Format.**

Dòng 1 là N : số lượng số trong dãy số.

Dòng 2 gồm N số viết cách nhau 1 dấu cách.

**Constraints.**

1 <= N <= 1000.

Các số trong dãy là số int 64 bit.

**Output Format.**

In ra tổng chữ số của các số trong dãy số đã cho trên 1 dòng.

**Sample Input 0.**

```
5
8324 5442 1419 7781 8249
```

**Sample Output 0.**

```
17 15 15 23 23
```

```cpp
#include<iostream>

using namespace std;

#define ll long long

int sum_digit(long long n) {
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int n; cin >> n;
    long long x;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        cout << sum_digit(x) << " ";
    }
    return 0;
}
```

# 07: HÀM TRẢ VỀ TRUE HOẶC FALSE

Thông thường, các bài toán cần kiểm tra tính chất như số nguyên tố, thuận nghịch, chính phương... bạn nên viết hàm trả về `true` hoặc `false`. Nếu tham số truyền vào hàm thỏa mãn tính chất thì trả về `true`, ngược lại trả về `false`.

Trong main, bạn chỉ cần gọi hàm và dựa vào giá trị hàm trả về để biết số đó có thỏa mãn tính chất cho trước hay không. Dù đề bài yêu cầu bạn in ra `YES`, `NO`, `1`, `0` hay bất kỳ giá trị nào khác thì cũng không quan trọng, vì mình vẫn sẽ xây dựng hàm trả về `true` hoặc `false`. Còn việc in ra `YES`, `NO`, `1`, `0` đều có thể xử lý sau.

Bài này, bạn hãy viết hàm kiểm tra xem một số có thỏa mãn tính chất: Tổng các chữ số của nó có chữ số tận cùng là 8. Ví dụ, số 666 thỏa mãn vì có tổng bằng 18 và chữ số tận cùng của tổng là 8. Nếu thỏa mãn, bạn hãy in `28tech`, ngược lại in ra `29tech`.

Bạn cần triển khai theo mã nguồn sau:

```cpp
bool check(long long n) {
    // code here
}

int main() {
    long long x;
    cin >> x;
    if (check(x)) {
        cout << "28tech\n";
    } else {
        cout << "29tech\n";
    }
    return 0;
}
```

**Input Format.**

Dòng duy nhất chứa số nguyên cần kiểm tra.

**Constraints.**

Số nguyên cần kiểm tra là số nguyên 64 bit.

**Output Format.**

In ra `28tech` hoặc `29tech`.

**Sample Input 0.**

```
666
```

**Sample Output 0.**

```
28tech
```

```cpp
#include<iostream>

using namespace std;

#define ll long long

bool check(long long n) {
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    if (sum % 10 == 8) return true;
    else return false;
}

int main() {
    long long x;
    cin >> x;
    if (check(x)) {
        cout << "28tech\n";
    }
    else {
        cout << "29tech\n";
    }
    return 0;
}
```

# 08: TRẢ VỀ TRUE FALSE 2

Bài này, bạn cần áp dụng hàm trả về `true` hoặc `false` cho một dãy số.
Một số được coi là số đẹp nếu số lượng chữ số chẵn và số lượng chữ số lẻ của nó bằng nhau. Bạn hãy liệt kê các số đẹp trong đoạn từ 1 đến N. Bạn cần triển khai mã nguồn theo gợi ý sau:

```cpp
bool so_dep(int n) {
// code here
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (so_dep(i)) {
            cout << i << " ";
        }
    }
    return 0;
}
```

**Input Format.**

Dòng duy nhất chứa số nguyên n.

**Constraints.**

1 ≤ n ≤ 10^6.

**Output Format.**

Liệt kê các số đẹp trong đoạn từ 1 đến N.

**Sample Input 0.**

```
97
```

**Sample Output 0.**

```
10 12 14 16 18 21 23 25 27 29 30 32 34 36 38 41 43 45 47 49 50 52 54 56 58 61 63 65 67 69 70 72 74 76 78 81 83 85 87 89 90 92 94 96
```

```cpp
#include<iostream>

using namespace std;

#define ll long long

bool so_dep(int n) {
    int chan = 0, le = 0;
    while (n) {
        if ((n % 10) % 2 == 0) chan++; // doi thanh dieu kien n % 2 == 0 cx duoc
        else le++;
        n /= 10;
    }
    return chan == le;
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (so_dep(i)) {
            cout << i << " ";
        }
    }
    return 0;
}
```

# 09: KẾT HỢP GIÁ TRỊ CỦA NHIỀU HÀM

Khi đề bài yêu cầu bạn phải kiểm tra đồng thời nhiều điều kiện, bạn nên chia mỗi điều kiện thành một hàm. Trong main, bạn sẽ gọi đồng thời các hàm đó, và nếu tất cả các hàm đó đều trả về true cho tham số bạn truyền vào, thì khi đó ta sẽ được một số thỏa mãn đồng thời nhiều điều kiện.

Một số được coi là số đẹp nếu:

- Có ít nhất một chữ số 6. Nếu tìm thấy số 6, thì return true ngay; nếu sau vòng while không tìm thấy, thì return false.

- Có tổng các chữ số là số chẵn.

- Số lượng chữ số lẻ nhiều hơn số lượng chữ số chẵn.

Bạn hãy liệt kê các số như vậy trong đoạn [a, b].

Bạn cần triển khai theo mã nguồn sau:

```CPP
bool chua6(int n) {
    // code here
}

bool tongchan(int n) {
    // code here
}

bool chanle(int n) {
    // code here
}

int main(){
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++){
        if (chua6(i) && tongchan(i) && chanle(i)){
            cout << i << " ";
        }
    }
}
```

**Input Format.**

Dòng duy nhất chứa hai số nguyên a và b.

**Constraints.**

1 ≤ a ≤ b ≤ 10^6.
 
**Output Format.**

In ra các số đẹp trong đoạn [a, b] trên cùng một dòng, cách nhau bằng dấu cách.

**Sample Input 0.**

```
100 1147
```

```
116 136 156 161 163 165 167 169 176 196 316 336 356 361 363 365 367 369 376 396 516 536 556 561 563 565 567 569 576 596 611 613 615 617 619 631 633 635 637 639 651 653 655 657 659 671 673 675 677 679 691 693 695 697 699 716 736 756 761 763 765 767 769 776 796 916 936 956 961 963 965 967 969 976 996
```

```cpp
#include<iostream>

using namespace std;

bool chua6(int n) {
    while (n) {
        if (n % 10 == 6) return true;
        n /= 10;
    }
    return false;
}

bool tongchan(int n) {
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum % 2 == 0;
}

bool chanle(int n) {
    int chan = 0, le = 0;
    while (n) {
        if (n % 2 == 0) chan++;
        else le++;
        n /= 10;
    }
    return le > chan;
}

int main() {
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if (chua6(i) && tongchan(i) && chanle(i)) {
            cout << i << " ";
        }
    }
}
```

# 10: HÀM GỌI HÀM

Bạn thường gọi một hàm trong hàm `main()`, nhưng thực tế, các hàm có thể gọi lại lẫn nhau.

Một số được gọi là đẹp nếu tổng chữ số của nó là một số có số lượng chữ số chẵn nhiều hơn số lượng chữ số lẻ.

Khi phân tích yêu cầu này, bạn nhận thấy cần phải:

1. Tính tổng các chữ số của một số.

2. Kiểm tra xem tổng đó có số lượng chữ số chẵn nhiều hơn số lượng chữ số lẻ hay không.

Cách giải quyết là:

- Trước tiên, xây dựng một hàm kiểm tra xem một số có nhiều chữ số chẵn hơn lẻ hay không.

- Sau đó, viết một hàm khác để tính tổng chữ số của số đó.

- Khi đã có tổng chữ số, gọi lại hàm kiểm tra chẵn/lẻ để đưa ra kết luận.

Yêu cầu.

- Hãy liệt kê các số đẹp trong đoạn từ 1 tới N.

Bạn cần triển khai theo mã nguồn sau:

```CPP
// Hàm kiểm tra xem một số có nhiều chữ số chẵn hơn chữ số lẻ hay không
bool chanle(int n) {
    // code here
}

// Hàm kiểm tra tổng của một số có phải có nhiều chữ số chẵn hơn chữ số lẻ không
bool check(int n) {
    // Tính tổng chữ số của n
    // Gọi hàm chante và truyền tổng vào để kiểm tra
    // Nếu thỏa mãn thì trả về true, ngược lại trả về false
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (check(i)) {
            cout << i << " ";
        }
    }
}
```

**Input Format.**

Dòng duy nhất chứa số nguyên N.

**Constraints.**

0 <= N <= 10^5.

**Output Format.**

In ra các số đẹp trên 1 dòng.

**Sample Input 0.**

```
717
```

**Sample Output 0.**

```
2 4 6 8 11 13 15 17 20 22 24 26 31 33 35 40 42 44 51 53 60 62 71 80 101 103 105 107 110 112 114 116 121 123 125 130 132 134 141 143 150 152 161 170 200 202 204 206 211 213 215 220 222 224 231 233 240 242 251 260 299 301 303 305 310 312 314 321 323 330 332 341 350 389 398 400 402 404 411 413 420 422 431 440 479 488 497 499 501 503 510 512 521 530 569 578 587 589 596 598 600 602 611 620 659 668 677 679 686 688 695 697 699 701 710
```

```cpp
#include <iostream>

using namespace std;

bool chanle(int n) {
    int chan = 0, le = 0;
    while (n) {
        if (n % 2 == 0) chan += 1;
        else le += 1;
        n /= 10;
    }
    if (chan > le) return true;
    else return false;
}


bool check(int n) {
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return chanle(sum);
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (check(i)) {
            cout << i << " ";
        }
    }
}
```

- Lưu ý trong bài này hàm `check()` mà gọi hàm `chanle()` mà hàm `chanle()` xây dựng ở dưới hàm check thì nó sẽ bị lỗi.

    ![alt text](image-15.png)

    Nguyên nhân của lỗi là do trình biên dịch chạy từ trên xuống dưới, và khi nó chạy vào hàm `check()` thì nó thấy hàm `chanle()` mà nó chưa gặp hàm chẵn lẻ thì nó sẽ báo lỗi. 
    
    Nên là thông thường khi mà xây dựng hàm nếu mà hàm `A` gọi hàm `B` thì hàm `B` cần xây dựng trước hàm `A`. Còn nếu mà muốn xây dựng sau thì mình cần phải khai báo trước ra (còn được gọi là khai báo nguyên mẫu hàm `forward decleration` = `function prototype`). Tức là mình sẽ thông báo cho trinh biên mình biết rằng chương trình của mình có những hàm gì, kiểu trả về là bao nhiêu và tham số truyền vào là gì.

    Ví dụ như sau:

    ```cpp
    bool check(int);
    bool chanle(int);
    ```

    Như vậy 2 dòng này sẽ thông báo cho chương trình của mình biết là tui có 2 hàm là hàm `check()` và hàm `chanle()` có kiểu trả về là bool và tham số truyền vào là int.

    Trong bài trên cụ thể là như sau:

    ```cpp
    #include <iostream>

    using namespace std;

    bool check(int);
    bool chanle(int);

    bool check(int n) {
        int sum = 0;
        while (n) {
            sum += n % 10;
            n /= 10;
        }
        return chanle(sum);
    }

    bool chanle(int n) {
        int chan = 0, le = 0;
        while (n) {
            if (n % 2 == 0) chan += 1;
            else le += 1;
            n /= 10;
        }
        if (chan > le) return true;
        else return false;
    }


    int main() {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            if (check(i)) {
                cout << i << " ";
            }
        }
    }
    ```

# 11: SWAP

Bạn hãy viết hàm sử dụng tham chiếu để swap giá trị của 2 số.

```cpp
void my_swap(int &a, int &b){
    //code here
}

int main(){
    int x, y; cin >> x >> y;
    swap(x, y);
    cout << x << " " << y << endl;
    return 0;
}
```

**Input Format.**

1 dòng duy nhất chứa 2 số nguyên x, y.

**Constraints.**

x, y là số nguyên 32 bit b.

**Output Format.**

In ra 2 số x, y sau khi swap.

**Sample Input 0.**

```
748 494
```

**Sample Output 0.**

```
494 748
```

```cpp
#include<iostream>

using namespace std;

void my_swap(int& a, int& b) {
    int tmp = a;
    a = b;
    b = tmp;
    return;
}

int main() {
    int x, y; cin >> x >> y;
    swap(x, y);
    cout << x << " " << y << endl;
    return 0;
}
```

# 12: SỐ TĂNG

Một số được coi là số tăng nếu các chữ số của nó tăng dần từ trái qua phải. Bạn hãy liệt kê những số tăng dần trong đoạn từ a tới b. Ví dụ, số `12789` là số tăng dần. Gợi ý: So sánh các cặp chữ số đứng cạnh nhau: 9 - 8, 8 - 7, 7 - 2, 2 - 1. Nếu trong quá trình so sánh, thấy số đứng sau >= số đứng trước thì `return false` ngay. Lưu ý: để vòng lặp `while(n >= 10)`, để khi n tới 1 chữ số thì nó sẽ dừng.

```cpp
bool so_tang(int n) {
    // Code kiểm tra số tăng
}

int main() {
    int a, b; cin >> a >> b;
    for (int i = a; i <= b; i++) {  
        if (so_tang(i)) {  
            cout << i << " ";  
        }
    }
    return 0;
}
```

**Input Format:**

Dòng duy nhất chứa 2 số nguyên a, b.

**Constraints:**

a, b là số nguyên không âm, trong phạm vi 32-bit.

**Output Format:**

In ra các số tăng trong đoạn [a, b].