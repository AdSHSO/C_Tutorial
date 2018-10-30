#include <string.h>

void foo(char *str){

    char buffer[12];
    
    //will cause buffer overflow
    strcpy(buffer, str);
}

int main(){
    char *str = "This is way way way too long (>12)";
    foo(str);

    return 1;

}

