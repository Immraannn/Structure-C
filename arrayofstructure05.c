#include<stdio.h>
#include<string.h>
int main(){
 typedef struct pokemon{//user defined datatype
char name[15];
int attack;
int hp;
int speed;
char tier;// S,A,B,C,D
} pokemon;
pokemon arr[3];
strcpy(arr[0].name,"charizard");
arr[0].attack =50;
arr[0].hp =150;
arr[0].speed =30;
arr[0].tier ='A';
strcpy(arr[1].name,"pikachu");
arr[1].attack =14;
arr[1].hp =15;
arr[1].speed =330;
arr[1].tier ='A';
strcpy(arr[2].name,"mewtu");
arr[2].attack =50;
arr[2].hp =150;
arr[2].speed =30;
arr[2].tier ='s';
for(int i=0;i<3;i++){
    printf("%s\n",arr[i].name);
    printf("%d\n",arr[i].attack);
    printf("%d\n",arr[i].speed);
    printf("%d\n",arr[i].hp);
    printf("%c\n",arr[i].tier);
}


    return 0;
}
// OUTPUT-
// charizard
// 50
// 30
// 150
// A
// pikachu
// 14
// 330
// 15
// A
// mewtu
// 50
// 30
// 150
// s