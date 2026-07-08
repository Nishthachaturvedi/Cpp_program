# C++ Function Programs - PEP Class

---

## Q1. Primes in Range

```cpp
#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if(n <= 1)
        return false;

    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int start, end;
    cin >> start >> end;

    for(int i = start; i <= end; i++)
    {
        if(isPrime(i))
            cout << i << " ";
    }

    return 0;
}
```

---

## Q2. Sum of Two Primes Check

```cpp
#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if(n <= 1)
        return false;

    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int n;
    cin >> n;

    bool found = false;

    for(int i = 2; i <= n / 2; i++)
    {
        if(isPrime(i) && isPrime(n - i))
        {
            cout << i << " + " << n - i << " = " << n << endl;
            found = true;
        }
    }

    if(!found)
        cout << "No pair found";

    return 0;
}
```

---

## Q3. Recursive Sum of N

```cpp
#include <iostream>
using namespace std;

int sum(int n)
{
    if(n == 1)
        return 1;

    return n + sum(n - 1);
}

int main()
{
    int n;
    cin >> n;

    cout << sum(n);

    return 0;
}
```

---

## Q4. Factorial using Recursion

```cpp
#include <iostream>
using namespace std;

int factorial(int n)
{
    if(n == 0 || n == 1)
        return 1;

    return n * factorial(n - 1);
}

int main()
{
    int n;
    cin >> n;

    cout << factorial(n);

    return 0;
}
```

---

## Q5. Recursive Sentence Reverse

```cpp
#include <iostream>
#include <string>
using namespace std;

void reverseSentence()
{
    string str;

    getline(cin, str);

    if(str.empty())
        return;

    reverseSentence();

    cout << str << endl;
}

int main()
{
    reverseSentence();

    return 0;
}
```

---

## Q6. Power using Recursion

```cpp
#include <iostream>
using namespace std;

int power(int a, int b)
{
    if(b == 0)
        return 1;

    return a * power(a, b - 1);
}

int main()
{
    int a, b;

    cin >> a >> b;

    cout << power(a, b);

    return 0;
}
```

---

## Q7. Variadic Templates

```cpp
#include <iostream>
using namespace std;

void print()
{
    cout << endl;
}

template<typename T, typename... Args>
void print(T first, Args... args)
{
    cout << first << " ";
    print(args...);
}

int main()
{
    print(10, 20.5, "Hello", 'A');

    return 0;
}
```

---

## Q8. Array Equality Check

```cpp
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n], b[n];

    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 0; i < n; i++)
        cin >> b[i];

    bool equal = true;

    for(int i = 0; i < n; i++)
    {
        if(a[i] != b[i])
        {
            equal = false;
            break;
        }
    }

    if(equal)
        cout << "Arrays are Equal";
    else
        cout << "Arrays are Not Equal";

    return 0;
}
```

---

## Q9. Array Max & Min

```cpp
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int maximum = arr[0];
    int minimum = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > maximum)
            maximum = arr[i];

        if(arr[i] < minimum)
            minimum = arr[i];
    }

    cout << "Maximum = " << maximum << endl;
    cout << "Minimum = " << minimum;

    return 0;
}
```

---

## Q10. Array Average

```cpp
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    float average = (float)sum / n;

    cout << average;

    return 0;
}
```

---

## Q11. Merge Arrays

```cpp
#include <iostream>
using namespace std;

int main()
{
    int n1, n2;

    cin >> n1 >> n2;

    int a[n1], b[n2];

    for(int i = 0; i < n1; i++)
        cin >> a[i];

    for(int i = 0; i < n2; i++)
        cin >> b[i];

    int c[n1 + n2];

    for(int i = 0; i < n1; i++)
        c[i] = a[i];

    for(int i = 0; i < n2; i++)
        c[n1 + i] = b[i];

    for(int i = 0; i < n1 + n2; i++)
        cout << c[i] << " ";

    return 0;
}
```

---

## Q12. 2D Array Input and Output

```cpp
#include <iostream>
using namespace std;

int main()
{
    int row, col;

    cin >> row >> col;

    int arr[row][col];

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
            cin >> arr[i][j];
    }

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
            cout << arr[i][j] << " ";

        cout << endl;
    }

    return 0;
}
```

---

## Q13. Common Array Elements

```cpp
#include <iostream>
using namespace std;

int main()
{
    int n1, n2;

    cin >> n1 >> n2;

    int a[n1], b[n2];

    for(int i = 0; i < n1; i++)
        cin >> a[i];

    for(int i = 0; i < n2; i++)
        cin >> b[i];

    for(int i = 0; i < n1; i++)
    {
        for(int j = 0; j < n2; j++)
        {
            if(a[i] == b[j])
                cout << a[i] << " ";
        }
    }

    return 0;
}
```

---

## Q14. Remove Duplicates from Array

```cpp
#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    for(int i = 0; i < n; i++)
    {
        bool duplicate = false;

        for(int j = 0; j < i; j++)
        {
            if(arr[i] == arr[j])
            {
                duplicate = true;
                break;
            }
        }

        if(!duplicate)
            cout << arr[i] << " ";
    }

    return 0;
}
```
---

## Q15. Remove Element from Array

```cpp
#include <iostream>
using namespace std;

int main()
{
    int n, key;

    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> key;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] != key)
            cout << arr[i] << " ";
    }

    return 0;
}
```

---

## Q16. Prefix Sum Array

```cpp
#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int prefix[n];

    prefix[0] = arr[0];

    for(int i = 1; i < n; i++)
        prefix[i] = prefix[i - 1] + arr[i];

    for(int i = 0; i < n; i++)
        cout << prefix[i] << " ";

    return 0;
}
```

---

## Q17. Rotate Array by One Position

```cpp
#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int last = arr[n - 1];

    for(int i = n - 1; i > 0; i--)
        arr[i] = arr[i - 1];

    arr[0] = last;

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
```

---

## Q18. Reverse Copy Array

```cpp
#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int arr[n], rev[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    for(int i = 0; i < n; i++)
        rev[i] = arr[n - i - 1];

    for(int i = 0; i < n; i++)
        cout << rev[i] << " ";

    return 0;
}
```

---

## Q19. Matrix Addition

```cpp
#include <iostream>
using namespace std;

int main()
{
    int r, c;

    cin >> r >> c;

    int a[r][c], b[r][c], sum[r][c];

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            cin >> a[i][j];

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            cin >> b[i][j];

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
```

---

## Q20. Matrix Equality Check

```cpp
#include <iostream>
using namespace std;

int main()
{
    int r, c;

    cin >> r >> c;

    int a[r][c], b[r][c];

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            cin >> a[i][j];

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            cin >> b[i][j];

    bool equal = true;

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if(a[i][j] != b[i][j])
            {
                equal = false;
                break;
            }
        }
    }

    if(equal)
        cout << "Matrices are Equal";
    else
        cout << "Matrices are Not Equal";

    return 0;
}
```
