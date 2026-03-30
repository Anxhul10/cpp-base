# include <stdlib.h>
# include <stdio.h>

struct MyStruct {
    int temp;
};

void myFunction(MyStruct *this_p) {
    this_p->temp = -1;
}
int main() {
    struct MyStruct obj;
    struct MyStruct *ptr;
    ptr = &obj;
    
    obj.temp = 10;
    ptr->temp = 100;
    printf("Object.temp: %d \n", obj.temp);
    myFunction(ptr);
    printf("ptr->temp:%d \n", ptr->temp);
    return 0;
}