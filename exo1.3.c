#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

typedef struct{
	float atk;
	float def;
	float dodge;
	float hp;
	char name[32];
} Ninja;

Ninja createFighter(){
	Ninja n;
	n.atk=rand()%6+5;
	n.def=rand()%3+2;
	n.dodge=(rand()%2+1)/10;
	n.hp=rand()%21+80;
	printf("\nRentrez le nom du combattant: \n");
	scanf("%s",n.name);
	return n;
}

void displayfighter(Ninja n){
	printf("\n%s\n-ATK:%f\n-DEF:%f\n-Dodge:%f\n-HP:%f\n",n.name,n.atk,n.def,n.dodge,n.hp);

}
	
void FIGHT(Ninja a, Ninja b){
	float dodge;
	float damage=0;
	
	while(a.hp>0 && b.hp>0){
		dodge=rand()%101/10;
		if (dodge>b.dodge){
			damage=a.atk-b.def;
			if(damage<0){
				damage=0;
			}
			b.hp-=damage;
			printf("%s takes %f damages from %s.\n",b.name,damage,a.name);
		}
		else {
			printf("%s dodges attack from %s!\n",b.name,a.name);
		}
		dodge=rand()%101/10;
		if (dodge>a.dodge){
			damage=b.atk-a.def;
			if(damage<0){
				damage=0;
			}
			a.hp-=damage;
			printf("%s takes %f damages from %s.\n",a.name,damage,b.name);
		}
		else {
			printf("%s dodges attack from %s!\n",a.name,b.name);
		}
	}
//check result
	if (a.hp<=0 && b.hp<=0){
		printf("Ex-equo\n");
	}
	else if("a.hp<=0"){
		printf("%s gagne!\n", b.name);
	}
	else ("%s gagne!\n",a.name);
}

int main(){
	srand(time(NULL));
	Ninja Nikoli;
	Ninja Carey;
	Nikoli=createFighter(Nikoli);
	displayfighter(Nikoli);
	Carey=createFighter(Carey);
	displayfighter(Carey);
	FIGHT(Nikoli, Carey);
return 0;
}
