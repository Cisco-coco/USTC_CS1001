#include <iostream>
#include "stack.h"

using namespace std;

int main()
{
    int element;
    SqStack<int> mystack;
    mystack.Push_Sq(1);
    mystack.Push_Sq(2);
    mystack.Pop_Sq(element);
    cout << element << endl;
    return 0;
}