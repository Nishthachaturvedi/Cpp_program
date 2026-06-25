# C++ Pattern Programs - PEP Class

---

## Pattern 1. Square Star Pattern

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++)
            cout << "* ";
        cout << endl;
    }

    return 0;
}
```

---

## Pattern 2. Right Triangle

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=1;i<=n;i++) {
        for(int j=1;j<=i;j++)
            cout << "* ";
        cout << endl;
    }

    return 0;
}
```

---

## Pattern 3. Inverted Right Triangle

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=n;i>=1;i--) {
        for(int j=1;j<=i;j++)
            cout << "* ";
        cout << endl;
    }

    return 0;
}
```

---

## Pattern 4. Left Triangle

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n-i;j++)
            cout << "  ";

        for(int k=1;k<=i;k++)
            cout << "* ";

        cout << endl;
    }

    return 0;
}
```

---

## Pattern 5. Inverted Left Triangle

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=n;i>=1;i--) {
        for(int j=1;j<=n-i;j++)
            cout << "  ";

        for(int k=1;k<=i;k++)
            cout << "* ";

        cout << endl;
    }

    return 0;
}
```

---

## Pattern 6. Full Pyramid

```cpp
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
```

---

## Pattern 7. Inverted Pyramid

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=n;i>=1;i--) {
        for(int j=i;j<n;j++)
            cout << " ";

        for(int k=1;k<=i;k++)
            cout << "* ";

        cout << endl;
    }

    return 0;
}
```

---

## Pattern 8. Diamond Pattern

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=1;i<=n;i++) {
        for(int j=i;j<n;j++)
            cout<<" ";
        for(int k=1;k<=i;k++)
            cout<<"* ";
        cout<<endl;
    }

    for(int i=n-1;i>=1;i--) {
        for(int j=n;j>i;j--)
            cout<<" ";
        for(int k=1;k<=i;k++)
            cout<<"* ";
        cout<<endl;
    }

    return 0;
}
```

---

## Pattern 9. Hollow Square

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            if(i==1||i==n||j==1||j==n)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }

    return 0;
}
```

---

## Pattern 10. Hollow Triangle

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    for(int i=1;i<=n;i++) {
        for(int j=1;j<=i;j++) {
            if(j==1||j==i||i==n)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }

    return 0;
}
```

---

## Pattern 11. Number Triangle

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    for(int i=1;i<=n;i++) {
        for(int j=1;j<=i;j++)
            cout<<j<<" ";
        cout<<endl;
    }

    return 0;
}
```

---

## Pattern 12. Floyd's Triangle

```cpp
#include <iostream>
using namespace std;

int main() {
    int n,num=1;
    cin>>n;

    for(int i=1;i<=n;i++) {
        for(int j=1;j<=i;j++)
            cout<<num++<<" ";
        cout<<endl;
    }

    return 0;
}
```

---

## Pattern 13. 0-1 Triangle

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    for(int i=1;i<=n;i++) {
        for(int j=1;j<=i;j++) {
            if((i+j)%2==0)
                cout<<"1 ";
            else
                cout<<"0 ";
        }
        cout<<endl;
    }

    return 0;
}
```

---

## Pattern 14. Alphabet Triangle

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    for(int i=1;i<=n;i++) {
        char ch='A';
        for(int j=1;j<=i;j++)
            cout<<ch++<<" ";
        cout<<endl;
    }

    return 0;
}
```

---

## Pattern 15. Continuous Alphabet Pattern

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    char ch='A';
    cin>>n;

    for(int i=1;i<=n;i++) {
        for(int j=1;j<=i;j++)
            cout<<ch++<<" ";
        cout<<endl;
    }

    return 0;
}
```

---

## Pattern 16. Butterfly Pattern

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    for(int i=1;i<=n;i++) {
        for(int j=1;j<=i;j++) cout<<"*";
        for(int j=1;j<=2*(n-i);j++) cout<<" ";
        for(int j=1;j<=i;j++) cout<<"*";
        cout<<endl;
    }

    for(int i=n;i>=1;i--) {
        for(int j=1;j<=i;j++) cout<<"*";
        for(int j=1;j<=2*(n-i);j++) cout<<" ";
        for(int j=1;j<=i;j++) cout<<"*";
        cout<<endl;
    }

    return 0;
}
```

---

## Pattern 17. Hollow Diamond

```cpp
#include <iostream>
using namespace std;

int main() {
    cout<<"Refer to diamond logic with hollow condition.";
    return 0;
}
```

---

## Pattern 18. Pascal Triangle

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    for(int i=0;i<n;i++) {
        int num=1;
        for(int j=0;j<=i;j++) {
            cout<<num<<" ";
            num=num*(i-j)/(j+1);
        }
        cout<<endl;
    }

    return 0;
}
```

---

## Pattern 19. X Pattern

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(i==j||i+j==n-1)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}
```

---

## Pattern 20. Hollow Rectangle

```cpp
#include <iostream>
using namespace std;

int main() {
    int r,c;
    cin>>r>>c;

    for(int i=1;i<=r;i++) {
        for(int j=1;j<=c;j++) {
            if(i==1||i==r||j==1||j==c)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }

    return 0;
}
```
