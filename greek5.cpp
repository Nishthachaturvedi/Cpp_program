/* Q11. Palindrome Number
#include <iostream>
using namespace std;

int main() {
    int n, rev = 0, rem, temp;
    cin >> n;
    temp = n;

    while (n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    if (temp == rev)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
// Q12. Simple Calculator
#include <iostream>
using namespace std;

int main() {
    float a, b;
    char op;

    cin >> a >> b;
    cin >> op;

    switch(op) {
        case '+': cout << a + b; break;
        case '-': cout << a - b; break;
        case '*': cout << a * b; break;
        case '/': cout << a / b; break;
        default: cout << "Invalid Operator";
    }

    return 0;
}
// Q13. Reverse Sentence Using Recursion
#include <iostream>
using namespace std;

void reverse(string str, int index) {
    if(index < 0) return;
    cout << str[index];
    reverse(str, index - 1);
}

int main() {
    string str;
    getline(cin, str);

    reverse(str, str.length() - 1);

    return 0;
}

// Q14. Fibonacci Using Recursion
#include <iostream>
using namespace std;

int fib(int n) {
    if(n <= 1)
        return n;
    return fib(n-1) + fib(n-2);
}

int main() {
    int n;
    cin >> n;
    cout << fib(n);

    return 0;
}
// Q15. Swap Two Numbers Using Function
#include <iostream>
using namespace std;

void swapNum(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a, b;
    cin >> a >> b;

    swapNum(a, b);

    cout << a << " " << b;

    return 0;
}
// Q16. Check Two Arrays Equal
#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    int a[n1], b[n2];

    for(int i=0;i<n1;i++) cin >> a[i];
    for(int i=0;i<n2;i++) cin >> b[i];

    if(n1 != n2) {
        cout << "Not Equal";
        return 0;
    }

    for(int i=0;i<n1;i++) {
        if(a[i] != b[i]) {
            cout << "Not Equal";
            return 0;
        }
    }

    cout << "Equal";
}
// Q17. Average of Array Elements
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    double sum = 0;

    for(int i=0;i<n;i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << sum / n;

    return 0;
}
// Q18. Maximum and Minimum in Array
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for(int i=0;i<n;i++)
        cin >> arr[i];

    int max = arr[0];
    int min = arr[0];

    for(int i=1;i<n;i++) {
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }

    cout << "Maximum = " << max << endl;
    cout << "Minimum = " << min;

    return 0;
}
// Q19. Linear Search
#include <iostream>
using namespace std;

int main() {
    int n, key;
    cin >> n;

    int arr[n];

    for(int i=0;i<n;i++)
        cin >> arr[i];

    cin >> key;

    for(int i=0;i<n;i++) {
        if(arr[i] == key) {
            cout << "Found at Index " << i;
            return 0;
        }
    }

    cout << "Not Found";

    return 0;
}
// Q20. Right Rotate Array K Times
#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n;

    int arr[n];

    for(int i=0;i<n;i++)
        cin >> arr[i];

    cin >> k;

    k %= n;

    for(int i=n-k;i<n;i++)
        cout << arr[i] << " ";

    for(int i=0;i<n-k;i++)
        cout << arr[i] << " ";

    return 0;
}
// Q21. Sum of Matrix Diagonals
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n][n];
    int p = 0, s = 0;

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin >> a[i][j];

    for(int i=0;i<n;i++) {
        p += a[i][i];
        s += a[i][n-i-1];
    }

    cout << "Principal Diagonal = " << p << endl;
    cout << "Secondary Diagonal = " << s;

    return 0;
}
// Q22. Rotate Matrix Clockwise
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n][n];

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin >> a[i][j];

    for(int i=0;i<n;i++) {
        for(int j=n-1;j>=0;j--)
            cout << a[j][i] << " ";
        cout << endl;
    }

    return 0;
}
// Q23. Length of String
#include <iostream>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    cout << str.length();

    return 0;
}
// Q24. Compare Two Strings
#include <iostream>
using namespace std;

int main() {
    string s1, s2;

    getline(cin, s1);
    getline(cin, s2);

    if(s1 == s2)
        cout << "Equal";
    else
        cout << "Not Equal";

    return 0;
}
// Q25. String Palindrome
#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;

    string rev = "";

    for(int i=str.length()-1;i>=0;i--)
        rev += str[i];

    if(str == rev)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
// Q26. Add Two Binary Strings
#include <iostream>
#include <bitset>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    int x = stoi(a, 0, 2);
    int y = stoi(b, 0, 2);

    cout << bitset<16>(x + y);

    return 0;
}
// Q27. String to Integer
#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;

    int num = stoi(str);

    cout << num;

    return 0;
}
// Q28. Split String into Substrings
#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string str;

    getline(cin, str);

    stringstream ss(str);
    string word;

    while(ss >> word)
        cout << word << endl;

    return 0;
}
// Q29. Full Pyramid Pattern
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=1;i<=n;i++) {
        for(int j=i;j<n;j++)
            cout << " ";

        for(int k=1;k<=i;k++)
            cout << "* ";

        cout << endl;
    }

    return 0;
}
// Q30. Print Number in Large Size
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    cout << "*****" << endl;
    cout << n << endl;
    cout << "*****" << endl;

    return 0;
}*/
