#include "generator.h"
#include <stdio.h>
#include<getopt.h>
#include<unistd.h>

int main(int argc,char*argv[]){
	int a,b,c,d,min,max,max1,x,n,last;
	int option;
	float Sinuswerte[100];
	int Rechteckwerte[100];
while((option=getopt(argc,argv,"v,s,r,h"))!=-1)
			switch (option)
				{
				
				case 'v':
                                	printf("Die Version ist 0.1 Alpha\n");
  					printf("Programmierer: Sebastian Käwel\n");
					return 0;
				case 's':
					printf("Bitte Wert für die Streckung eingeben\n");
					scanf("%i",&a);
					printf("Bitte Wert für die Verschiebung der Periode auf X-Achse eingeben\n");
					scanf("%i",&b);
					printf("Bitte Wert für die Verschiebung auf der X-Achse eingeben\n");
					scanf("%i",&c);
					printf("Bitte Wert für die verschiebung auf der Y-Achse eingeben \n");
					scanf("%i",&d);
					printf("Bitte Anzahl Min Bereich x-Werten eingeben\n");
					scanf("%i",&min);
					printf("Bitte Anzahl Max Bereich x-Werten eingeben\n");
					scanf("%i",&max);
					FILE *output_stream;
					fprintf(output_stream, "Sinusfunktionswerte:\n ");
					output_stream = fopen("Werte.txt", "w");
					for(int i=min;i<=max;i++){
						Sinuswerte[i]=Sinuswelle(a,b,c,i,d);
						fprintf(output_stream, "X=%i ",i);
						fprintf(output_stream, "Y=%f \n",Sinuswerte[i]);
						}
					break;
				case 'r':
					printf("Bitte max/min Pegel angeben\n");
					scanf("%i",&max);
					printf("Bitte Anzahl an Perioden\n");
					scanf("%i",&max1);
					printf("Bitte Periodendauer einstellen \n");
					scanf("%i",&n);
					output_stream = fopen("Werte.txt", "w");
					c=0;
					last=0;
					fprintf(output_stream, "Rechteckfuktionswerte:\n ");
					for(int d=1;d<=max1;d++){
								x=0;
						c=last;
					for(int i=0;i<=n+1;i++){
						
						Rechteckwerte[i]=Rechteck(n,max,x);
						fprintf(output_stream, "%i; ",c);
						last=c;
						fprintf(output_stream, "%i; \n",Rechteckwerte[i]);
						c++;
						if(i==n/2){
								x=1;
								c--;
						}
					}
					}
					break;
				case 'h':
					printf("Dies ist ein Funktionsgenerator\n");
					printf("Optionen sind:\n");
					printf("-s für das erstellen einer Sinusfunktion\n");
					printf("-r für das erstellen einer Rechteckfunktion\n");
					printf("-h für Die Hilfe\n");
					printf("-v für die Anzeige der Version\n");
					
					break;
					fclose(output_stream);
					}
}
