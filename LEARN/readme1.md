# Hiện thị ra màn hình

- Cú pháp: `cout <<`. 

    ```C++
    #include <iostream>

    using namespace std;

    int main() {
        printf("Tung dep trai");
        return 0;
    }
    ```

    ```cpp
    using namespace std;

    int main() {
        cout << "Xin chao !\n";
        cout << "Hello" << endl;
        return 0;
    }
    ```

    ```cpp
    using namespace std;

    int main() {

        //cout << "Xin chao !\n";
        //cout << "Hello" << endl; // chú thích 1 dòng

        /*
        cout << "Xin chao !\n";
        cout << "Hello" << endl;	// chú thích nhiều dòng
        cout << "Xin chao !\n";
        */

        cout << "Hello" << endl;
        return 0;
    }
    ```

# Kiểu dữ liệu (số nguyên, số thực, kí tự, bool)

- Số nguyên: int (4 byte `-2^31` -> `2^31` - `1`), long long (8 byte `-2^63` -> `2^63` - `1`).

    ```CPP
    #include <iostream>

    using namespace std;

    int main() {
        cout << INT_MIN << endl << INT_MAX << endl;
        cout << LLONG_MIN << endl << LLONG_MAX;
        return 0;
    }
    ```

- Số thực: float (4 byte), double (8 byte).

- Kí tự: 1 byte.

- Bool.

    ```cpp
    #include <iostream>
    #include <iomanip>
    using namespace std;

    int main() {
        bool check1 = true;
        bool check2 = false;
        cout << check1 << " " << check2 << endl;
        return 0;
    }
    ```

    nếu là 0 thì `false` còn khác 0 sẽ là `true`.

# Biến

- Cú pháp:

    ```CPP
    //[Data type] [Ten bien]
    long long a, b, c;
    int x = 100;
    float d = 2.9;
    char kt = 'T';
    ```

- Quy tắc đặt tên:

    ```txt
    Không có số ở đầu (1tung, 3hello, ...)
    không có dấu cách và kí tự đặc biệt (ban kinh, tung@, ...)
    Không đặt tên cùng từ khóa (long long for, long long using, ...)
    Không được sử dụng tiếng việt
    ```

    Không nên đặt tên quá dài, nên đặt tên dễ nhìn như `BanKinh`, `ban_Kinh`.

    ```cpp
    #include <iostream>

    using namespace std;

    int main() {
        cout << ' ' << endl; // coi là kí tự
        cout << "  Tung" << endl; // coi là string
        return 0;
    }
    ```

- Chú ý khai báo kiểu dữ liệu char thì ra phải để trong dấu nháy đơn `''`, còn để trong nháy kép `""` thì nó được coi là string (xâu kí tự).

    ```cpp
    char a = 't';
    ```

# In với độ chính xác.

- Thư viện: `iomanip`.

- Cú pháp:

    ```cpp
    cout << fixed << setprecision(3) << x << endl;
    ```

    ```cpp
    #include <iostream>
    #include <iomanip>
    using namespace std;

    int main() {
        float a = 3.46532;
        cout << fixed << setprecision(3) << a << endl;
        return 0;
    }
    ```

# Nhập từ bàn phím.

- Cú pháp:

    ```cpp
    cin >> a;
    ```

    ```cpp
    #include <iostream>
    #include <iomanip>
    using namespace std;

    int main() {
        int a, b, c;
        cin >> a >> b >> c;
        cout << a << " " << b << " " << c << endl;
    }
    ```

- Chú ý: `cin` có thể `Enter` hoặc `dấu cách` (1 hay nhiều dấu cách đều được).

    ```cpp
    #include <iostream>
    #include <iomanip>
    using namespace std;

    int main() {
        int n = 100;
        n = 200;
        n = 300;
        cout << n;
    }
    ```

    Kết quả `n = 300`.

# Toán tử
- Cộng `+`, trừ `-`, nhân `*`, chia dư `%`, chia `/` (chú ý số nguyên chia số nguyên ra số nguyên, còn lại ra số thực).

- Ép kiểu:

    ```txt
    (data_type)ten_bien
    ```

    ```cpp
    #include <iostream>
    #include <iomanip>
    using namespace std;

    int main() {
        int a = 200;
        int b = 300;
        cout << (float) b / a << endl;
        return 0;
    }
    ```

- Tràn bộ nhớ

    ```cpp
    #include <iostream>
    #include <iomanip>
    using namespace std;

    int main() {
        int n = 1000000;
        int m = 1000000;
        long long tich = 1LL * m * n;
        cout << tich << endl;
    }
    ```

- Toán tử so sánh: lớn hơn `>`; lớn hơn hoặc bằng `>=`; nhỏ hơn `<`; nhỏ hơn hoặc bằng `<=`; khác `!=`; bằng `==`.

- Toán tử 1 ngôi: `++` và `--`.

    ```cpp
    #include <iostream>
    using namespace std;

    int main() {
        int n = 1;
        n++;
        cout << n << endl;

        return 0;
    }
    ```

- Toán tử AND, OR, NOT.

    `AND`: 1 khi cả 2 đều 1 (`&`).

    `OR`: 0 khi cả 2 đều là 0 (`||`).

    `NOT`: phủ định (`!`).

# Cấu trúc rẽ nhánh

- Cú pháp lệnh `if`:

    ```cpp
    if (dieu_kien){
        // code ben trong if
    }
    // code dang sau if
    ```

    ```cpp
    #include <iostream>
    using namespace std;

    int main() {
        if (1) {
            cout << "Cau lenh ben trong if" << endl;
        }
        return 0;
    }
    ```

    ```cpp
    #include <iostream>
    using namespace std;

    int main() {
        int n; cout << "Nhap mot so nguyen n: ";
        cin >> n;
        if (n % 5 == 0) {
            cout << "n la mot so chia het cho 5" << endl;
            return 0;
        }
        cout << "n la mot so khong chia het cho 5" << endl;
        return 0;
    }
    ```

- Cú pháp `if-else`:

    ```cpp
    if (dieu_kien_if){
        // code trong if
    }
    else {
        // code trong else
    }
    ```

- Cú pháp `if-else if-else`:

    ```cpp
    if (dieu_kien_if){
        // code trong if
    }
    else if (dieu_kien_else_if){
        // code trong else if
    }
    else {
        // code trong else
    }
    ```

- Hàm `pow(a, b)`: tính a^b. Thư viện `math.h`.

- Hàm `sqrt(a)`: tính căn bậc 2 của a. Thư viện `math.h`.

    Chú ý hàm `pow` và `sqrt` đều trả về số thực.