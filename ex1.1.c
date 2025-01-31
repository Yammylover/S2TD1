#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
	float abs;
	float ord;
} Point2D;

Point2D createPoint(){
	//Locals
	Point2D pt;
	//asks the user the x value
	printf("Enter X value :");
	if( scanf("%f", &pt.abs) != 1){
		printf("Bad X value!");
		exit(1);
	}
	//asks user y value
	printf("Enter Y value : ");
	if (scanf("%f", &pt.ord) !=1){
		printf("Bad Y value!");
		exit(1);
	}
	//end of process
	return pt;
}

void displayPoint(Point2D p){
	printf("Point2D{ x=%f / y=%f }\n",p.abs,p.ord);
}

Point2D addPoint(Point2D a, Point2D b){
	Point2D crow;
	crow.abs=a.abs+b.abs;
	crow.ord=a.ord+b.ord;
	return crow;
}

float longueur(Point2D a,Point2D b){
	float lucifer;
	lucifer=sqrt((b.abs-a.abs)*(b.abs-a.abs)+(b.ord-a.ord)*(b.ord-a.ord));
	return lucifer;
}

int carré(Point2D a, Point2D b, Point2D c, Point2D d){
	if(longueur(a,b)==longueur(c,d) && longueur(a,b)==longueur(b,c) && longueur(b,c)==longueur(d,a)){
		 printf("Ces points forment un carré\n");
		 return 1;
	}
	return 0;
	}
int aligné //a finir

int main(){
	Point2D a;
	Point2D b;
	Point2D c;
	Point2D d;
	a=createPoint();
	b=createPoint();
	c=createPoint();
	d=createPoint();
	printf("a:");
	displayPoint(a);
	printf("b:");
	displayPoint(b);
	printf("c:");
	displayPoint(c);
	printf("d:");
	displayPoint(d);
	/*Point2D c;
	c=addPoint(a,b);
	printf("c:");
	displayPoint(c);
	printf("longueur du segment ab = %f\n",longueur(a,b));*/
	carré(a,b,c,d);
return 0;
} 
