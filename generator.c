/*generator.h*/
#include<math.h>
#include <stdio.h>

float Sinuswelle (float a,float b, float c, int x,float d)
	
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




