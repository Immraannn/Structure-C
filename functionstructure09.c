#include<stdio.h>
typedef struct pokemon{
int hp;
int speed;
int attack;
char name[15];
char tier;
} pokemon;
void fun(pokemon p){
    printf("%d",p.hp);
    return ;
}
void change(pokemon p){
    p.hp=70;
    p.attack=60;
    p.speed=110;
    return ;
}
int main(){
//structure is pass by value
pokemon pikachu;
pikachu.hp =60;
pikachu.attack =50;
pikachu.speed =100;
fun(pikachu);
change(pikachu);
printf("\n%d\n",pikachu.hp);
printf("%d\n",pikachu.attack);
printf("%d\n",pikachu.speed);
return 0;
}
// OUTPUT-
// 60
// 60
// 50
// 100
