# C++ Loop Programs - PEP Class

---

## Q1. Sum of Digits of a Number

```cpp
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, rem;
    cin >> n;

    while(n > 0) {
        rem = n % 10;
        sum += rem;
        n /= 10;
    }

    cout << sum;

    return 0;
}
```

---

## Q2. Reverse a Number

```cpp
#include <iostream>
using namespace std;

int main() {
    int n, rev = 0, rem;
    cin >> n;

    while(n > 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    cout << rev;

    return 0;
}
```

---

## Q3. Factorial of a Number

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    long long fact = 1;

    cin >> n;

    for(int i = 1; i <= n; i++)
        fact *= i;

    cout << fact;

    return 0;
}
```

---

## Q4. Check Prime Number

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    bool prime = true;

    cin >> n;

    if(n <= 1)
        prime = false;

    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            prime = false;
            break;
        }
    }

    if(prime)
        cout << "Prime";
    else
        cout << "Not Prime";

    return 0;
}
```

---

## Q5. Check Armstrong Number

```cpp
#include <iostream>
using namespace std;

int main() {
    int n, temp, rem, sum = 0;

    cin >> n;
    temp = n;

    while(n > 0) {
        rem = n % 10;
        sum += rem * rem * rem;
        n /= 10;
    }

    if(temp == sum)
        cout << "Armstrong";
    else
        cout << "Not Armstrong";

    return 0;
}
```

---

## Q6. Display Numbers from 1 to 100

```cpp
#include <iostream>
using namespace std;

int main() {

    for(int i = 1; i <= 100; i++)
        cout << i << " ";

    return 0;
}
```

---

## Q7. Display Numbers from M to N

```cpp
#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    for(int i = m; i <= n; i++)
        cout << i << " ";

    return 0;
}
```

---

## Q8. Print Numbers in Reverse from M to N

```cpp
#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    for(int i = n; i >= m; i--)
        cout << i << " ";

    return 0;
}
```

---

## Q9. Sum of Series 1 + 2 + 3 + ... + N

```cpp
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;

    for(int i = 1; i <= n; i++)
        sum += i;

    cout << sum;

    return 0;
}
```

---

## Q10. Sum of Series 1 - 2 + 3 - 4 + ... + N

```cpp
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0)
            sum -= i;
        else
            sum += i;
    }

    cout << sum;

    return 0;
}
```

---

## Q11. Sum of Series 1 + 1/2 + 1/3 + ... + 1/N

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    float sum = 0;

    cin >> n;

    for(int i = 1; i <= n; i++)
        sum += 1.0 / i;

    cout << sum;

    return 0;
}
```

---

## Q12. Sum of Series 1/2 + 2/3 + 3/4 + ... + N/(N+1)

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    float sum = 0;

    cin >> n;

    for(int i = 1; i <= n; i++)
        sum += (float)i / (i + 1);

    cout << sum;

    return 0;
}
```

---

## Q13. Fibonacci Series upto N Terms

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a = 0, b = 1, c;

    for(int i = 1; i <= n; i++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}
```

---

## Q14. Multiplication Table of a Number

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= 10; i++)
        cout << n << " x " << i << " = " << n * i << endl;

    return 0;
}
```

---

## Q15. Sum of Digits till Single Digit

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;

    while(n >= 10) {
        int sum = 0;

        while(n > 0) {
            sum += n % 10;
            n /= 10;
        }

        n = sum;
    }

    cout << n;

    return 0;
}
```

---

## Q16. Calculate the Average of All Elements Present in an Array

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    int sum = 0;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    float average = (float)sum / n;

    cout << average;

    return 0;
}
```
