# cxx-dynamic-array
This is a Header-Only Dynamic Allocated Array Library for C++


## Including
```c++
#include "dynamicarr/dynamicarr.h"
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
* Update an Element from an Array
```c++
arr.update(position,new_value);
```
* Get array size
```c++
arr.get_m_size();
```
* Get array count (Number of elements)
```c++
arr.get_m_count();
```
* Get from an Array
```c++
arr.get(position); or arr[position];
```
* Loop throw an Array
```c++
for(int i = 0; i <= arr.get_m_count()-1;i++){
        std::cout << arr[i] << " "; // Get an element from it
}
```

# Important to Read
* If you wanna use type ```std::string``` it won't work , so instead use ```char*```

# Example
```c++
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include "dynamicarr/dynamicarr.h"


int main(){
    Array<char*> arr; // Initialize an array
    arr.append("Hello"); // Append to it
    arr.append("World");
    arr.append(",");
    arr.append("We're");
    arr.append("Identic");
    arr.append("Humans");

    arr.pop(1); // Remove an element from it
    arr.update(3,"Same"); // Update 'Identic' with 'Same'

	// Loop throw it
    for(int i = 0; i <= arr.get_m_count()-1;i++){
        std::cout << arr[i] << " "; // Get an element from it
    }
    printf("\n");

}
```
# Licensing
see LICENSE
