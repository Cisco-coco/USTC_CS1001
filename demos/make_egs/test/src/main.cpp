#include <iostream>
#include "../include/hello.h"

extern int arr[];

int main() {
    char str[] = "Hello World!";
    int len = sizeof(arr)/sizeof(arr[0]);
    for (int i=0; i < len; i++) {
        std::cout << arr[i] << ' ';
    }
    print(str);
    return 0;
}
