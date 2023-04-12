#include<stdio.h>

main()
{
	int x=5,y=10,z=5, c;
	c=x^3+y^3+z^3+3*x^2+y^2-x^3-y^2+y^3+z^2+y^3+y^2-x^3-z^2+x^2+z^2-6*x*y*z;
	printf("c=%d",c);
}
