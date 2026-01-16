## Vector, C++
Vector is like an array but unlike arrays it's size can be changed at runtime. 

### Header and namespace 
```
#include <vector>
using namsspace std;
```

### Index Access
`vec[i]` works just like an array

### Creation
`vector<int> vec(10, 0);`  creates a vector of 10 elements, all set to 0

### Contiguos memory 
Just like arrays, vectors store elements in adjacent memory locations, making them highly efficient

### Easy Copying
You can copy an entire vector to another with a simple assignment (`vec2 = vec1`), which is not possible with raw arrays

### Dynamic Sizes
Unlike arrays with fixed sizes, vectors grow automatically when you add elements using .push_back(val)

### Can query sizes
how many elements are currently in the vector (`.size()`)

### Passing to Functions
Can pass to functions
Best practise: Pass by reference (e.g., `void myFunc(vector<int>& vec))` to avoid creating an expensive copy of the entire collection.

### Use case
Use this instead of array , everywhere you can 

### Followup
- [geeksforgeeks](https://www.geeksforgeeks.org/cpp/vector-in-cpp-stl/)
- [w3schools](https://www.w3schools.com/cpp/cpp_vectors.asp)
- [cplusplus](https://cplusplus.com/reference/vector/vector/)



