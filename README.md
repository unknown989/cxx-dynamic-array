# cxx-daynamic-array
This is a Header-Only Dynamic Allocated Array Library for C++


## Including
```c++
#include <dynamicarr/dynamicarr.h>
```

## Usage
* Initialize an Array
```c++
Array<type> arr;
```
* Append to an Array
```c++
arr.append(value);
```
* Pop(Remove) an Element from an Array
```c++
arr.pop(position);
```
* Get from an Array
```c++
arr.get(position);
```
* Loop throw an Array
```c++
for(int i = 0; i <= arr.get_m_count()-1;i++){
        std::cout << arr.get(i) << " "; // Get an element from it
}
```

# Important to Read
* If you wanna use type ```std::string``` it won't work , so instead use ```char*```

# Example
 see example.cpp
