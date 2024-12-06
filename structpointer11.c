#include<stdio.h>
typedef struct pokemon{
int hp;
int attack;
int speed;
char tier;
char name[15];
} pokemon;
void change(pokemon* p){
    (*p) .hp=70;
    (*p).attack=80;
    (*p).speed=110;
    (*p).tier='S';
    (*p).hp=70;
    strcpy((*p).name,"Pikachu");
    
}
int main(){

pokemon pikachu;
pikachu.hp =60;
pikachu.attack =70;
pikachu.speed =100;
pikachu.tier ='A';
strcpy(pikachu.name,"Pikachu");
printf("%s\n",&pikachu.name);
printf("%d\n",&pikachu.hp);
printf("%d\n",&pikachu.attack);
printf("%d\n",&pikachu.speed);
printf("%c\n",&pikachu.tier);
change(&pikachu);
printf("%s\n",&pikachu.name);
printf("%d\n",&pikachu.hp);
printf("%d\n",&pikachu.attack);
printf("%d\n",&pikachu.speed);
printf("%c\n",&pikachu.tier);

return 0;
}