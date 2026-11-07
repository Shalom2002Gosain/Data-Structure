# C++ Pointers — Complete Notes

## 1. What is a Pointer?

A **pointer** is a variable that stores the memory address of another variable.

```cpp
int number = 10;
int* ptr = &number;
```

- `number` stores the value 10.
- `&number` returns the memory address of number.
- `ptr` stores that memory address.
- `*ptr` accesses the value stored at that address.

**Important:** A pointer stores an address, not the actual value.

## 2. Understanding Memory Addresses

Every variable is stored at a particular memory location. Each location has an address.

Example:

```cpp
#include <iostream>
using namespace std;

int main() {
    int number = 25;
    int* ptr = &number;

    cout << "Value: " << number << endl;
    cout << "Address: " << &number << endl;
    cout << "Pointer stores: " << ptr << endl;
    cout << "Value through pointer: " << *ptr << endl;

    return 0;
}
```

Conceptual memory representation:

```text
Variable       Address       Value
----------------------------------
number         0x100         25
ptr            0x200         0x100
                               |
                               |
                               v
                         number (25)
```

Here:
- number is stored at address 0x100.
- ptr is stored at address 0x200.
- ptr contains the address 0x100.

Actual memory addresses are assigned at runtime and will differ.

## 3. Address-of Operator (&)

The address-of operator returns the memory address of a variable.

```cpp
int x = 50;
cout << &x;
```

## 4. Dereference Operator (*)

The dereference operator accesses the value stored at the address held by a pointer.

```cpp
int x = 50;
int* ptr = &x;

cout << *ptr; // 50
```

Remember:
- `&x` = address of x.
- `ptr` = address stored inside pointer.
- `*ptr` = value at that address.

## 5. Modifying Values Using Pointers

You can modify the original variable through its pointer.

```cpp
int number = 10;
int* ptr = &number;

*ptr = 100;

cout << number; // 100
```

Changing `*ptr` changes the original variable.

## 6. Pointer Declaration and Initialization

Syntax:

```cpp
data_type* pointer_name;
```

Examples:

```cpp
int* ptr = nullptr;
float* fptr = nullptr;
char* cptr = nullptr;
double* dptr = nullptr;
```

A pointer should be initialized before using it.

## 7. Null Pointer (nullptr)

A null pointer does not point to a valid object.

```cpp
int* ptr = nullptr;

if (ptr == nullptr) {
    cout << "Pointer is empty";
}
```

Never dereference a null pointer.

## 8. Pointer Arithmetic

Pointer arithmetic allows movement between elements in memory.

```cpp
int arr[] = {10, 20, 30, 40};
int* ptr = arr;

cout << *ptr << endl;       // 10
cout << *(ptr + 1) << endl; // 20
cout << *(ptr + 2) << endl; // 30
```

Common pointer operations:

| Operation | Meaning |
|---|---|
| ptr + 1 | Move to next element |
| ptr - 1 | Move to previous element |
| ptr++ | Increment pointer |
| ptr-- | Decrement pointer |
| ptr2 - ptr1 | Distance in elements |
| ptr[i] | Access element at index i |

Pointer arithmetic is scaled by the pointed-to type. For example, `ptr + 1` advances by one int element when ptr is an int pointer.

Pointer arithmetic is only valid within the same array, including its one-past-the-end position. Never dereference a one-past-the-end pointer.

## 9. Pointers and Arrays

An array name usually converts to a pointer to its first element.

```cpp
int arr[] = {5, 10, 15, 20};
int* ptr = arr;

cout << arr[0] << endl; // 5
cout << *ptr << endl;   // 5
cout << ptr[1] << endl; // 10
cout << *(ptr + 2);     // 15
```

Important relationship:

```cpp
arr[i] == *(arr + i)
```

An array and a pointer are related, but they are not the same thing.

## 10. Traversing an Array Using Pointers

```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;

    int* ptr = arr;

    for (int i = 0; i < size; i++) {
        cout << *(ptr + i) << " ";
    }

    return 0;
}
```

Output:

```text
10 20 30 40 50
```

## 11. Pointer to Pointer (**)

A pointer to pointer stores the address of another pointer.

```cpp
int value = 100;

int* ptr = &value;
int** pptr = &ptr;

cout << value << endl;  // 100
cout << *ptr << endl;   // 100
cout << **pptr << endl; // 100
```

Memory representation:

```text
pptr ----> ptr ----> value
           |         |
        Address     100
```

- `int* ptr` = pointer to integer.
- `int** pptr` = pointer to pointer.
- `*pptr` = ptr.
- `**pptr` = original integer value.

## 12. Pointers with Functions

Pointers can be passed to functions to modify original variables.

```cpp
#include <iostream>
using namespace std;

void updateValue(int* ptr) {
    if (ptr != nullptr) {
        *ptr = 500;
    }
}

int main() {
    int number = 100;

    updateValue(&number);

    cout << number; // 500

    return 0;
}
```

## 13. Pointer vs Reference

Both pointers and references can modify original variables.

Pointer:

```cpp
void update(int* p) {
    if (p != nullptr) {
        *p = 20;
    }
}
```

Reference:

```cpp
void update(int& value) {
    value = 30;
}
```

Differences:

| Pointer | Reference |
|---|---|
| Stores an address | Acts as an alias |
| Can be nullptr | Must refer to an object |
| Can point to another object | Cannot be reseated |
| Uses * to dereference | Used like normal variable |

## 14. Constant Pointers and Pointers to Constants

### A. Pointer to Constant

```cpp
int x = 10;
const int* ptr = &x;

// *ptr = 20; // Not allowed
x = 20;       // Allowed
ptr = nullptr; // Allowed
```

You cannot modify the value through the pointer, but you can change the pointer itself.

### B. Constant Pointer

```cpp
int x = 10;
int* const ptr = &x;

*ptr = 20; // Allowed
// ptr = nullptr; // Not allowed
```

You can modify the value, but cannot change the pointer's address.

### C. Constant Pointer to Constant

```cpp
int x = 10;
const int* const ptr = &x;

// *ptr = 20; // Not allowed
// ptr = nullptr; // Not allowed
```

Quick revision:

| Declaration | Modify value? | Change pointer? |
|---|---|---|
| int* p | Yes | Yes |
| const int* p | No | Yes |
| int* const p | Yes | No |
| const int* const p | No | No |

## 15. Void Pointers

A void pointer can store the address of different object types.

```cpp
int number = 42;
void* ptr = &number;

int* intPtr = static_cast<int*>(ptr);

cout << *intPtr; // 42
```

A void pointer cannot be directly dereferenced because it does not specify the pointed-to type.

## 16. Dynamic Memory Allocation (new and delete)

Dynamic memory is allocated while a program is running.

### Single Variable

```cpp
int* ptr = new int(100);

cout << *ptr;

delete ptr;
ptr = nullptr;
```

### Dynamic Array

```cpp
int size = 5;

int* arr = new int[size]{10, 20, 30, 40, 50};

for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
}

delete[] arr;
arr = nullptr;
```

Remember:

- new pairs with delete.
- new[] pairs with delete[].
- Release allocated memory exactly once.
- Never access memory after deleting it.

Modern C++ generally prefers std::vector and smart pointers for safer memory management.

## 17. Stack vs Heap

### Stack (Automatic Storage)

```cpp
int number = 10;
```

- Local variable.
- Lifetime is managed automatically.
- Destroyed when its scope ends.

### Dynamic Storage (Commonly Called Heap)

```cpp
int* ptr = new int(100);

delete ptr;
```

- Allocated dynamically.
- Lifetime is controlled by the program.
- Must be released or managed by an owner.

Stack and heap are common implementation terms. C++ formally specifies storage duration and object lifetime.

## 18. Dangling Pointers

A dangling pointer refers to an object whose lifetime has ended.

```cpp
int* ptr = new int(10);

delete ptr;

// ptr is now dangling.
ptr = nullptr;
```

Never dereference a dangling pointer.

Another example:

```cpp
int* wrongFunction() {
    int x = 10;
    return &x; // Wrong
}
```

The local variable x is destroyed when the function returns.

## 19. Memory Leaks

A memory leak occurs when allocated memory is no longer accessible but has not been released.

Incorrect:

```cpp
int* ptr = new int(100);

ptr = new int(200); // First allocation is lost!

delete ptr;
```

Correct:

```cpp
int* ptr = new int(100);

delete ptr;

ptr = new int(200);

delete ptr;
ptr = nullptr;
```

Prefer RAII and smart pointers to prevent manual memory-management problems.

## 20. Comparing Pointers

Pointers can be compared for equality.

```cpp
int a = 10;

int* p1 = &a;
int* p2 = &a;

if (p1 == p2) {
    cout << "Both point to the same object";
}
```

Relational comparisons are only meaningful in limited situations, such as pointers into the same array.

## 21. sizeof with Pointers

`sizeof(pointer)` returns the size of the pointer variable, not the size of the object it points to.

```cpp
int x = 10;
int* ptr = &x;

cout << sizeof(ptr);
cout << sizeof(*ptr);
```

On many 64-bit systems, an ordinary pointer occupies 8 bytes, but the actual size is platform-dependent.

## 22. Function Pointers

A function pointer stores the address of a function.

```cpp
#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int main() {
    int (*operation)(int, int) = add;

    cout << operation(5, 3);

    return 0;
}
```

Output:

```text
8
```

Function pointers are useful for callbacks and selecting functions dynamically.

## 23. Common Pointer Mistakes

| Mistake | Explanation |
|---|---|
| Dereferencing nullptr | No valid object exists there |
| Uninitialized pointer | Contains an indeterminate value |
| Out-of-bounds access | Accesses outside valid array elements |
| Dangling pointer | Refers to an object whose lifetime ended |
| Double deletion | Releases the same allocation more than once |
| Wrong delete | Using delete instead of delete[] for arrays |
| Memory leak | Allocated memory is never released |

## 24. Complete Practice Program

```cpp
#include <iostream>
using namespace std;

int main() {

    int number = 10;

    int* ptr = &number;

    cout << "Original Value: " << number << endl;
    cout << "Address: " << &number << endl;
    cout << "Pointer: " << ptr << endl;
    cout << "Dereferenced Value: " << *ptr << endl;

    *ptr = 50;

    cout << "Updated Value: " << number << endl;

    int arr[] = {1, 2, 3, 4, 5};
    int* p = arr;

    cout << "Array using pointers: ";

    for (int i = 0; i < 5; i++) {
        cout << *(p + i) << " ";
    }

    return 0;
}
```

## 25. Practice Questions

1. What is a pointer?
2. What is a memory address?
3. Difference between & and * operators?
4. What is nullptr?
5. What is pointer arithmetic?
6. Difference between pointer and array?
7. What is a pointer to pointer?
8. Difference between pointer and reference?
9. Explain const int* and int* const.
10. What is dynamic memory allocation?
11. Difference between new and delete?
12. What is a dangling pointer?
13. What is a memory leak?
14. What is a void pointer?
15. What is a function pointer?
16. Write a program to swap two numbers using pointers.
17. Write a program to traverse an array using pointers.

---

## Quick Revision

- Pointer stores a memory address.
- & returns the address of a variable.
- * accesses the value at an address.
- nullptr represents an empty pointer.
- Pointer arithmetic moves between array elements.
- arr[i] is equivalent to *(arr + i).
- int** is a pointer to a pointer.
- const int* prevents modification through the pointer.
- int* const prevents pointer reassignment.
- new pairs with delete.
- new[] pairs with delete[].
- Avoid dangling pointers and memory leaks.

**Learning Tip:** Practice printing both ptr and *ptr. This helps you understand the difference between a memory address and the value stored at that address.
