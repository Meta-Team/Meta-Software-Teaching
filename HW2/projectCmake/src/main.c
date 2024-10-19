#include "util.h"
#include "bar.h"

int main(){
    for(int i = 0; i < 10; i++){
        foo();
    }
    for(int i = 0; i < 10; i++){
        bar();
    }
    return 0;
}