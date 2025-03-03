# 01: KHÁI QUÁT VỀ HÀM

- Phần lớn các chương trình máy tính được xây dựng để giải quyết các bài toán lớn trong thực tế.

- Cách tốt nhất để xây dựng và bảo trì một chương trình đó là xây dựng  những thành phần nhỏ được xây dựng đơn lẻ.

- Chức năng hàm (function) được sử dụng để chia nhỏ chương trình thành các thủ tục nhỏ để giải quyết những chức năng nhỏ.

- Lợi ích của việc chia chương trình thành các hàm nhỏ.

    ```txt
    1. code trở nên mạch lạc, dễ hiểu.
    2. dễ debug khi gặp lỗi.
    3. dễ bảo trì khi thay đổi một chức năng nhỏ.
    4. có khả năng tái sử dụng code.
    ```

# 02: CÚ PHÁP CỦA MỘT HÀM

```CPP
returntype functionName (parameter1, parameter2,...){
    // function body
}
```

- Trong đó:

    - returntype: kiểm trả về của hàm (int, double, bool, void,...).

    - functionName: tên hàm.

    - parameterX: tham số của hàm.

    - function body: các câu lệnh bên trong hàm.

# 03: VIẾT HÀM

- Hàm trong C++:

    ```cpp
    void xinchao(){
        cout << "tungdvan" << endl;
        cout << "BachHaiPhuong" << endl;
        return;
    }

    int main(){
        xinchao(); // function call ; lời gọi hàm
    }
    ```

- Bạn hãy hoàn thành nốt mã nguồn cho hàm sau để có thể in ra 3 dòng:

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

# 04: THAM SỐ/ĐỐI SỐ

- Là dữ liệu truyền vào hàm. Ví dụ:

    ```cpp
    #include<iostream>

    using namespace std;

    void display(int a, int b, int c) {
        cout << a << " " << b << " " << c << endl;
        return;
    }

    int main() {
        display(10, 20, 30);
        return 0;
    }
    ```

- Chú ý: `function call is made by assignment`.

    Ở ví dụ trên thì những thứ truyền vào hàm là đối số (`argument`: `10`, `20`, `30`), rùi chương trình thực hiện gán lần lượt các đối số `10`, `20`, 30 cho các tham số `a`, `b`, `c` (`parameter`).

    Ở hàm thì a, b, c là các tham số còn 10, 20, 30 là các đối số.

    Hàm cần bao nhiêu tham số thì cần truyền bấy nhiêu đối số.

- Có thể truyền nhiều tham số khác nhau.

    ```cpp
    #include<iostream>

    using namespace std;

    void display(int a, float b, char c) {
        cout << a << " " << b << " " << c << endl;
        return;
    }

    int main() {
        display(10, 20.5, 65);
        return 0;
    }
    ```

    ```cpp
    #include<iostream>

    using namespace std;

    void display(int a, int b, char c) {
        cout << a << " " << b << " " << c << endl;
        return;
    }

    int main() {
        display(10, 20.5, 65);
        return 0;
    }
    ```

- Chú ý thự tự gọi hafm vì các đối số lần lượt gán cho tham số.

    ```cpp
    #include<iostream>

    using namespace std;

    #define ll long long
    void displayNumber(int n) {
        cout << n << endl;
        return;
    }
    int main() {
        ll a = 10000000000000000;
        displayNumber(a);
        return 0;
    }
    ```

# 05: HÀM CÓ GIÁ TRỊ TRẢ VỀ.

- Ví dụ:

    ```cpp
    #include<iostream>

    using namespace std;

    #define ll long long

    int getValue() {
        cout << "Tung dep trai\n";
        return 28;
    }
    int main() {
        int n = getValue();
        cout << n << endl;
        cout << getValue() << endl;
        getValue(); 
        return 0;
    }
    ```

- Trong hàm có thể có nhiều `return` và nó gặp `return` đầu tiên được thực hiện thì nó sẽ kết thúc hàm ngay tại đó.

# 06: THAM CHIẾU, THAM TRỊ.

```CPP
// pass by value
// pass by reference
// truyen tham so
#include<iostream>

using namespace std;

#define ll long long

void thaydoi(int n) {
    n = 28;
}

int main() {
    int n = 100;
    thaydoi(n);
    cout << n << endl;
    return 0;
}
```

```CPP
// pass by value
// pass by reference
// truyen tham tri
#include<iostream>

using namespace std;

#define ll long long

void thaydoi(int &n) {
    n = 28;
}

int main() {
    int n = 100;
    thaydoi(n);
    cout << n << endl;
    return 0;
}
```

# 07: PHẠM VI CỦA BIẾN.

- Mỗi khi chúng ta mở một đóng ngoặc nhọn ra thì chúng ta sẽ có một phạm vi mới.

- Trong C++ có 3 phạm vi chính:

    1. `Global`: ở ngoài hàm `main()`, có thể truy xuất bất cứ đấu ở trong chương trình.

        ```cpp
        #include<iostream>

        using namespace std;

        #define ll long long

        int n = 1000; // global

        int main() {
            cout << n << endl;
            return 0;
        }
        ```

    2. `Local`: xuất hiện ở trong hàm `main()` hoặc trong những `hàm con`.

        ```cpp
        #include<iostream>

        using namespace std;

        #define ll long long

        int n = 1000; // global

        void solve() {
            int n = 200; // local
        }

        int main() {
            int n = 300; // local
            return 0;
        }
        ```

        Thực tế thì 3 biến trên là khác nhau mặc dù có cùng tên là `n`.

        Tuy nhiên trong cùng một scope thì không được đặt tên giống nhau, tức là ở trong hàm `main` thì không thể có 2 biến `n`, cũng tương tự với hàm con khác.

    3. `Enclosing scope`: phạm vi trong đóng mở ngoặc nhọn.

        ```cpp
        #include<iostream>

        using namespace std;

        #define ll long long

        int n = 1000; // global

        void solve() {
            int n = 200; // local
        }

        int main() {
            int n = 300; // local
            { 
                int n = 400; // enclosing scope
            }
            return 0;
        }
        ```

- Ví dụ:

    ```cpp
    #include<iostream>

    using namespace std;

    #define ll long long

    int n = 1; // global

    int main() {
        int n = 2; // local
        if (true) {
            int n = 3; // enclosing scope
            cout << n << endl;
        }
        return 0;
    }
    ```

    Ở đây nếu cout ra n thì nó sẽ chọn câu lệnh gần cout nhất, trong phạm vi gần nó nhất tức là `n = 3`.

    ```cpp
    #include<iostream>

    using namespace std;

    #define ll long long

    int n = 1; // global

    int main() {
        int n = 2; // local
        if (true) {
            cout << n << endl;
        }
        return 0;
    } 
    ```

    Nếu trong có `if` không có `int n = 3` thì lúc này trong đóng mở ngoặc nó không tìm được thằng nào vậy nên nó sẽ tìm ở bên ngoài và lúc này `n = 2`. Tương tự nếu TH nếu n không khai báo trong `main()`.

- Check kiểm tra ví dụ xem hiểu chưa, kết quả của chương trình sau:

    ```cpp
    #include<iostream>

    using namespace std;

    #define ll long long

    int n = 1; // global

    int main() {
        int n = 2; // local
        if (true) {
            int n = 100;
            n *= 2;
            cout << n << endl;
        }
        cout << n;
        return 0;
    } 
    ```

    ```cpp
    #include<iostream>

    using namespace std;

    #define ll long long

    int n = 1; // global

    int main() {
        int a = 100;
        int b = 200;
        if (true) {
            int a = 200;
            b = 100;
        }
        cout << a << " " << b << endl;
    } 
    ```

    ```cpp
    #include<iostream>

    using namespace std;

    #define ll long long

    int main() {
        int i = 1;
        for (int i = 1; i <= 5; i++) {

        }
        cout << i << endl;
    } 
    ```