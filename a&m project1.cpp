#include<graphics.h>
void car();
void car()
{
	int i,x,y;
	for(i=0;i<639;i++)
	{
		if(213+i==639)
		{
			i=0;
			continue;
		}
		else
		{
		//road
		setcolor(BLACK);
		line(0,360,639,360);
		line(0,240,639,240);
		//car
		setcolor(BLUE);
		line(120+i,270,165+i,270);
		line(120+i,270,105+i,300);
		line(105+i,300,105+i,330);
		line(99+i,330,120+i,330);
		line(99+i,324,120+i,324);
		line(135+i,330,165+i,330);
		line(135+i,324,165+i,324);
		line(180+i,324,213+i,324);
		line(180+i,330,213+i,330);
		line(99+i,330,99+i,324);
		line(180+i,330,180+i,324);
		line(210+i,306,186+i,300);
		line(186+i,300,165+i,270);
		line(210+i,306,210+i,330);
		line(213+i,324,213+i,330);
		//tyre
		setcolor(DARKGRAY);
		circle(172.5+i,330,8);
		circle(127.5+i,330,8);
		if(i%2==0)
		{
		//front +
		line(172.5+i,324,172.5+i,336);
		line(165+i,330,180+i,330);
		//back +
		line(120+i,330,135+i,330);
		line(127.5+i,324,127.5+i,336);
		}
		else
		{
		//front X
		line(166+i,335,177+i,325);
		line(166+i,325,177+i,335);
		//back X
		line(124+i,334,132+i,326);
		line(124+i,326,132+i,334);
		}
		//tower
		setcolor(RED);
		ellipse(105,80,270,13,58,135);
		ellipse(220,80,167,270,58,135);
		line(105,215,105,240);
		line(220,215,220,240);
		//CLOCK
		setcolor(GREEN);
		circle(450,120,30);
		circle(450,120,1);
		line(405,240,405,60);
		line(495,60,495,240);
		line(405,60,495,60);
		//bones of clock
		line(468,102,450,120);
		line(450,120,465,120);
		}
		delay(30);
		cleardevice();
	}
}
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,(char*)"");
	setbkcolor(WHITE);
	car();
	getch();
	return 0;
}
