// 模板类只能把定义放在头文件里面

#include <iostream>
using namespace std;
const int stackIncrement = 20;

template <typename T>
class SqStack {
public:
    SqStack();
    void Push_Sq(T x);
    bool Pop_Sq(T &x);
    bool IsFull_Sq();
    int StackLength_Sq();
    ~SqStack();
    void StackTraverse();
    T* GetBase();

private:
    T *base;
    int top;
    int Max_Size = 100;
    void overflowProcess();
};

template <typename T>
SqStack<T>::SqStack() {
    top = -1;
    base = new T[Max_Size];
    if (base==NULL){
        cout<<"内存空间分配失败！"<<endl;
        exit(1);
    }
}

template <typename T>
bool SqStack<T>::IsFull_Sq() {
    return top == Max_Size-1;
}

template <typename T>
void SqStack<T>::overflowProcess() {
    Max_Size += stackIncrement;
    T *newArray = new T[Max_Size];
    if(newArray == NULL){
        cout<<"内存空间分配失败！"<<endl;
        exit(1);
    }

    for (int i=0;i <= top;i++)
        newArray[i] = base[i];
    delete []base;
    base = newArray;
}

template <typename T>
void SqStack<T>::Push_Sq(T x) {
    if(IsFull_Sq()==true)
        overflowProcess();
    base[++top] = x;
}

template <typename T>
bool SqStack<T>::Pop_Sq(T &x) {
    if (top>-1){
        x = base[top];
        top--;
        return true;
    }
    return false;
}

template <typename T>
int SqStack<T>::StackLength_Sq() {
    return top+1;
}

template <typename T>
void SqStack<T>::StackTraverse() {
    for(int i=0;i<=top;i++)
        cout<<base[i]<<' ';
    cout<<endl;
}

template <typename T>
T *SqStack<T>::GetBase(){
    return base;
}

template <typename T>
SqStack<T>::~SqStack(){
    delete[] base;
}