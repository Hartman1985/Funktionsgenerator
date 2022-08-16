#include "generator.h"
#include <stdio.h>


void main(){
	float a,b,c,d;
	int min,max,x;

	printf("Bitte Wert für die Streckung eingeben\n");
	scanf("%f",&a);
	printf("Bitte Wert für die Verschiebung der Periode auf X-Achse eingeben\n");
	scanf("%f",&b);
	printf("Bitte Wert für die Verschiebung auf der X-Achse eingeben\n");
	scanf("%f",&c);
	printf("Bitte Wert für die verschiebung auf der Y-Achse eingeben \n");
	scanf("%f",&d);
	//printf("Bitte Anzahl von x-Werten eingeben\n");
	//scanf("%i",&x);
	printf("Bitte Anzahl Min Bereich x-Werten eingeben\n");
	scanf("%i",&min);
	printf("Bitte Anzahl Max Bereich x-Werten eingeben\n");
	scanf("%i",&max);
	FILE *output_stream;
	output_stream = fopen("Werte.txt", "w");

	float Sinuswerte[max];
	for(int i=min;i<=max;i++){
	Sinuswerte[i]=Sinuswelle(a,b,c,i,d);
	fprintf(output_stream, "X=%i ",i);
	fprintf(output_stream, "Y=%f \n",Sinuswerte[i]);
	}
fclose(output_stream);
	
}	
