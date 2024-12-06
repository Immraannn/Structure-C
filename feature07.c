#include<stdio.h>
#include<string.h>
int main(){
typedef struct pokemon{
int hp;
int speed;
int attack;
char name[15];
char tier;
} pokemon;
pokemon a,b,c;
a.attack =100;
a.speed =300;
a.hp =100;
a.speed =90;
a.tier ='A';
strcpy(a.name,"Blastoise");
// b.attack=a.attack;
// b.hp=a.hp;
// b.tier=a.tier;
// b.speed=a.speed;
// strcpy(b.name,a.name);
b=a;// deep copy
strcpy(b.name,"Venusaur");
printf("%s",b.name);
printf("d\n",b.attack);
printf("%d\n",b.hp);
printf("%d\n",b.speed);
return 0;
}
// OUTPUT-
// Venusaurd
// 100
// 90
// 300