/*
				Author:Dhiraj sir
				DOC:6/1/2022
				Objective: Creative a candy game
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int d,candyX=40,candyY=2,boxX=40,boxY=23,score=0,life=3;
	char ch;
	textbackground(BLUE);
	start:
	clrscr();
	gotoxy(60,5);
	cprintf("score=%d",score);
	gotoxy(60,6);
	cprintf("life=%i",life);
	gotoxy(candyX,candyY);
	textcolor(YELLOW);
	cprintf("0");
	gotoxy(boxX,boxY);
	cprintf("#");
	gotoxy(boxX+7,boxY);
	cprintf("#");
	gotoxy(boxX,boxY+1);
	cprintf("########");
	if(kbhit())
	{
		ch=getch();  //scan the key
		switch(ch)
		{
			case 'a':
				if(boxX>1)
				{
					boxX--;
				}
				break;
			case 'd':
				if(boxX<73)
				{
					boxX++;
				}
				break;
			case 'x':
				exit(0);
		}
	}
	delay(200);

	if(candyY==22)
	{
		d=candyX-boxX;
		if(d==1||d==2||d==3||d==4||d==5||d==6)
		{
			score++;
			sound(80);
			delay(200);
			nosound();
		}
		else
		{
			life--;
			sound(500);
			delay(200);
			nosound();
			if(life==0)
			{
				clrscr();
				gotoxy(40,13);
				textcolor(RED);
				cprintf("Game over..");
				sound(200);
				delay(200);
				nosound();
				getch();
				exit(0);
			}
		}
		candyX=rand()%80+1;
		candyY=2;
	}
	delay(200);
	candyY++;

	goto start;

     //	getch(); //hold the output
	}   //end of main