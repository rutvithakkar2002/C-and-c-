
		/*	Author: Rutvi Thakkar
			Doc:
			Objective: To create a candy game..*/
//candy game
#include<stdio.h>
#include<conio.h>
void main()
{
	int candyX=40,candyY=5,boxX=40,boxY=22,score=0,life=3,d;
	char ch;
	textbackground(BLUE);
	start:
	clrscr();
	gotoxy(50,5);
	cprintf("Score=%d",score);
	gotoxy(50,6);
	cprintf("life=%d",life);
      //	textcolor(YELLOW);
	gotoxy(candyX,candyY);
	printf("0");
	gotoxy(boxX,boxY);
	printf("#");
	gotoxy(boxX+7,boxY);
	printf("#");
	gotoxy(boxX,boxY+1);
	printf("########");
	if(kbhit())
	{
		ch=getch();
		switch(ch)
		{
			case 'a':
				if(boxX<=7)
				{
					boxX++;
				}
				else
				{
					boxX=boxX-5;  //box will move left side..
				}
				break;
			case 'd':
				if(boxX>=72)
				{
					boxX--;
				}
				else
				{
					boxX=boxX+5;  //box will move right side..
				}
				break;
			case 'x':
				exit(0);
		} //end of switch
	}//end of if
	candyY++;
	if(candyY==22)
	{
		d=boxX-candyX;
		if(d==0 || d==-1 || d==1 || d==2 || d==-2)
		{
			score++;
		}
		else
		{
			life--;
			if(life==0)
			{
				clrscr();
				gotoxy(40,13);
				textcolor(RED);
				cprintf("Game Over");
				sound(20);
				delay(5000);
				nosound();
				getch();
				exit(0);
			}
		}
		sound(200);
		delay(200);
		nosound();
		candyY=2;
		candyX=rand()%30+1;
	}
	 delay(200);
      goto start;
     //	sound(1000);
    //	delay(1000);
    //	nosound();
    //	getch();
}