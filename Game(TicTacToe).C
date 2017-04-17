#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<time.h>

void Play();
void instructions();
void pSign(int s[10]);
void pName();
void condition();
int pla1[10],pla2[10],i,k=0,cp1=0,cp2=0,t=0,z;
char sign[10],cp1s[10],cp2s[10];
char p1[10],p2[10];
int check(int c[10])
{
  int j;
  for(j=1;j<=3;j++)
    {
    if(c[j]&&c[j+3]&&c[j+6])
      return 1;
	}
  for(j=1;j<=7;j+=3)
    {
    if(c[j]&&c[j+1]&&c[j+2])
      return 1;
	}
  if(c[1]&&c[5]&&c[9] || c[3]&&c[5]&&c[7])
    {
	return 1;
	}
  return 0;
}
void pSign(int s[10])
{
    settextstyle(1, HORIZ_DIR, 2);
    line(150,5,150,470); //left1
    line(257,5,257,470);//left2
    line(10,5,635,5); //top1
    line(150,155,470,155);//top2
    line(150,310,470,310);//bottom1
    line(10,470,635,470);//bottom2
    line(363,5,363,470);//right1
    line(470,5,470,470);//right2
    settextstyle(8, HORIZ_DIR, 10);

	if(pla2[1]==1)
    {
	setcolor(1);
	outtextxy(170,-10,"O");//10
    }

	if(pla2[2]==1)
    {
	setcolor(2);
	outtextxy(275,-10,"O");//20
    }
	if(pla2[3]==1)
    {
	setcolor(3);
	outtextxy(385,-10,"O");//30
    }
	if(pla2[4]==1)
    {
	setcolor(4);
	outtextxy(170,135,"O");//40
    }
	if(pla2[5]==1)
    {
	setcolor(5);
	outtextxy(275,135,"O");//50
    }
	if(pla2[6]==1)
    {
	setcolor(6);
	outtextxy(385,135,"O");//60
    }
	if(pla2[7]==1)
    {
	setcolor(7);
	outtextxy(170,290,"O");//70
    }
	if(pla2[8]==1)
    {
	setcolor(13);
	outtextxy(275,290,"O");//80
    }
	if(pla2[9]==1)
    {
	setcolor(14);
	outtextxy(385,290,"O");//90
    }

    if(pla1[1]==1)
    {
	setcolor(5);
	outtextxy(170,-10,"X");//10
    }
    if(pla1[2]==1)
    {
	setcolor(11);
	outtextxy(275,-10,"X");//20
    }
    if(pla1[3]==1)
    {
	setcolor(13);
	outtextxy(385,-10,"X");//30
    }
    if(pla1[4]==1)
    {
	setcolor(12);
	outtextxy(170,135,"X");//40
    }
    if(pla1[5]==1)
    {
	setcolor(11);
	outtextxy(275,135,"X");//50
    }
    if(pla1[6]==1)
    {
	setcolor(10);
	outtextxy(385,135,"X");//60
    }
    if(pla1[7]==1)
    {
	setcolor(9);
	outtextxy(170,290,"X");//70
    }
    if(pla1[8]==1)
    {
	setcolor(12);
	outtextxy(275,290,"X");//80
    }
    if(pla1[9]==1)
    {
	setcolor(13);
	outtextxy(385,290,"X");//90
    }




  if(check(s))
  {
    settextstyle(7, HORIZ_DIR, 5);
    if(t%2!=0)
    {

	outtextxy(10,20,p1);
	outtextxy(23,60,"WINS");
	settextstyle(7, HORIZ_DIR, 1);
	outtextxy(8,94,"-------------");
	i=11;
	cp1++;
	k++;

    }
    else
    {
	outtextxy(10,20,p2);
	outtextxy(23,60,"WINS");
	settextstyle(7, HORIZ_DIR, 1);
	outtextxy(8,94,"-------------");
	cp2++;
	i=11;
	k++;
    }
  }
}
void pName()
{
	cleardevice();
	if(k==0)
	{

		outtextxy(240,100,"1st Player Name:");
		scanf("%s",&p1);
		cleardevice();
		outtextxy(240,100,"2nd Player Name:");
		scanf("%s",&p2);
		cleardevice();
	}
		outtextxy(480,20,"X For");
		if(z%2==1)
		{
			outtextxy(538,20,p1);
		}
		else
		{
			outtextxy(538,20,p2);
		}

  outtextxy(475,40,"--------------");
  outtextxy(480,60,"O For");
		if(z%2!=1)
		{
			outtextxy(538,60,p1);
		}
		else
		{
			outtextxy(538,60,p2);
		}
  outtextxy(475,80,"--------------");
}
void condition()
{
	pSign(pla1);
	t--;
	i--;
	settextstyle(1, HORIZ_DIR, 1);
	outtextxy(480,40,"OOps!! This Block");
	outtextxy(480,60,"Is Already Filled,");
	outtextxy(480,80,"Please Enter");
	outtextxy(480,100,"Another Block No.");
}
void instructions()
{
	settextstyle(1, HORIZ_DIR, 2);
	outtextxy(5,20,"INSTRUCTIONS:");
	settextstyle(1, HORIZ_DIR, 1);
	outtextxy(10,60,"1)Numbers For");
	outtextxy(30,80,"Each Block");
	outtextxy(30,100,"Is Given");
	outtextxy(10,140,"2)First Turn");
	outtextxy(30,160,"Is Based On");
	outtextxy(30,180,"Players Luck");
	settextstyle(1, HORIZ_DIR, 10);
	line(150,5,150,470); //left1
	line(257,5,257,470);//left2
	line(10,5,635,5); //top1
	line(150,155,470,155);//top2
	line(150,310,470,310);//bottom1
	line(10,470,635,470);//bottom2
	line(363,5,363,470);//right1
	line(470,5,470,470);//right2

	setcolor(5);
	outtextxy(170,-10,"1");//10
	setcolor(11);
	outtextxy(275,-10,"2");//20
	setcolor(13);
	outtextxy(385,-10,"3");//30
	setcolor(12);
	outtextxy(170,135,"4");//40
	setcolor(11);
	outtextxy(275,135,"5");//50
	setcolor(10);
	outtextxy(385,135,"6");//60
	setcolor(9);
	outtextxy(170,290,"7");//70
	setcolor(12);
	outtextxy(275,290,"8");//80
	setcolor(13);
	outtextxy(385,290,"9");//90
	settextstyle(1, HORIZ_DIR, 1);
	outtextxy(480,427,"Press Any Key");
	outtextxy(480,447," To Back......");
	getche();

}
void play()
{
	int a=0,q,r;
	for(q=1;q<10;q++)
    pla1[q]=pla2[q]=sign[q]=0;
    srand(time(NULL));
	r=rand();
	r=(r%10)+1;
	z=r%2;
	pName();
	if(r%2==1)
	{
	  t=1;
	}
	else
	{
	  t=2;
	}
  for(i=1;i<10;i++)
  {
	settextstyle(10, HORIZ_DIR, 2);
	outtextxy(30,140,p1);
	sprintf(cp1s,"%d",cp1);
	outtextxy(60,180,cp1s);
	outtextxy(520,140,p2);
	sprintf(cp2s,"%d",cp2);
	outtextxy(550,180,cp2s);

	again:
	if(t%2==1)
	{
		settextstyle(5, HORIZ_DIR, 4);
		outtextxy(20,20,p1);
		outtextxy(30,48,"Turn");
	}
	else
	{
		settextstyle(5, HORIZ_DIR, 4);
		outtextxy(20,20,p2);
		outtextxy(30,48,"Turn");

	}

		{
	settextstyle(1, HORIZ_DIR, 2);
	line(150,5,150,470); //left1
	line(257,5,257,470);//left2
	line(10,5,635,5); //top1
	line(150,155,470,155);//top2
	line(150,310,470,310);//bottom1
	line(10,470,635,470);//bottom2
	line(363,5,363,470);//right1
	line(470,5,470,470);//right2
	}
	a=getch()-48;
	if(a<0||a>10)
	{
		outtextxy(480,40,"Wrong! Block");
		outtextxy(480,60,"No Entered");
		goto again;
	}
		cleardevice();

	if(i%2==1)
	{
		if(sign[a])
			{
				condition();
			}
		else
		{
		pla1[a]=1;sign[a]='X';
		pSign(pla1);
		}
	}
	else
	{
		if(sign[a])
		{
			condition();
		}
		else
		{
			pla2[a]=1,sign[a]='O';
			pSign(pla2);
		}
	}
	t++;
  }

  if(i==10)
  {
	settextstyle(1, HORIZ_DIR, 1);
	outtextxy(20,20,"Game Drawn");
	k++;
  }
	settextstyle(1, HORIZ_DIR, 1);
	outtextxy(480,427,"Press Any Key");
	outtextxy(480,447," To Continue......");
	settextstyle(10, HORIZ_DIR, 2);
    outtextxy(30,140,p1);
    sprintf(cp1s,"%d",cp1);
    outtextxy(60,180,cp1s);
    outtextxy(520,140,p2);
    sprintf(cp2s,"%d",cp2);
    outtextxy(550,180,cp2s);
    getche();

}
void main()
{
	int opt,c=0;
	int gd = DETECT, gm,i;
	initgraph(&gd, &gm, "C:\\TC\\BGI");

	for(i=0;i<15;i++)
	{
	  cleardevice();
	  line(10,5,10,470); //bleft1
	  line(15,10,15,465);//bleft2
	  line(10,5,635,5); //btop1
	  line(15,10,630,10); //btop2
	  line(15,465,630,465);//bbottom1
	  line(10,470,635,470);//bbottom2
	  line(630,10,630,465);//right1
	  line(635,5,635,470);//right2
		setcolor(i);
		if(i<9)
		{
			settextstyle(1, HORIZ_DIR, i);
			outtextxy(240,10,"TMH");
		}
		if(i>8)
		{
			settextstyle(1, HORIZ_DIR, 8);
			outtextxy(240,10,"TMH");
		}
		setcolor(i+1);
		if(i%2!=0)
		setcolor(0);
		settextstyle(1, HORIZ_DIR, 6);
		outtextxy(195,100,"PRESENTS");
		setcolor(15-i);
		settextstyle(7, HORIZ_DIR, 8);
		outtextxy(60,200,"TIC TAC TOE");
		setcolor(i);
		if(i==0)
		{
			setcolor(11);
		}
			settextstyle(10, HORIZ_DIR, 3);
			outtextxy(30*i,350,"===>>>>");
			delay(400);


	}


	cleardevice();
	setcolor(15);
	start:
	while (!kbhit())
	{

	  cleardevice();
	  c++;
	  setcolor(c);
	  if(c!=0)
	  {
	   c++;
	  }

		line(150,5,150,470); //left1
		line(10,5,635,5); //top1
		line(150,310,470,310);//bottom1
		line(470,5,470,470);//right2
		settextstyle(1, HORIZ_DIR, 4);
		outtextxy(210,70,"TIC TAC TOE");
		settextstyle(1, HORIZ_DIR, 2);
		outtextxy(280,140,"MENU");
		outtextxy(240,180,"1) PLAY");
	  if(k>0)
	  {
		outtextxy(325,180,"AGAIN");
	  }

	  outtextxy(240,220,"2) INSTRUCTIONS");
	  outtextxy(240,260,"3) EXIT");
	  delay(500);

	}
	{
	opt=getch()-48;
	switch(opt)
    {
	case 1:
	cleardevice();
	play();
	break;
	case 2:
	cleardevice();
	instructions();
	break;
	case 3:
	exit(0);
	break;
	default:
	{
	  outtextxy(200,320,"Sorry! Wrong Choice");
	  delay(150);
	goto start;
	}
	}
	}
	while (!kbhit())
	{
	  goto start;
	}

    getch();

}
