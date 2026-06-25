# C++ Loop Programs - PEP Class

---

## Q1. Print Hello World N Times

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
        cout << "Hello World" << endl;

    return 0;
}
```

---

## Q2. Print Numbers from 1 to N

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
        cout << i << " ";

    return 0;
}
```

---

## Q3. Print Numbers from N to 1

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = n; i >= 1; i--)
        cout << i << " ";

    return 0;
}
```

---

## Q4. Print Even Numbers from 1 to N

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 2; i <= n; i += 2)
        cout << i << " ";

    return 0;
}
```

---

## Q5. Print Odd Numbers from 1 to N

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i += 2)
        cout << i << " ";

    return 0;
}
```

---

## Q6. Print Multiplication Table

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

## Q7. Sum of First N Natural Numbers

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

## Q8. Product of First N Natural Numbers

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    long long product = 1;

    cin >> n;

    for(int i = 1; i <= n; i++)
        product *= i;

    cout << product;

    return 0;
}
```

---

## Q9. Count Digits in a Number

```cpp
#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;

    while(n > 0) {
        count++;
        n /= 10;
    }

    cout << count;

    return 0;
}
```

---

## Q10. Reverse a Number

```cpp
#include <iostream>
using namespace std;

int main() {
    int n, rev = 0, rem;
    cin >> n;

    while(n > 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    cout << rev;

    return 0;
}
```

---

## Q11. Sum of Digits of a Number

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

## Q12. Product of Digits of a Number

```cpp
#include <iostream>
using namespace std;

int main() {
    int n, product = 1, rem;
    cin >> n;

    while(n > 0) {
        rem = n % 10;
        product *= rem;
        n /= 10;
    }

    cout << product;

    return 0;
}
```

---

## Q13. Largest Digit in a Number

```cpp
#include <iostream>
using namespace std;

int main() {
    int n, rem, largest = 0;
    cin >> n;

    while(n > 0) {
        rem = n % 10;

        if(rem > largest)
            largest = rem;

        n /= 10;
    }

    cout << largest;

    return 0;
}
```

---

## Q14. Smallest Digit in a Number

```cpp
#include <iostream>
using namespace std;

int main() {
    int n, rem, smallest = 9;
    cin >> n;

    while(n > 0) {
        rem = n % 10;

        if(rem < smallest)
            smallest = rem;

        n /= 10;
    }

    cout << smallest;

    return 0;
}
```

---

## Q15. Check Palindrome Number

```cpp
#include <iostream>
using namespace std;

int main() {
    int n, temp, rev = 0, rem;

    cin >> n;
    temp = n;

    while(n > 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    if(temp == rev)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
```

---

## Q16. Check Armstrong Number

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

## Q17. Check Prime Number

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

## Q18. Print Prime Numbers from 1 to N

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 2; i <= n; i++) {
        bool prime = true;

        for(int j = 2; j * j <= i; j++) {
            if(i % j == 0) {
                prime = false;
                break;
            }
        }

        if(prime)
            cout << i << " ";
    }

    return 0;
}
```

---

## Q19. Fibonacci Series

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

## Q20. Find All Divisors of a Number

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        if(n % i == 0)
            cout << i << " ";
    }

    return 0;
}
```
