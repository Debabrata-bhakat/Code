#include<stdio.h>
#include<math.h>
typedef struct $
{
	float x;
	float y;	
}point;
void dist(point p1,point p2);
void mid(point p1,point p2);
void area(point p1,point p2,point p3);
void main()
{
	int c;
	point p1,p2,p3;
	printf("Enter your choice\n 1.Compute Distance Between two points\n2.Find middle point of the line segment joining two points\n3.Compute area of triangle\n");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
		printf("Enter Co-ordinates of first and second point\n");
		scanf("%f %f",&p1.x,&p1.y);
		scanf("%f %f",&p2.x,&p2.y);
		dist(p1,p2);
		break;

		case 2:
		printf("Enter Co-ordinates of first and second point\n");
		scanf("%f %f",&p1.x,&p1.y);
		scanf("%f %f",&p2.x,&p2.y);
		mid(p1,p2);
		break;

		case 3:
		printf("Enter Co-ordinates of first, second and third point\n");
		scanf("%f %f",&p1.x,&p1.y);
		scanf("%f %f",&p2.x,&p2.y);
		scanf("%f %f",&p3.x,&p3.y);
		area(p1,p2,p3);
		break;

		default:
		printf("Wrong Choice Entered\n");

	}
}

void dist(point p1,point p2)
{
	float d=sqrt((p1.x-p2.x)*(p1.x-p2.x) + (p1.y-p2.y)*(p1.y-p2.y));
	printf("Distance between the two points is: %g\n",d);
}

void mid(point p1,point p2)
{
	point p3;
	p3.x=(p1.x+p2.x)/2;
	p3.y=(p1.y+p2.y)/2;
	printf("The mid point of the line joining the two points is: %g %g \n",p3.x,p3.y);
}
void area(point p1,point p2,point p3)
{
	float area=p1.x*(p2.y-p3.y) + p2.x*(p3.y-p1.y) + p3.x*(p1.y-p2.y);
	area*=.5;
	if(area<0)
		area-=area;
	printf("Area of triangle is %g\n",area );
}