# Summary Notes of Lecture-1

## Storing Elements of Different Types

This example demonstrates how to define a structure in C++ to store multiple elements of different types and how to create an instance of this structure.

```cpp
// using instead of #include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

// Define a structure named 'node' to store different types of elements
struct node
{
    string str;  // A string to store text
    string x;    // Another string to store additional text
    int num;     // An integer to store a number
    double doub; // A double to store a floating-point number

    // Constructor to initialize the structure's members
    node(string str_, int num_, double doub_, string x_)
    {
        str = str_;
        num = num_;
        doub = doub_;
        x = x_;
    }
};

int main()
{
    // Create an instance of the 'node' structure and initialize it
    node a("hello", 1, 1.1, "");
}
```

### Explanation

1. **Include Necessary Headers**: The code includes necessary headers like `<iostream>`, `<vector>`, `<algorithm>`, and `<string>` to use standard library features.

2. **Using Namespace**: The `using namespace std;` statement allows us to use standard library names without the `std::` prefix.

3. **Structure Definition**:

   - The `struct node` is defined to hold four members: two strings (`str` and `x`), an integer (`num`), and a double (`doub`).
   - A constructor is provided to initialize these members when an instance of the structure is created.

4. **Main Function**:
   - In the `main` function, an instance of the `node` structure named `a` is created and initialized with the values `"hello"`, `1`, `1.1`, and an empty string `""`.

This example illustrates how to encapsulate multiple related data items into a single structure and initialize them using a constructor.
