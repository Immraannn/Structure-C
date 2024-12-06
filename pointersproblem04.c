#include<stdio.h>
typedef int* int_pointer;
int main(){
int x=5,y=7;
//int* a,b; implies//int* x and int y
int_pointer a=&x,b =&y;
printf("%p\n",a);
printf("%p\n",b);
return 0;
}
// OUTPUT-
// 0061FF14
// 0061FF10