#include<stdio.h>
#include<math.h>
double myround(double x)
{
	if(x<0.0)
 	{
		x-=0.5;
		return ceil(x);
	}
	else
	{	
		x+=0.5;
		return floor(x);
	}
}
int main(void)
{
	
	printf("round(-1.0) is %f ; myround(-1.0) is %f\n",round(-1.0),myround(-1.0));
	printf("round(-1.2) is %f ; myround(-1.2) is %f\n",round(-1.2),myround(-1.2));
	printf("round(-1.5) is %f ; myround(-1.5) is %f\n",round(-1.5),myround(-1.5));
	printf("round(-1.52) is %f ; myround(-1.52) is %f\n",round(-1.52),myround(-1.52));
	printf("round(0.5) is %f ; myround(0.5) is %f\n",round(0.5),myround(0.5));
	printf("round(1.0) is %f ; myround(1.0) is %f\n",round(1.0),myround(1.0));
	printf("round(1.2) is %f ; myround(1.2) is %f\n",round(1.2),myround(1.2));
	printf("round(1.5) is %f ; myround(1.5) is %f\n",round(1.5),myround(1.5));
	printf("round(1.52) is %f ; myround(1.52) is %f\n",round(1.52),myround(1.52));
}
