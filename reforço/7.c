/*
x menor
y inter
z maior

*/


#include <stdio.h>



int main(int argc, char** argv)
{
	
	
	float x,y,z,a;
	
	printf("Informe um numero: ");
	scanf("%f",&x);
	printf("Informe um segundo numero: ");
	scanf("%f",&y);
	printf("Informe um terceiro numero: ");
	scanf("%f",&z);
	
	if(x<z && x>y){
		a=y;
		y=x;
		x=a;
		printf("%f %f %f",x,y,z);			
	}else if(x>y && y>z){
		a=x;
		x=z;
		z=a;
		printf("%f %f %f",x,y,z);
	}else if(x<y && x<z && z>y){
		printf("%f %f %f",x,y,z);
	}else if (x<y && x>z){
		a=x;
		x=z;
		z=y;
		y=a;
		printf("%f %f %f",x,y,z);
	}else if(x==y && x<z){
		printf("%f %f %f",x,y,z);
	}else if(x==y && x>z){
		a=x;
		x=z;
		z=a;
		printf("%f %f %f",x,y,z);
	}else if(x==z && x>y){
		a=x;
		x=y;
		y=a;
		printf("%f %f %f",x,y,z);
	}else if(x==z && x<y){
		a=z;
		z=y;
		y=a;
		printf("%f %f %f",x,y,z);
	}else if(x==z && z==y){
		printf("%f %f %f",x,y,z);
	}else if(y==z && y<x){
		a=x;
		x=z;
		z=a;
		printf("%f %f %f",x,y,z);
	}else if(y==z && y>x){
		printf("%f %f %f",x,y,z);
	}
	
	
	
	return 0;
}