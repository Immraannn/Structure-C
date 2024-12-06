#include<stdio.h>
#include<string.h>
int main(){
 typedef struct cricketer{
char name[15];
int age;
int noofmatches;
float average;

} cricketer;
cricketer arr[3];
for(int i=0;i<3;i++){
    scanf("%[^\n]s",&arr[i].name);
    scanf("%d",&arr[i].age);
    scanf("%d",&arr[i].noofmatches);
    scanf("%d",&arr[i].average);
}
for(int i=0;i<3;i++){
    printf("Name: %s\n",arr[i].name);
    printf("Age: %d\n",arr[i].age);
    printf("noofmatches:%d\n",arr[i].noofmatches);
    printf("average: %d\n",arr[i].average);
}
return 0;
}
// OUTPUT-
// Name: virat
// Age: 33
// noofmatches:234
// average: 0
// Name: p→@
// Age: 1980948848
// noofmatches:-256804180
// average: -1073741824
// Name: Rohit
// Age: 37
// noofmatches:239
// average: 0