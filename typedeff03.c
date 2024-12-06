#include<stdio.h>
#include<string.h>
int main(){
 typedef struct book{
char name[50];
int noofpages;
float price;    
} book;
book a;

a.price =411.5;
strcpy(a.name,"secret seven");
a.noofpages =100;
printf("%d\n",a.noofpages);
printf("%f\n",a.price);
printf("%s\n",a.name);
return 0;   
}
// OUTPUT-
// 100
// 411.500000
// secret seven