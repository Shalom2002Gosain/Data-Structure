# Vectors in DSA (C++) – Complete Beginner to Advanced Notes

## 1. Introduction to Vectors

A **Vector** is a dynamic array in C++ that can automatically grow or shrink in size.

Vectors are part of the **Standard Template Library (STL)** in C++.

Unlike normal arrays, vectors do not have a fixed size.

### Array vs Vector

| Array | Vector |
|---|---|
| Fixed size | Dynamic size |
| Cannot automatically grow | Can grow automatically |
| Limited built-in functions | Many built-in functions |
| No automatic size management | Automatically manages size |
| `int arr[5];` | `vector<int> v;` |

### Why use vectors?

- Dynamic memory allocation.
- Easy insertion and deletion.
- Built-in sorting and searching support.
- Easy to traverse.
- Useful in competitive programming and coding interviews.

---

## 2. Header File

To use vectors, include the following header:

```cpp
#include <iostream>
#include <vector>
using namespace std;
```

For sorting and searching, also include:

```cpp
#include <algorithm>
```

---

## 3. Declaration of Vectors

### Empty Vector

```cpp
vector<int> v;
```

### Vector with Initial Size

```cpp
vector<int> v(5);
```

Creates a vector containing 5 elements, all initialized to 0.

### Vector with Initial Size and Value

```cpp
vector<int> v(5, 10);
```

Output:

```text
10 10 10 10 10
```

### Vector with Initial Values

```cpp
vector<int> v = {10, 20, 30, 40};
```

### Different Data Types

```cpp
vector<int> nums;
vector<float> prices;
vector<double> values;
vector<char> letters;
vector<string> names;
vector<bool> flags;
```

---

## 4. Adding Elements – push_back()

The `push_back()` function inserts an element at the end of a vector.

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}
```

Output:

```text
10 20 30 40
```

---

## 5. Removing Elements – pop_back()

The `pop_back()` function removes the last element.

```cpp
vector<int> v = {10, 20, 30, 40};

v.pop_back();

for(int x : v) {
    cout << x << " ";
}
```

Output:

```text
10 20 30
```

Note: Calling `pop_back()` on an empty vector is invalid.

---

## 6. Accessing Vector Elements

There are different ways to access elements.

```cpp
vector<int> v = {10, 20, 30, 40, 50};

cout << v[0] << endl;
cout << v[1] << endl;

cout << v.front() << endl;
cout << v.back() << endl;

cout << v.at(2) << endl;
```

Output:

```text
10
20
10
50
30
```

### Important Functions

| Function | Description |
|---|---|
| `v[i]` | Access element at index i |
| `v.at(i)` | Access element with bounds checking |
| `v.front()` | First element |
| `v.back()` | Last element |

Remember: Vector indexing starts from 0.

---

## 7. Traversing a Vector

### Method 1: Normal For Loop

```cpp
vector<int> v = {10, 20, 30, 40};

for(int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
}
```

### Method 2: Range-Based For Loop

```cpp
for(int x : v) {
    cout << x << " ";
}
```

### Method 3: Using Iterators

```cpp
for(auto it = v.begin(); it != v.end(); it++) {
    cout << *it << " ";
}
```

### Method 4: Reverse Traversal

```cpp
for(int i = v.size() - 1; i >= 0; i--) {
    cout << v[i] << " ";
}
```

For an empty vector, this last loop needs an empty check. A safer alternative is:

```cpp
for(auto it = v.rbegin(); it != v.rend(); it++) {
    cout << *it << " ";
}
```

---

## 8. Important Vector Functions

| Function | Description |
|---|---|
| `push_back(x)` | Adds element at the end |
| `pop_back()` | Removes last element |
| `size()` | Returns number of elements |
| `capacity()` | Returns allocated storage capacity |
| `empty()` | Checks if vector is empty |
| `clear()` | Removes all elements |
| `front()` | Returns first element |
| `back()` | Returns last element |
| `at(i)` | Accesses element with bounds checking |
| `begin()` | Iterator to first element |
| `end()` | Iterator past last element |
| `rbegin()` | Reverse iterator to last element |
| `rend()` | Reverse iterator before first element |
| `insert()` | Inserts an element |
| `erase()` | Removes an element or range |
| `resize()` | Changes the number of elements |
| `reserve()` | Requests capacity allocation |
| `shrink_to_fit()` | Requests reduced capacity |
| `assign()` | Replaces vector contents |
| `swap()` | Exchanges contents of two vectors |
| `emplace_back()` | Constructs an element at the end |

---

## 9. Size vs Capacity

This is one of the most important concepts in vectors.

### Size

The number of elements currently present in the vector.

### Capacity

The number of elements that can fit in the currently allocated storage without reallocation.

Example:

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;

    return 0;
}
```

The exact capacity depends on the compiler and standard library implementation.

### reserve()

Reserves capacity without changing the vector's size.

```cpp
vector<int> v;

v.reserve(100);

cout << v.size() << endl;      // 0
cout << v.capacity() << endl; // At least 100
```

### resize()

Changes the number of elements.

```cpp
vector<int> v = {10, 20, 30};

v.resize(5);
```

Result:

```text
10 20 30 0 0
```

You can also specify the new value:

```cpp
v.resize(6, 100);
```

---

## 10. Insert Elements – insert()

The `insert()` function inserts elements at a specific position.

### Insert One Element

```cpp
vector<int> v = {10, 20, 40};

v.insert(v.begin() + 2, 30);
```

Result:

```text
10 20 30 40
```

### Insert at Beginning

```cpp
v.insert(v.begin(), 5);
```

### Insert Multiple Elements

```cpp
vector<int> v = {10, 20};

v.insert(v.begin() + 1, 3, 100);
```

Result:

```text
10 100 100 100 20
```

### Insert Another Vector

```cpp
vector<int> v1 = {10, 20};
vector<int> v2 = {30, 40};

v1.insert(v1.end(), v2.begin(), v2.end());
```

Result:

```text
10 20 30 40
```

---

## 11. Delete Elements – erase()

### Remove Element at Specific Position

```cpp
vector<int> v = {10, 20, 30, 40};

v.erase(v.begin() + 1);
```

Result:

```text
10 30 40
```

### Remove a Range

```cpp
vector<int> v = {10, 20, 30, 40, 50};

v.erase(v.begin() + 1, v.begin() + 4);
```

Result:

```text
10 50
```

Remember: The second iterator is excluded from the range.

### Remove All Elements

```cpp
v.clear();
```

---

## 12. Sorting a Vector

Include the algorithm header.

### Ascending Order

```cpp
#include <algorithm>

vector<int> v = {5, 2, 8, 1, 3};

sort(v.begin(), v.end());
```

Result:

```text
1 2 3 5 8
```

### Descending Order

```cpp
sort(v.begin(), v.end(), greater<int>());
```

### Sorting Using a Custom Comparator

```cpp
sort(v.begin(), v.end(), [](int a, int b) {
    return a > b;
});
```

This sorts in descending order.

---

## 13. Searching in a Vector

### Using find()

```cpp
#include <algorithm>

vector<int> v = {10, 20, 30, 40, 50};

auto it = find(v.begin(), v.end(), 30);

if(it != v.end()) {
    cout << "Found at index: " << it - v.begin();
}
else {
    cout << "Not Found";
}
```

Output:

```text
Found at index: 2
```

Time Complexity: O(n).

### Using binary_search()

Binary search requires a sorted vector.

```cpp
vector<int> v = {10, 20, 30, 40, 50};

bool found = binary_search(v.begin(), v.end(), 30);

cout << found;
```

Output:

```text
1
```

Time Complexity: O(log n).

### lower_bound()

Returns an iterator to the first element that is greater than or equal to the target.

```cpp
vector<int> v = {10, 20, 20, 30, 40};

auto it = lower_bound(v.begin(), v.end(), 20);

cout << it - v.begin();
```

Output:

```text
1
```

### upper_bound()

Returns an iterator to the first element strictly greater than the target.

```cpp
auto it = upper_bound(v.begin(), v.end(), 20);

cout << it - v.begin();
```

Output:

```text
3
```

### count()

Counts how many times an element appears.

```cpp
vector<int> v = {10, 20, 20, 30, 20};

cout << count(v.begin(), v.end(), 20);
```

Output:

```text
3
```

---

## 14. Finding Minimum and Maximum

Include `<algorithm>`.

### Maximum Element

```cpp
vector<int> v = {10, 50, 20, 80, 30};

int maximum = *max_element(v.begin(), v.end());

cout << maximum;
```

Output:

```text
80
```

### Minimum Element

```cpp
int minimum = *min_element(v.begin(), v.end());

cout << minimum;
```

Output:

```text
10
```

Note: Check that the vector is not empty before using `max_element()` or `min_element()` and dereferencing the result.

---

## 15. Reversing a Vector

### Using reverse()

```cpp
#include <algorithm>

vector<int> v = {10, 20, 30, 40};

reverse(v.begin(), v.end());
```

Result:

```text
40 30 20 10
```

### Manual Reversal

```cpp
vector<int> v = {10, 20, 30, 40};

int start = 0;
int end = v.size() - 1;

while(start < end) {

    swap(v[start], v[end]);

    start++;
    end--;
}
```

---

## 16. Removing Duplicate Elements

### Method 1: Sorted Vector + unique()

```cpp
#include <algorithm>

vector<int> v = {10, 20, 20, 30, 30, 40};

sort(v.begin(), v.end());

v.erase(unique(v.begin(), v.end()), v.end());
```

Result:

```text
10 20 30 40
```

Note: `unique()` moves consecutive duplicate values to the end and returns a new logical end. `erase()` removes the remaining elements.

### Method 2: Using set

```cpp
#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {

    vector<int> v = {10, 20, 20, 30, 10};

    set<int> s(v.begin(), v.end());

    for(int x : s) {
        cout << x << " ";
    }

    return 0;
}
```

Result:

```text
10 20 30
```

Note: A set stores unique elements in sorted order.

---

## 17. 2D Vectors

A 2D vector is a vector of vectors. It can represent a matrix.

### Declaration

```cpp
vector<vector<int>> matrix;
```

### Initialization

```cpp
vector<vector<int>> matrix = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};
```

### Traversing a 2D Vector

```cpp
for(int i = 0; i < matrix.size(); i++) {

    for(int j = 0; j < matrix[i].size(); j++) {

        cout << matrix[i][j] << " ";
    }

    cout << endl;
}
```

Output:

```text
1 2 3
4 5 6
7 8 9
```

### Creating a 2D Vector with Fixed Rows and Columns

```cpp
int rows = 3;
int cols = 4;

vector<vector<int>> matrix(rows, vector<int>(cols, 0));
```

This creates a matrix with 3 rows and 4 columns, initialized to 0.

### Accessing Elements

```cpp
cout << matrix[0][0];
cout << matrix[1][2];
```

---

## 18. Vector of Pairs

A pair stores two values together.

```cpp
vector<pair<int, int>> v;

v.push_back({10, 20});
v.push_back({30, 40});
v.push_back({50, 60});
```

### Accessing Pair Values

```cpp
for(auto p : v) {

    cout << p.first << " ";
    cout << p.second << endl;
}
```

Output:

```text
10 20
30 40
50 60
```

### Sorting Vector of Pairs

```cpp
vector<pair<int, int>> v = {
    {3, 30},
    {1, 10},
    {2, 20}
};

sort(v.begin(), v.end());
```

By default, pairs are sorted first by their first element, then by their second element if the first elements are equal.

---

## 19. Passing Vector to Functions

### Pass by Value

Creates a copy of the vector.

```cpp
void printVector(vector<int> v) {

    for(int x : v) {
        cout << x << " ";
    }
}
```

### Pass by Reference

Avoids copying and allows modification.

```cpp
void modifyVector(vector<int>& v) {

    v.push_back(100);
}
```

### Pass by Constant Reference

Avoids copying and prevents modification.

```cpp
void printVector(const vector<int>& v) {

    for(int x : v) {
        cout << x << " ";
    }
}
```

For read-only functions, prefer `const vector<int>&`.

---

## 20. Iterators in Vectors

An iterator behaves like a pointer that allows you to access vector elements.

### begin()

Points to the first element.

### end()

Points one position after the last element.

```cpp
vector<int> v = {10, 20, 30, 40};

auto it = v.begin();

cout << *it;
```

Output:

```text
10
```

### Iterator Arithmetic

```cpp
cout << *(v.begin() + 2);
```

Output:

```text
30
```

### Reverse Iterators

```cpp
for(auto it = v.rbegin(); it != v.rend(); it++) {
    cout << *it << " ";
}
```

Output:

```text
40 30 20 10
```

Important: Inserting or deleting elements can invalidate some iterators. Reallocation can invalidate all iterators, pointers and references to elements.

---

## 21. emplace_back() vs push_back()

Both add an element at the end of a vector.

### push_back()

```cpp
vector<pair<int, int>> v;

v.push_back({10, 20});
```

### emplace_back()

```cpp
vector<pair<int, int>> v;

v.emplace_back(10, 20);
```

`emplace_back()` constructs the object directly at the end of the vector.

It can avoid creating a separate temporary object in some situations.

---

## 22. Swapping Two Vectors

```cpp
vector<int> v1 = {10, 20, 30};
vector<int> v2 = {40, 50, 60};

v1.swap(v2);
```

After swapping:

```text
v1: 40 50 60
v2: 10 20 30
```

---

## 23. Assigning Values

### assign()

```cpp
vector<int> v;

v.assign(5, 100);
```

Result:

```text
100 100 100 100 100
```

### Assign from Another Vector

```cpp
vector<int> v1 = {10, 20, 30};
vector<int> v2;

v2 = v1;
```

---

## 24. Important STL Algorithms with Vectors

Include:

```cpp
#include <algorithm>
#include <numeric>
```

| Algorithm | Purpose |
|---|---|
| `sort()` | Sort elements |
| `reverse()` | Reverse elements |
| `find()` | Search for an element |
| `count()` | Count occurrences |
| `max_element()` | Find maximum |
| `min_element()` | Find minimum |
| `binary_search()` | Search in sorted data |
| `lower_bound()` | First element >= target |
| `upper_bound()` | First element > target |
| `unique()` | Move consecutive duplicates |
| `accumulate()` | Calculate sum |
| `next_permutation()` | Generate next permutation |
| `rotate()` | Rotate elements |
| `is_sorted()` | Check whether sorted |
| `swap()` | Swap values |

### Sum of Vector Elements

```cpp
#include <numeric>

vector<int> v = {10, 20, 30, 40};

int sum = accumulate(v.begin(), v.end(), 0);

cout << sum;
```

Output:

```text
100
```

For a potentially large sum, use:

```cpp
long long sum = accumulate(v.begin(), v.end(), 0LL);
```

### Next Permutation

```cpp
vector<int> v = {1, 2, 3};

next_permutation(v.begin(), v.end());
```

Result:

```text
1 3 2
```

### Rotate Vector

```cpp
vector<int> v = {1, 2, 3, 4, 5};

rotate(v.begin(), v.begin() + 2, v.end());
```

Result:

```text
3 4 5 1 2
```

---

## 25. Time Complexity of Vector Operations

| Operation | Time Complexity |
|---|---|
| Access element `v[i]` | O(1) |
| `front()` | O(1) |
| `back()` | O(1) |
| `size()` | O(1) |
| `empty()` | O(1) |
| `push_back()` | O(1) amortized |
| `pop_back()` | O(1) |
| `insert()` at end | O(1) amortized |
| `insert()` at beginning | O(n) |
| `insert()` in middle | O(n) |
| `erase()` at end | O(1) |
| `erase()` at beginning | O(n) |
| `erase()` in middle | O(n) |
| `find()` | O(n) |
| `sort()` | O(n log n) |
| `reverse()` | O(n) |
| `binary_search()` | O(log n) |
| `clear()` | O(n) |

---

# 26. Important DSA Problems Using Vectors

Practice these problems in order.

## Beginner Level

1. Create a vector and print all elements.
2. Find the size of a vector.
3. Insert an element at the end.
4. Delete the last element.
5. Find the largest element.
6. Find the smallest element.
7. Calculate the sum of all elements.
8. Calculate the average of vector elements.
9. Count even and odd numbers.
10. Search for an element in a vector.

## Intermediate Level

11. Reverse a vector.
12. Find the second largest element.
13. Find the second smallest element.
14. Remove duplicate elements.
15. Count the frequency of each element.
16. Move all zeros to the end.
17. Rotate a vector by K positions.
18. Merge two sorted vectors.
19. Find the missing number.
20. Find the duplicate number.

## Advanced Level

21. Two Sum Problem.
22. Best Time to Buy and Sell Stock.
23. Maximum Subarray Sum (Kadane's Algorithm).
24. Majority Element.
25. Sort an Array of 0s, 1s and 2s.
26. Container With Most Water.
27. 3Sum Problem.
28. Product of Array Except Self.
29. Longest Consecutive Sequence.
30. Subarray Sum Equals K.

---

# 27. Important Vector-Based DSA Techniques

Learn these techniques after understanding basic vector operations.

### 1. Two Pointers

Uses two indexes to solve problems efficiently.

Example problems:
- Two Sum in a sorted array.
- Remove duplicates.
- Reverse an array.
- Container With Most Water.

### 2. Sliding Window

Maintains a window over elements to solve subarray and substring problems.

Example problems:
- Maximum sum subarray of size K.
- Longest subarray with a given condition.
- Minimum size subarray sum.

### 3. Prefix Sum

Stores cumulative sums to answer range-sum queries efficiently.

Example:

```cpp
vector<int> v = {1, 2, 3, 4, 5};

vector<int> prefix(v.size());

prefix[0] = v[0];

for(int i = 1; i < v.size(); i++) {
    prefix[i] = prefix[i - 1] + v[i];
}
```

Prefix vector:

```text
1 3 6 10 15
```

### 4. Binary Search

Efficiently searches sorted vectors.

Example problems:
- Search Insert Position.
- First and Last Position.
- Search in Rotated Sorted Array.

### 5. Kadane's Algorithm

Finds the maximum sum of a contiguous subarray.

```cpp
vector<int> v = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

int currentSum = 0;
int maxSum = INT_MIN;

for(int x : v) {

    currentSum += x;

    maxSum = max(maxSum, currentSum);

    if(currentSum < 0) {
        currentSum = 0;
    }
}

cout << maxSum;
```

Output:

```text
6
```

---

# 28. Common Mistakes to Avoid

1. Accessing an invalid index.
2. Calling `pop_back()` on an empty vector.
3. Using `front()` or `back()` on an empty vector.
4. Forgetting that indexing starts from 0.
5. Using `binary_search()` on an unsorted vector.
6. Confusing size with capacity.
7. Forgetting that `erase()` shifts subsequent elements.
8. Assuming `clear()` reduces capacity.
9. Using invalidated iterators after insertion or deletion.
10. Forgetting that `unique()` alone does not reduce vector size.

---

# 29. Complete Vector Example

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {

    vector<int> v = {10, 20, 30, 40, 50};

    // Print vector
    cout << "Original Vector: ";

    for(int x : v) {
        cout << x << " ";
    }

    // Add element
    v.push_back(60);

    // Remove last element
    v.pop_back();

    // Size
    cout << "\nSize: " << v.size();

    // First and last element
    cout << "\nFirst: " << v.front();
    cout << "\nLast: " << v.back();

    // Sort vector
    sort(v.begin(), v.end());

    // Reverse vector
    reverse(v.begin(), v.end());

    // Maximum
    cout << "\nMaximum: " << *max_element(v.begin(), v.end());

    // Minimum
    cout << "\nMinimum: " << *min_element(v.begin(), v.end());

    // Sum
    cout << "\nSum: " << accumulate(v.begin(), v.end(), 0);

    // Search
    auto it = find(v.begin(), v.end(), 30);

    if(it != v.end()) {
        cout << "\n30 found at index: " << it - v.begin();
    }

    return 0;
}
```

---

# 30. Recommended Learning Roadmap

Follow this sequence to master vectors in DSA.

| Step | Topic | Priority |
|---|---|---|
| 1 | Vector declaration and initialization | High |
| 2 | push_back() and pop_back() | High |
| 3 | size(), capacity(), empty() | High |
| 4 | Accessing and traversing elements | High |
| 5 | insert() and erase() | High |
| 6 | Iterators | High |
| 7 | Sorting and searching | High |
| 8 | 2D vectors | High |
| 9 | Vector of pairs | Medium |
| 10 | STL algorithms | High |
| 11 | Two Pointers | High |
| 12 | Sliding Window | High |
| 13 | Prefix Sum | High |
| 14 | Binary Search | High |
| 15 | Advanced vector problems | High |

## Final Advice

Do not just memorize vector functions. Write code and understand how each operation works internally.

Focus on:
- Understanding time complexity.
- Practicing loops and indexing.
- Learning STL functions.
- Solving problems independently.
- Understanding Two Pointers, Sliding Window and Prefix Sum.

**Goal:** Become comfortable with vectors before moving to advanced DSA topics such as Stack, Queue, Linked List, Trees and Graphs.