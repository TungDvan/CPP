# Vòng lặp for

- Cú pháp:

    ```cpp
    for ([câu lệnh khởi tạo]; [điều kiện lăp]; [Câu lệnh cập nhật]){
        // code trong for
    }
    ```

    ```cpp
    #include <iostream>
    using namespace std;

    int main() {
        for (int i = 0; i < 3; i++) {
            cout << i << endl << "abc" << endl;
        }
        return 0;
    }
    ```

    ```cpp
    //vong for khong lap 1 cai gi
    #include <iostream>
    using namespace std;

    int main() {
        for (int i = 1; i < 0; i++) {
            cout << i << endl << "abc" << endl;
        }
        return 0;
    }
    ```

- Phạm vi của biến:

    ```cpp
    // loi giai
    #include <iostream>
    using namespace std;

    int main() {
        int x = 100;
        for (int i = 1; i < 15; i *= 2) {
            cout << i << endl;
            int x = 200;
            cout << x;
        }
        cout << x << endl;
        return 0;
    }
    ```

    Thằng i được khai báo trong phạm vi của vòng for nên nó sẽ không nhận diện được.

    ```cpp
    // loi giai
    #include <iostream>
    using namespace std;

    int main() {
        for (int i = 1; i <= 15; i++) {
            cout << i << " ";
            if (i % 2 == 0) i++;
            else i += 2;
        }
        return 0;
    }
    ```

# Câu lệnh break

- Cú pháp: `break` dùng để thoát khỏi vòng lặp.

- Ví dụ: số nhỏ nhất >= a chia hết cho b: Ta sẽ sinh ra một dãi [a...] đến khi nào thỏa mã chia hết cho b thì dùng.

    ```cpp
    // loi giai
    #include <iostream>
    using namespace std;

    int main() {
        // >= 23 va chia het cho 7
        for (int i = 23; ; i++) {
            if (i % 7 == 0) {
                cout << i << endl;
                break;
            }
        }
        return 0;
    }
    ```

- Nhập 1 số nguyên lớn hơn 0.

    ```cpp
    // loi giai
    #include <iostream>
    using namespace std;

    int main() {
        for (;;) {
            int n;
            cout << "Nhap n: ";
            cin >> n; 
            if (n > 0) break;
            else cout << "Nhap lai gia tri" << endl;
        }
    }
    ```

# Câu lệnh continue

- Dùng để tiếp tục vòng lặp.

    ```cpp
    // loi giai
    #include <iostream>
    using namespace std;

    int main() {
        for (int i = 0; i < 5; i++) {
            cout << i << endl;
            continue;
            cout << "abc\n";
        }
    }
    ```

# Vòng lặp while

- Chừng nào điều kiện còn thỏa mãn thì còn lặp.

- Cú pháp:

    ```cpp
    while(coindition){
        // code trong while
    }
    ```

- Các bài tập liên quan tách chữ số.

- Tính tổng của một chứ số, đếm xem có bao nhiêu chữ số.

    ```cpp
    // loi giai
    #include <iostream>
    using namespace std;

    int main() {
        int n = 546344;
        int dem = 0;
        int sum = 0;
        while (n != 0) {
            dem++;
            sum += n % 10;
            n /= 10;
        }
        cout << dem << endl << sum << endl;
        return 0;
    }
    ```

# Chữa contest cơ bản

# swith-case

- Giúp kiểm tra nhiều điều kiện khác nhau.

- Cú pháp:

    ```cpp
    switch (value){
        case 1:
            // code case 1
            break;
        case 2:
            // code case 2
            break;
        case 3:
            // code case 3
            break;
        case 4:
            // code case 4
            break;
        default:
            // code
    }
    ```

    Chú ý: val có thể là giá trị, kĩ tự, string.

    Nếu đúng ở đâu nó sẽ thực hiện ở case đó, nếu không có break thì nó sẽ thực hiện hết tất cả các case bên dưới, không cần đống ngoặc nhọn ở các case.

    ```cpp
    // loi giai
    #include <iostream>
    #include <iomanip>
    #include <math.h>
    using namespace std;

    int main() {
        int n = 1;
        switch (n) {
            case 1:
                cout << "Tung Dvan\n";
                cout << "Tung Dvan\n";
                break;
            case 2:
                cout << "Bach Hai Phuong\n";
                break;
                cout << "Bach Hai Phuong\n";
            case 3: 
                cout << "Bach Hai Loc\n";
                cout << "Bach Hai Loc\n";
                break;
            default:
                cout << "Bach Hai Anh\n";
                cout << "Bach Hai Anh\n";
                break;
        }
    }
    ```

- Gộp case:

    ```cpp
    // loi giai
    #include <iostream>
    #include <iomanip>
    #include <math.h>
    using namespace std;

    int main() {
        int n = 5;
        switch (n) {
            case 1: case 3: case 5:
                cout << "Tung Dvan\n";
                cout << "Tung Dvan\n";
                break;
            case 2: case 4: case 6:
                cout << "Bach Hai Phuong\n";
                cout << "Bach Hai Phuong\n";
                break;
            default:
                cout << "Bach Hai Anh\n";
                cout << "Bach Hai Anh\n";
                break;
        }
    }
    ```

- Case trong đoạn:

    ```cpp
    // loi giai
    #include <iostream>
    #include <iomanip>
    #include <math.h>
    using namespace std;

    int main() {
        int n = 12;
        switch (n) {
            case 1 ... 10:
                cout << "Tung Dvan\n";
                cout << "Tung Dvan\n";
                break;
            case 11 ... 100:
                cout << "Bach Hai Phuong\n";
                cout << "Bach Hai Phuong\n";
                break;
            default:
                cout << "Bach Hai Anh\n";
                cout << "Bach Hai Anh\n";
                break;
        }
    }
    ```

# Typedef

- `Typedef`: Define Definition.

    Là một từ khóa dùng để tạo một tên mới (bí danh hay alias) cho những kiểu dữ liệu của ngôn ngữ lập trình C++ như int, long long,... hoặc những kiểu dữ liệu và người dùng tự định nghĩa class hay struct.

    Giúp tăng ốc độ code bằng định nghĩa lại kiểu dữ liệu với các tên thay thế ngắn gọn hơn.

- Cú pháp:

    ```cpp
    typedef long long ll;
    ```

    lúc này thì trong chương trình ta sử dụng ll và long long như nhau.

# define

- Có 3 chức năng: 

    Định nghĩa tên mới cho kiểu dũ liệu như `typedef`.

    ```cpp
    #define ll long long
    ```

    Định nghĩa giá trị.

    ```cpp
    #define PI 3.14
    #define MAX = 1e9
    #define MIN = -1e9
    #define ny = "Bach Hai Phuong"
    ```

    Định nghĩa câu lệnh hoặc cấu trúc:

    ```cpp
    #define hell cout << "Xin chao moi nguoi\n";
    ```

    ```cpp
    // loi giai
    #include <iostream>
    using namespace std;
    #define hello cout << "Xin chao moi nguoi\n";

    int main() {
        hello;
        return 0;
    }
    ```

    ```cpp
    #define FOR(i, a, b) for(int i = a; i <= b; i++)
    ```

    ```cpp
    // loi giai
    #include <iostream>
    using namespace std;
    #define FOR(i, a, b) for(int i = a; i <= b; i++)

    int main() {
        FOR(i, 5, 10) {
            cout << i << " ";
        }
        return 0;
    }
    ```

# Thư viện `#include<bits/sdtc++>`

- Thư viện này là thư viện tổng hợp tất cả các thư viện của C++.

- Nhưng khi sử dụng thư viện này thì hết sức lưu ý nó không phải một chuẩn của C++, nghĩa là nó có nền tảng này để support còn nền tảng khác thì có thể không chấp nhận nên phải hết sức đề phòng. Đi phỏng vấn ở samsung hay những chỗ lớn thì môi trường của họ có thể không hỗ trợ thư viện này thì chúng ta cần phải include từng thư viện một.

- Thường dùng cho dân lập trình thi đấu, còn học trên trường thì không nên.

# Câu lệnh cin.tie() và cout.tie()

- Cú pháp:

    ```cpp
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ```

- 3 câu lệnh này sẽ có ý nghĩa nó đồng bộ tốc độ đọc câu lệnh của cin, cout trong ngôn ngữ C++ với câu lệnh printf, scanf ở trong ngôn ngữ C (printf, scanf nhanh hơn cin, cout). Nên nếu muốn dùng cin, cout với tốc độ ngang printf và scanf thì dùng 3 câu lệnh trên. Nào tầm hơn 1tr thì tác dụng của 2 câu lệnh trên mới đáng kể.

- `\n` nhanh hơn `endl`.

# setw và setfill

- In giá trị với độ rọng cho trước tùy thuộc căn lề (căn lề trái và căn lề phải).

    ```cpp
    // loi giai
    #include <iostream>
    #include <iomanip>
    using namespace std;
    #define FOR(i, a, b) for(int i = a; i <= b; i++)

    int main() {
        int n = 123;
        cout << left << setw(10) << setfill('@') << n << endl;	// in ra 123@@@@@@@
        cout << right << setw(10) << setfill('@') << n << endl; // in ra @@@@@@@123
    }
    ```