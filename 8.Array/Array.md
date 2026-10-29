
# Array Introduction

An **array** is a collection of items of the same data type stored at contiguous memory locations. It is one of the most popular and simple data structures used in programming.

## Basic Terminologies of an Array

### 1. Array Element
Elements are the individual items stored in an array.

### 2. Array Index
Elements are accessed using their indexes. In most programming languages, array indexing starts from `0`.

### 3. Array Size
The size of an array is the total number of elements it can store or currently contains, depending on the language and array type.

### 4. Array Example in C++

```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++) {
        cout << "Index " << i
             << " : " << arr[i] << endl;
    }

    return 0;
}
```

### 5. Array Visualization

| Index | Element |
|---:|---:|
| 0 | 10 |
| 1 | 20 |
| 2 | 30 |
| 3 | 40 |
| 4 | 50 |

**Remember:**
- Array indexes usually start at `0` in C++.
- Array elements are accessed using their indexes, such as `arr[0]`.
- In a built-in C++ array, the declared size is fixed.
