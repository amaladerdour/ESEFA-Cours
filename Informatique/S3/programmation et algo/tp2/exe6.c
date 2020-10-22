#include <stdio.h>

int fact(int n){
    if(n == 0)
        return 1;
    else
        if(n == 1)
            return 1;
        else
            return n*fact(n-1);// fact(n-1)+fact(n-2) est fausse
}

int main(){
    int n = 10;
    printf("%d! = %d", n, fact(n));
    return 0;
}
