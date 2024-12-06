#include<stdio.h>
int main(){
struct pokemon{//user defined datatype
int hp;
int speed;
int attack;
char tier;// S,A,B,C,D
};//pikachu,charizard -> if we write thia then we don't need to write struct pokemon pikachu;
struct pokemon pikachu;
//pikachu.attack =60;
printf("Enter the pikachu attack:");
scanf("%d",&pikachu.attack);
pikachu.hp =50;
pikachu.speed =100;
pikachu.tier ='A';
printf("%d",pikachu.attack);

struct pokemon charizard;
charizard.attack =130;
charizard.hp =80;
charizard.speed =80;
charizard.tier ='S';

    return 0;
}
// OUTPUT-
// Enter the pikachu attack:80
// 80