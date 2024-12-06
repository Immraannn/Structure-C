#include<stdio.h>
int main(){
typedef struct pokemon{
int hp;
int attack;
int speed;
char tier;
char name[15];
} pokemon;
pokemon pikachu;
pikachu.hp =60;
pikachu.attack =70;
pikachu.speed =100;
pikachu.tier ='A';
strcpy(pikachu.name,"Pikachu");
pokemon * x=&pikachu;
printf("%p\n",&pikachu.hp);
printf("%p\n",&pikachu.attack);
printf("%p\n",&pikachu.speed);
printf("%p\n",&pikachu.tier);
printf("%p\n",&pikachu.name);
printf("%p\n",x);

return 0;
}
// OUTPUT-
// 0061FF00
// 0061FF04
// 0061FF08
// 0061FF0C
// 0061FF0D
// 0061FF00