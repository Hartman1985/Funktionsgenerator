/*generator.h*/
#include<math.h>
#include <stdio.h>
#include<stdlib.h>
float Sinuswelle (int a,int b, int c, int x,int d)
	
	{

	float y;
	
	if(a>0 && b>0){
	y=a*sin(b*x+c)+d;
	}
	if(a!=0 && b==0){
	      return  y=a*sin(x+c);
	        }
	if(a==0 && b!=0){
		 return  y=sin(b*x+c);
		 }
	if(a==0 && b==0){
	return	y=sin(x+c)+d;
		
	}
	else{
		return a*sin(b*x+c)+d;
	}
	
	
	}


int Rechteck(int n,int max,int x)
{
	int y;

	if(x==1){
		return 0-max;
		}
	else{
		return max;
		}
	
	}
		

