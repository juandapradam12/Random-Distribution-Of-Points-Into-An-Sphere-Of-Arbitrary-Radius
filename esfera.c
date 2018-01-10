#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* COMPILO CON cc esfera.c -o esfera.x -lm Y ./esfera.x */

#define N 5000
#define PI 3.14159265

void* Esfera(double R);
double Rand_1(void);
double Rand_2PI(void);



int main(){
	double R = 1.0;

	Esfera(R);

}

double Rand_1(void){
	return 2*drand48()-1;
}

double Rand_2PI(void){
	return drand48()*(2.0*PI);
}

void* Esfera(double r){
	double *X;
	X = malloc(sizeof(double)*N);
	double *Y; 
	Y = malloc(sizeof(double)*N);
	double *Z;
	Z = malloc(sizeof(double)*N);
	double u;
	double phi;

	for(int i = 0; i < N; i++){
		u=Rand_1();
		phi=Rand_2PI();
           
		X[i] = r*sqrt(1-pow(u, 2))*cos(phi);
		Y[i] = r*sqrt(1-pow(u, 2))*sin(phi);
		Z[i] = r*u;
	
	}	

	FILE *Puntos = fopen("Puntos.dat", "w");
	
	for(int i = 0; i < N; i++){
            	fprintf(Puntos, "%f %f %f", X[i], Y[i], Z[i]);
        	fprintf(Puntos, "\n");
    	}
	fclose(Puntos);
}

