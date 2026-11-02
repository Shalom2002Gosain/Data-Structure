# Array Introduction

An **array** is a collection of items of the same data type stored at contiguous memory locations. It is one of the most popular and simple data structures used in programming.

Arrays allow us to store multiple values using a single variable name and access them using indexes.

## Basic Terminologies of an Array

### 1. Array Element

Elements are the individual items stored in an array.

Example:

```cpp
int arr[5] = {10, 20, 30, 40, 50};
```

Here, `10`, `20`, `30`, `40`, and `50` are array elements.

### 2. Array Index

Elements are accessed using their indexes. In C++, array indexing starts from `0`.

Example:

```cpp
cout << arr[0]; // 10
cout << arr[2]; // 30
```

### 3. Array Size

The size of an array is the total number of elements it can store.

Example:

```cpp
int arr[5] = {10, 20, 30, 40, 50};

int size = sizeof(arr) / sizeof(arr[0]);

cout << "Array Size: " << size;
```

Output:

```text
Array Size: 5
```

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

Output:

```text
Index 0 : 10
Index 1 : 20
Index 2 : 30
Index 3 : 40
Index 4 : 50
```

### 5. Array Visualization

| Index | Element |
|---:|---:|
| 0 | 10 |
| 1 | 20 |
| 2 | 30 |
| 3 | 40 |
| 4 | 50 |

---

## Array Operations

### 6. Traversing an Array

Traversing means visiting each element of an array one by one.

**Example:**

```cpp
#include <iostream>
using namespace std;

int main() {

    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;

    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
```

Output:

```text
10 20 30 40 50
```

**Time Complexity:** O(n)

### 7. Finding the Largest Element

We can find the largest element by comparing every element with the current largest value.

```cpp
#include <iostream>
#include <climits>
using namespace std;

int main() {

    int arr[] = {5, 7, 34, -19, 86, 72};
    int size = 6;

    int largest = INT_MIN;

    for(int i = 0; i < size; i++) {

        if(arr[i] > largest) {
            largest = arr[i];
        }
    }

    cout << "Largest: " << largest;

    return 0;
}
```

Output:

```text
Largest: 86
```

**Time Complexity:** O(n)

### 8. Finding the Smallest Element

```cpp
#include <iostream>
#include <climits>
using namespace std;

int main() {

    int arr[] = {5, 7, 34, -19, 86, 72};
    int size = 6;

    int smallest = INT_MAX;

    for(int i = 0; i < size; i++) {

        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    cout << "Smallest: " << smallest;

    return 0;
}
```

Output:

```text
Smallest: -19
```

**Time Complexity:** O(n)

### 9. Linear Search in an Array

Linear search is used to find a particular element by checking each array element one by one.

```cpp
#include <iostream>
using namespace std;

int main() {

    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;

    int target = 30;
    int index = -1;

    for(int i = 0; i < size; i++) {

        if(arr[i] == target) {
            index = i;
            break;
        }
    }

    if(index != -1) {
        cout << "Element found at index: " << index;
    }
    else {
        cout << "Element not found";
    }

    return 0;
}
```

Output:

```text
Element found at index: 2
```

**Time Complexity:** O(n)

---

## Passing Arrays to Functions

### 10. Pass by Value

In pass by value, a function receives a copy of the data. Changes to that copy do not affect the original variable.

For a built-in array, passing it directly to a function is different: the array parameter is adjusted to a pointer, so the function accesses the original array.

To demonstrate actual pass by value with array contents, use `std::array` or `std::vector`.

**Example using std::array:**

```cpp
#include <iostream>
#include <array>
using namespace std;

void modifyArray(array<int, 5> arr) {

    arr[0] = 100;
}

int main() {

    array<int, 5> arr = {10, 20, 30, 40, 50};

    modifyArray(arr);

    cout << arr[0];

    return 0;
}
```

Output:

```text
10
```

The original array remains unchanged because a copy was modified.

### 11. Pass by Reference

In pass by reference, a function receives a reference to the original data. Changes made inside the function affect the original array.

For a built-in array, we can pass it by reference using a reference parameter.

**Example:**

```cpp
#include <iostream>
using namespace std;

void modifyArray(int (&arr)[5]) {

    arr[0] = 100;
}

int main() {

    int arr[5] = {10, 20, 30, 40, 50};

    modifyArray(arr);

    cout << arr[0];

    return 0;
}
```

Output:

```text
100
```

The original array is modified because we passed it by reference.

### 12. Passing a Built-in Array Using a Pointer

A common way to pass a built-in array to a function is through a pointer.

```cpp
#include <iostream>
using namespace std;

void printArray(int arr[], int size) {

    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {

    int arr[] = {10, 20, 30, 40, 50};

    int size = 5;

    printArray(arr, size);

    return 0;
}
```

Output:

```text
10 20 30 40 50
```

**Important:** `int arr[]` in a function parameter is adjusted to `int* arr`. The function does not receive a complete copy of the array.

### Difference Between Pass by Value and Pass by Reference

| Pass by Value | Pass by Reference |
|---|---|
| Creates a copy of the object | Refers to the original object |
| Changes do not affect original data | Changes affect original data |
| Uses separate storage for the copy | Does not require a separate object copy |
| Useful when a copy is needed | Useful for modifying or efficiently accessing data |

---

## Reversing an Array

### 13. Reverse an Array Using Two Pointers

Reversing an array means changing the order of its elements so that the last element becomes the first and the first becomes the last.

**Example:**

Original Array:

```text
10 20 30 40 50
```

Reversed Array:

```text
50 40 30 20 10
```

**Code:**

```cpp
#include <iostream>
using namespace std;

int main() {

    int arr[] = {10, 20, 30, 40, 50};

    int size = 5;

    int start = 0;
    int end = size - 1;

    while(start < end) {

        swap(arr[start], arr[end]);

        start++;
        end--;
    }

    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
```

Output:

```text
50 40 30 20 10
```

**Explanation:**

1. Initialize `start` at index 0.
2. Initialize `end` at the last index.
3. Swap the elements at both indexes.
4. Increase `start` and decrease `end`.
5. Continue until `start` is no longer less than `end`.

**Time Complexity:** O(n)

**Space Complexity:** O(1)

### 14. Reverse an Array Using a Function

```cpp
#include <iostream>
using namespace std;

void reverseArray(int arr[], int size) {

    int start = 0;
    int end = size - 1;

    while(start < end) {

        swap(arr[start], arr[end]);

        start++;
        end--;
    }
}

int main() {

    int arr[] = {10, 20, 30, 40, 50};

    int size = 5;

    reverseArray(arr, size);

    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
```

Output:

```text
50 40 30 20 10
```

### 15. Reverse an Array Using STL

C++ provides a built-in `reverse()` function in the `<algorithm>` header.

```cpp
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int arr[] = {10, 20, 30, 40, 50};

    int size = 5;

    reverse(arr, arr + size);

    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
```

Output:

```text
50 40 30 20 10
```

**Time Complexity:** O(n)

**Space Complexity:** O(1)

---

## Additional Important Array Concepts

### 16. Sum of Array Elements

```cpp
#include <iostream>
using namespace std;

int main() {

    int arr[] = {10, 20, 30, 40, 50};

    int size = 5;
    int sum = 0;

    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }

    cout << "Sum: " << sum;

    return 0;
}
```

Output:

```text
Sum: 150
```

**Time Complexity:** O(n)

### 17. Count Even and Odd Numbers

```cpp
#include <iostream>
using namespace std;

int main() {

    int arr[] = {10, 15, 20, 25, 30, 35};

    int size = 6;

    int even = 0;
    int odd = 0;

    for(int i = 0; i < size; i++) {

        if(arr[i] % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }
    }

    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;

    return 0;
}
```

Output:

```text
Even: 3
Odd: 3
```

**Time Complexity:** O(n)

### 18. Second Largest Element

Find the second largest distinct element in an array.

```cpp
#include <iostream>
#include <climits>
using namespace std;

int main() {

    int arr[] = {10, 50, 20, 80, 30};

    int size = 5;

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for(int i = 0; i < size; i++) {

        if(arr[i] > largest) {

            secondLargest = largest;
            largest = arr[i];

        }
        else if(arr[i] > secondLargest && arr[i] != largest) {

            secondLargest = arr[i];
        }
    }

    if(secondLargest == INT_MIN) {
        cout << "Second largest distinct element does not exist";
    }
    else {
        cout << "Second Largest: " << secondLargest;
    }

    return 0;
}
```

Output:

```text
Second Largest: 50
```

**Time Complexity:** O(n)

### 19. Copy One Array into Another

```cpp
#include <iostream>
using namespace std;

int main() {

    int arr1[] = {10, 20, 30, 40, 50};

    int arr2[5];

    int size = 5;

    for(int i = 0; i < size; i++) {
        arr2[i] = arr1[i];
    }

    for(int i = 0; i < size; i++) {
        cout << arr2[i] << " ";
    }

    return 0;
}
```

Output:

```text
10 20 30 40 50
```

**Time Complexity:** O(n)

### 20. Left Rotate an Array by One Position

Example:

Original:

```text
10 20 30 40 50
```

After left rotation:

```text
20 30 40 50 10
```

**Code:**

```cpp
#include <iostream>
using namespace std;

int main() {

    int arr[] = {10, 20, 30, 40, 50};

    int size = 5;

    int first = arr[0];

    for(int i = 0; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    arr[size - 1] = first;

    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
```

Output:

```text
20 30 40 50 10
```

**Time Complexity:** O(n)

---

## Array Time Complexity

| Operation | Time Complexity |
|---|---|
| Access element | O(1) |
| Update element | O(1) |
| Traversal | O(n) |
| Linear Search | O(n) |
| Find Minimum | O(n) |
| Find Maximum | O(n) |
| Reverse Array | O(n) |
| Copy Array | O(n) |
| Calculate Sum | O(n) |
| Binary Search (sorted array) | O(log n) |
| Left Rotate by One | O(n) |

---

## Important Array DSA Techniques

After learning basic array operations, focus on these techniques:

1. **Two Pointers:** Uses two indexes to solve problems efficiently.
2. **Sliding Window:** Used for subarray and substring problems.
3. **Prefix Sum:** Helps calculate range sums efficiently.
4. **Binary Search:** Searches efficiently in sorted arrays.
5. **Kadane's Algorithm:** Finds the maximum sum of a contiguous subarray.
6. **Sorting:** Arranges elements in ascending or descending order.
7. **Frequency Counting:** Counts occurrences of elements.

---

## Array Practice Questions

### Beginner Level

- [ ] Print all array elements.
- [ ] Find the size of an array.
- [ ] Find the largest element.
- [ ] Find the smallest element.
- [ ] Calculate the sum of array elements.
- [ ] Calculate the average of array elements.
- [ ] Count even and odd numbers.
- [ ] Search for an element.
- [ ] Reverse an array.
- [ ] Copy one array into another.

### Intermediate Level

- [ ] Find the second largest element.
- [ ] Find the second smallest element.
- [ ] Check whether an array is sorted.
- [ ] Left rotate an array by one position.
- [ ] Rotate an array by K positions.
- [ ] Move all zeros to the end.
- [ ] Remove duplicates from a sorted array.
- [ ] Find the missing number.
- [ ] Find duplicate elements.
- [ ] Merge two sorted arrays.

### Advanced Level

- [ ] Two Sum Problem.
- [ ] Best Time to Buy and Sell Stock.
- [ ] Maximum Subarray Sum (Kadane's Algorithm).
- [ ] Majority Element.
- [ ] Sort an Array of 0s, 1s and 2s.
- [ ] Container With Most Water.
- [ ] 3Sum Problem.
- [ ] Product of Array Except Self.
- [ ] Longest Consecutive Sequence.
- [ ] Subarray Sum Equals K.

---

## Remember

- Array indexes start from `0` in C++.
- Built-in arrays have a fixed size.
- Array elements are stored in contiguous memory locations.
- Accessing an element using its index takes O(1) time.
- Traversing an array takes O(n) time.
- Passing a built-in array to a function normally passes a pointer to its first element.
- Pass by reference can be used to modify the original array.
- Two Pointers is an important technique for reversing arrays.
- Always pass the array size separately when using pointer-style array parameters.