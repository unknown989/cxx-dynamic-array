#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include "main.h"


int main(){
    Array<char*> arr;
    arr.append("Hello");
    arr.append("World");
    arr.append(",");
    arr.append("We're");
    arr.append("Identic");
    arr.append("Humans");

    for(int i = 0; i <= arr.get_m_count()-1;i++){
        std::cout << arr.get(i) << " ";
    }
    printf("\n");

}
