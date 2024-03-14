#include "hello.h"
#include "sum.h"


int main (void){
    int a = 1;
    int b = 2;

    printHello();

    printf("Tong %d + %d = %d\n", a, b, sum(a, b));

    return 0;
}
