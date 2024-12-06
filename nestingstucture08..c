#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
typedef struct pokemon{
int hp;
int speed;
int attack;
char name[15];
char tier;
} pokemon;
typedef struct legendarypokemon{
pokemon normal;
char ability[10];
} legendarypokemon;
legendarypokemon mewtwo;
strcpy(mewtwo.normal.name,"mewtwo");
strcpy(mewtwo.ability,"pressure");
mewtwo.normal.attack=250;
mewtwo.normal.speed=350;
mewtwo.normal.hp=350;
mewtwo.normal.tier='A';
printf("%d\n",mewtwo.normal.attack);
printf("%d\n",mewtwo.normal.hp);
printf("%c\n",mewtwo.normal.tier);
printf("%s\n",mewtwo.normal.name);
return 0;
}