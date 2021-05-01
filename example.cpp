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

	// Loop throw it
    for(int i = 0; i <= arr.get_m_count()-1;i++){
        std::cout << arr[i] << " "; // Get an element from it
    }
    printf("\n");

}
