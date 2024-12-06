#include<stdio.h>
#include<string.h>
int main(){
struct book{
char name[50];
int noofpages;
float price;    
}a,b,c;
a.noofpages =100;
a.price =411.5;
strcpy(a.name,"secret seven");
b.noofpages =100;
b.price =376.8;
strcpy(b.name,"Harry potter");
printf("%d\n",a.noofpages);
printf("%f\n",a.price);
printf("%s\n",a.name);
printf("%d\n",b.noofpages);
printf("%f\n",b.price);
printf("%s\n",b.name);
    
}
// OUTPUT-
// 100
// 411.500000
// secret seven
// 100
// 376.799988
// Harry potter