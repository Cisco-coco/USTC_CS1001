#define CHOICE

int main(){
    int a;
    #ifdef CHOICE
        a = 10;
    #else
        a = 20;
    #endif
}