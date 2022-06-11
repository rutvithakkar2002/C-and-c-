/*Author: Dhiraj sir
Date: 7/1/22
objective: Hotel Menu */
#include<stdio.h>
#include<conio.h>
#define SOUTH 1
#define PRICE 100
void main()
{
	int ch,southchoice,idlichoice,qty,totalprice,dosachoice,uttapachoice,dhoklachoice;
	int italianchoice,pizzachoice,breadchoice,pastachoice,mashroomchoice;
	int panjabichoice,paneerbuttermasalach,paneerkoftachoice,koyakajuch,paneermasalachoice;
	int gujchoice,dalbhatchoice,farsanchoice,sabjichoice,sweetchoice;
	int chinesechoice,soupch,hakkanoodlesch,noodlesch,ricech;
	int marathichoice,marathisabjich,marathisupchoice,bhakhrich,bmch;
	int kfoodch,odoch,rotloch,butterch,bchoice;
	int maxicanch,machacach,menudoch,hch,tchoice;
	int dch,applecrispch,cornch,icech,cakechoice;
	int ach,startersch,sch,desch,drchoice;
	int pizzach,chicagoch,neapolitanpizza,dpch,cpch;
	int dabelichoice,dabelich,paneerdchoice,dabelicch,paneermasaladchoice;
	int sendwichchoice,s1ch,aluch,mch,gchoice;
	int bhajipavchoice,bjch,pjchoice,jpch,pmjchoice;
	int vadapavch,pkvchoice,koyakajuvch,v1choice;
	int samosachoice,samosach,paneerkoftaschoice,koyakajusch,paneermasalaschoice;
	int kchoice,pkchoice,paneerkoftakchoice,koyakajukch,paneermasalakchoice;
	int s1choice,s2ch,s3ch,s4ch,s5ch;
	int mnchoice,vmnch,paneerkoftamnchoice,koyakajumnch,paneermasalamnchoice;
	int chatchoice,c1choice,c2choice,c3choice,c4choice;
	int bhelchoice,bl1ch,bl2ch,bl3ch,bl4ch;
	int bfchoice,paneerbuttermasalabfchoice,paneerkoftabfchoice,koyakajubfch,paneermasalabfchoice;
	int fixchoice,f1choice,f2choice,f3choice,f4choice;
	int dtchoice,dt1choice,dt2choice,dt3choice,dt4choice;
	int fchoice,f1ch,f2ch,f3ch,f4ch;
	clrscr();
	start:
	clrscr();
	printf("\n1----------South Indian");
	printf("\n2----------italian");
	printf("\n3----------Panjabi");
	printf("\n4----------Gujarati");
	printf("\n5----------chinese");
	printf("\n6----------marathi");
	printf("\n7----------kathiyavadi");
	printf("\n8----------Maxican");
	printf("\n9----------Deserts");
	printf("\n10---------American");
	printf("\n11---------Pizza");
	printf("\n12---------Dabeli");
	printf("\n13---------sendwich");
	printf("\n14---------bhaji-pau");
	printf("\n15---------vadapav");
	printf("\n16---------samosa");
	printf("\n17---------kachori");
	printf("\n18---------soups");
	printf("\n19---------manchrian");
	printf("\n20---------chat");
	printf("\n21---------bhel");
	printf("\n22---------breakfast");
	printf("\n23---------fix thali");
	printf("\n24---------Dait food");
	printf("\n25---------frenki");
	printf("\n26---------Exit");
	printf("\nEnter the Choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case SOUTH:
			printf("\n You have selected South Indian");
			printf("\n 1--------------dosa");
			printf("\n 2--------------Idli");
			printf("\n 3--------------Utappa");
			printf("\n 4--------------Dhokla");
			printf("\n 5--------------goto main menu");
			printf("\nEnter The choice");
			scanf("%d",&southchoice);
			switch(southchoice)
			{
				case 1:
					printf("You have selected dosa");
					printf("\n1--------sada dosa");
					printf("\n2--------Mung dal dosa");
					printf("\n3--------cheeze dosa");
					printf("\n4--------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&dosachoice);
					switch(dosachoice)
					{
						case 1:
							printf("You have selected sada dosa");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("The total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("You have selected Mung dal dosa");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected cheeze dosa");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}

					break;
				case 2:
					printf("\nYou have selected idli");

					printf("\n1----------rava Idli");
					printf("\n2---------Mini Idli");
					printf("\n3---------steam idli");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&idlichoice);
					switch(idlichoice)
					{
						case 1:
							printf("\nYou have selected rava idli");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected mini idli");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("You have selected steam idli");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;
				case 3:
					printf("\nYou have selected Uttappa");
					printf("\n1-------Rava Uttapa");
					printf("\n2-------suji Uttapa");
					printf("\n3-------cheese Uttapa");
					printf("\n4-------go to main menu");
					printf("\nEnter The choice:");
					scanf("%d",&uttapachoice);
					switch(uttapachoice)
					{
						case 1:
							printf("\nYou have selected Rava Uttapa");
							printf("Enter the number of plates: \n");
							scanf("%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected suji Uttapa");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected cheese Uttapa");
							printf("\nEnter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;

					}//end of switch
					break;
				case 4:
					printf("\nYou have selected Dhokla");
					printf("\n1-------Rava Dhokla");
					printf("\n2-------suji Dhokla");
					printf("\n3-------cheese Dhokla");
					printf("\n4-------go to main menu");
					printf("\nEnter The choice:");
					scanf("%d",&dhoklachoice);
					switch(dhoklachoice)
					{
						case 1:
							printf("\nYou have selected Rava Dhokla");
							printf("Enter the number of plates: \n");
							scanf("%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected suji Dhokla");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected cheese Dhokla");
							printf("\nEnter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;

					}//end of switch
					break;

				case 5:
					goto start;
			}  //end of south
			break;
		case 2:
			printf(" \n You have selected italian");
			printf("\n 1---------------Pizza");
			printf("\n 2---------------Bread");
			printf("\n 3---------------Pasta");
			printf("\n 4---------------Mashroom");
			printf("\n 5--------------goto main menu");
			printf("\nEnter Your Choice: ");
			scanf("%d",italianchoice);
			switch(italianchoice)
			{
				case 1:
					printf("\n You have selected Pizza");
					printf("\n1----------Garlic pizza");
					printf("\n2---------cheese pizza");
					printf("\n3---------Melted Pizza");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&pizzachoice);
					switch(pizzachoice)
					{
						case 1:
							printf("\nYou have selected Garlic Pizza");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected cheese pizza");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("You have selected steam Melted pizza");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					
					break;
				case 2:
					printf("\n You have selected Bread");
					printf("\n1----------Garlic Bread");
					printf("\n2---------cheese Bread");
					printf("\n3---------mini Bread");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&breadchoice);
					switch(breadchoice)
					{
						case 1:
							printf("\nYou have selected Garlic bread");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected cheese bread");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("You have selected steam mini bread");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;
				case 3:
					printf("\n You have selected Pasta");
					printf("\n1----------Garlic pasta");
					printf("\n2---------cheese pasta");
					printf("\n3---------Melted Pasta");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&pastachoice);
					switch(pastachoice)
					{
						case 1:
							printf("\nYou have selected Garlic Pasta");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected cheese pasta");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("You have selected steam Melted pasta");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;
				case 4:
					printf("\n You have selected mashroom");
					printf("\n1----------Garlic mashroom");
					printf("\n2---------cheese mashroom");
					printf("\n3---------Melted mashroom");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&mashroomchoice);
					switch(mashroomchoice)
					{
						case 1:
							printf("\nYou have selected Garlic mashroom");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected cheese mashroom");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("You have selected steam Melted mashroom");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;
				case 5:
					goto start;
				
			}//end of switch
			break;
		case 3:
			printf("\n You have selected Punjabi");
			printf("\n1----------Paneer butter masala");
			printf("\n2---------paneer kofta");
			printf("\n3--------- Koya kaju");
			printf("\n4----------Paneer masala");
			printf("\n5---------goto main menu");
			printf("\nEnter The choice:");
			scanf("%d",&panjabichoice);
			switch(panjabichoice)
			{
				case 1:
					printf("You have selected Paneer butter masala");
					printf("\n1----------Paneer butter masala with cheese");
					printf("\n2----------Garlic paneer butter masala");
					printf("\n3---------- paneer cheese");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&paneerbuttermasalach);
					switch(paneerbuttermasalach)
					{
						case 1:
							printf("\nYou have selected Paneer butter Masala with cheese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected garlic paneer butter masala");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("You have selected paneer cheese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
				case 2:
					printf("You have selected Paneer kofta");
					printf("\n1----------Paneer kofta with cheese");
					printf("\n2----------Garlic paneer kofta");
					printf("\n3---------- butter paneer kofta");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&paneerkoftachoice);
					switch(paneerkoftachoice)
					{
						case 1:
							printf("\nYou have selected Paneer kofta with cheese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected garlic paneer kofta");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected butter paneer kofta");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;
				case 3:
					printf("You have selected koyakaju");
					printf("\n1----------koyakaju with cheese");
					printf("\n2----------Garlic koyakaju kofta");
					printf("\n3---------- sweet koyakaju");
					printf("\n4---------goto main menu");
					printf("\n Enter Your choice:");
					scanf("%d",&koyakajuch);
					switch(koyakajuch)
					{
						case 1:
							printf("\nYou have selected koyakaju with cheese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected Garlic koyakaju kofta");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected sweet koyakaju");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;	
				case 4:
					printf("You have selected Paneer Masala");
					printf("\n1----------Paneer masala with cheese");
					printf("\n2----------Garlic paneer masala");
					printf("\n3---------- butter paneer masala");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&paneermasalachoice);
					switch(paneermasalachoice)
					{
						case 1:
							printf("\nYou have selected Paneer masala with cheese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected Garlic paneer masala");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected butter paneer masala");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;
				case 5:
					goto start;	
			}//end of switch
			break;
		case 4:
			printf("\n You have selected Gujarati");
			printf("\n 1--------------dal-bhat");
			printf("\n 2--------------3 sabji");
			printf("\n 3--------------3 sweets");
			printf("\n 4--------------farsan");
			printf("\n 5--------------goto main menu");
			printf("\nEnter The choice");
			scanf("%d",&gujchoice);
			switch(gujchoice)
			{
				case 1:
					printf("You have selected dalbhat");
					printf("\n1--------sada dal-bhat");
					printf("\n2--------garlic dal bhat");
					printf("\n3--------chese dal-bhat");
					printf("\n4--------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&dalbhatchoice);
					switch(dalbhatchoice)
					{
						case 1:
							printf("You have selected sada dal-bhat ");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("The total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("You have selected garlic dal-bhat");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected cheese dal-bhat");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}

					break;
				case 2:
					printf("\nYou have selected 3 sabji");

					printf("\n1----------cabbije sabji");
					printf("\n2---------aaloo sabji");
					printf("\n3---------flower sabji");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&sabjichoice);
					switch(sabjichoice)
					{
						case 1:
							printf("\nYou have selected cabbije sabji");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected aaloo sabji");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("You have selected flower sabji");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;
				case 4:
					printf("\nYou have selected farsan");
					printf("\n1-------khaman");
					printf("\n2-------bhajiya");
					printf("\n3-------gathiya");
					printf("\n4-------go to main menu");
					printf("\nEnter The choice:");
					scanf("%d",&farsanchoice);
					switch(farsanchoice)
					{
						case 1:
							printf("\nYou have selected khaman");
							printf("Enter the number of plates: \n");
							scanf("%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected bhajiya");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected gathiya");
							printf("\nEnter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;

					}//end of switch
					break;
				case 3:
					printf("\nYou have selected sweets");
					printf("\n1-------Gualabjamun");
					printf("\n2-------kajukatri");
					printf("\n3-------sonpapadi");
					printf("\n4-------go to main menu");
					printf("\nEnter The choice:");
					scanf("%d",&sweetchoice);
					switch(sweetchoice)
					{
						case 1:
							printf("\nYou have selected Gulabjamun");
							printf("Enter the number of plates: \n");
							scanf("%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected suji kajukatri");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected sonpapdi");
							printf("\nEnter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;

					}//end of switch
					break;

				case 5:
					goto start;
			}  //end of switch

			
			break;
		case 5:
			printf("\n You have selected chinese food");
			printf("\n1----------chinese soup");
			printf("\n2---------veg. fried rice");
			printf("\n3--------- Noodles");
			printf("\n4----------Hakka Noodles");
			printf("\n5---------goto main menu");
			printf("\nEnter The choice:");
			scanf("%d",&chinesechoice);
			switch(chinesechoice)
			{
				case 1:
					printf("You have selected chinese soup ");
					printf("\n1-----------hot soup");
					printf("\n2----------cool soup");
					printf("\n3---------- veg. soup");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&soupch);
					switch(soupch)
					{
						case 1:
							printf("\nYou have selected hot soup");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected cool soup");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("You have selected veg. soup");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
				case 2:
					printf("You have selected veg. fried rice");
					printf("\n1----------veg. fried rice with butter");
					printf("\n2----------veg. fried rice with chese");
					printf("\n3---------- garlic veg. fried rice");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&ricech);
					switch(ricech)
					{
						case 1:
							printf("\nYou have selected veg. fried rice with butter");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected veg. fried rice with chese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected garlic veg. fried rice");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;
				case 3:
					printf("You have selected noodles");
					printf("\n1----------noodles with cheese");
					printf("\n2----------Garlic noodles");
					printf("\n3---------- sweet noodles");
					printf("\n4---------goto main menu");
					printf("\n Enter Your choice:");
					scanf("%d",&noodlesch);
					switch(noodlesch)
					{
						case 1:
							printf("\nYou have selected noodleswith cheese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected Garlic noodles");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected sweet noodles");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;	
				case 4:
					printf("You have selected hakka noodles");
					printf("\n1---------- hakka noodles with cheese");
					printf("\n2----------Garlic  hakka noodles");
					printf("\n3---------- butter  hakka noodles");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",& hakkanoodlesch);
					switch( hakkanoodlesch)
					{
						case 1:
							printf("\nYou have selected hakka noodles with cheese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected Garlic  hakka noodles");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected butter  hakka noodles");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;
				case 5:
					goto start;	
			}//end of switch
			break;
		
		case 6:
			printf("\n You have selected Marathi food");
			printf("\n1----------marathi sabji");
			printf("\n2---------veg soup");
			printf("\n3--------- bhakhri");
			printf("\n4----------buttermilk");
			printf("\n5---------goto main menu");
			printf("\nEnter The choice:");
			scanf("%d",&marathichoice);
			switch(marathichoice)
			{
				case 1:
					printf("You have selected marathi sabji");
					printf("\n1----------regular marathi sabji");
					printf("\n2----------jain marathi sabji");
					printf("\n3---------- jain masala sabji");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&marathisabjich);
					switch(marathisabjich)
					{
						case 1:
							printf("\nYou have selected regular marathi sabji");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected jain marathi sabji");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("You have selected jain masala sabji");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
				case 2:
					printf("You have selected veg soup");
					printf("\n1----------Paneer veg soup");
					printf("\n2----------Garlic veg soup");
					printf("\n3---------- butter veg soup");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&marathisupchoice);
					switch(marathisupchoice)
					{
						case 1:
							printf("\nYou have selected panner veg soup");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected garlic veg soup");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected butter veg soup");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;
				case 3:
					printf("You have selected bhakhri");
					printf("\n1----------  bhakhri with cheese");
					printf("\n2----------Garlic  bhakhri");
					printf("\n3---------- sweet  bhakhri");
					printf("\n4---------goto main menu");
					printf("\n Enter Your choice:");
					scanf("%d",&bhakhrich);
					switch(bhakhrich)
					{
						case 1:
							printf("\nYou have selected  bhakhri with cheese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected Garlic  bhakhri");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected sweet  bhakhri");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;	
				case 4:
					printf("You have selected buttermilk");
					printf("\n1----------jira buttermilk");
					printf("\n2----------soft buttermilk");
					printf("\n3---------- masala buttermilk");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&bmch);
					switch(bmch)
					{
						case 1:
							printf("\nYou have selected jira buttermilk");
							printf("Enter the number of glasses: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected soft buttermilk");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected masala buttermilk");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;
				case 5:
					goto start;	
			}//end of switch
			break;
		case 7:
			printf("\n You have selected Kathiyavadi food");
			printf("\n1----------odo");
			printf("\n2---------rotla");
			printf("\n3--------- butter");
			printf("\n4----------buttermilk");
			printf("\n5---------goto main menu");
			printf("\nEnter The choice:");
			scanf("%d",&kfoodch);
			switch(kfoodch)
			{
				case 1:
					printf("You have selected odo");
					printf("\n1----------odo with cheese");
					printf("\n2----------Garlic odo");
					printf("\n3---------- cheese odo");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&odoch);
					switch(odoch)
					{
						case 1:
							printf("\nYou have selected odo with cheese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected Garlic odo");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("You have selected cheese odo");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
				case 2:
					printf("You have selected rotlo");
					printf("\n1--------- rotlo with cheese");
					printf("\n2----------Garlic rotlo");
					printf("\n3---------- butter rotlo");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&rotloch);
					switch(rotloch)
					{
						case 1:
							printf("\nYou have selected  rotlo with cheese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected Garlic rotlo");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected butter rotlo");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;
				case 3:
					printf("You have selected butter");
					printf("\n1----------soft butter");
					printf("\n2----------strong butter");
					printf("\n3-----------melt butter");
					printf("\n4---------goto main menu");
					printf("\n Enter Your choice:");
					scanf("%d",&butterch);
					switch(butterch)
					{
						case 1:
							printf("\nYou have selected soft butter");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected strong butter");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected melt butter");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;	
				case 4:
					printf("You have selected buttermilk");
					printf("\n1----------masala buttermilk");
					printf("\n2----------jira butermilk");
					printf("\n3---------- soft buttermilk");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&bchoice);
					switch(bchoice)
					{
						case 1:
							printf("\nYou have selected masala buttermilk");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected jira butermilk");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected soft buttermilk");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;
				case 5:
					goto start;	
			}//end of switch
			break;
		case 8:
			printf("\n You have selected Maxican");
			printf("\n1--------- Machaca");
			printf("\n2---------Menudo");
			printf("\n3---------Huevos Rancheros");
			printf("\n4----------tacos");
			printf("\n5---------goto main menu");
			printf("\nEnter The choice:");
			scanf("%d",&maxicanch);
			switch(maxicanch)
			{
				case 1:
					printf("You have selected Machaca");
					printf("\n1----------Paneer Machaca");
					printf("\n2----------Garlic paneer Machaca");
					printf("\n3---------- paneer cheese Machaca");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&machacach);
					switch(machacach)
					{
						case 1:
							printf("\nYou have selected Paneer Machaca");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected Garlic paneer Machaca");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("You have selected paneer cheese Machaca");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
				case 2:
					printf("You have selected Menudo ");
					printf("\n1----------Menudo cheese");
					printf("\n2----------Garlic Menudo");
					printf("\n3---------- butter Menudo");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&menudoch);
					switch(menudoch)
					{
						case 1:
							printf("\nYou have selected Menudo cheese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected Garlic Menudo");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected butter Menudo");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;
				case 3:
					printf("You have selected Huevos Rancheros");
					printf("\n1----------Huevos Rancheros with cheese");
					printf("\n2----------Garlic Huevos Rancheros");
					printf("\n3---------- sweet Huevos Rancheros");
					printf("\n4---------goto main menu");
					printf("\n Enter Your choice:");
					scanf("%d",&hch);
					switch(hch)
					{
						case 1:
							printf("\nYou have selected Huevos Rancheros with cheese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected Garlic Huevos Rancheros");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected sweet Huevos Rancheros");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;	
				case 4:
					printf("You have selected Tacos");
					printf("\n1----------Tacos with cheese");
					printf("\n2----------Garlic Tacos");
					printf("\n3---------- butter paneer Tacos");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&tchoice);
					switch(tchoice)
					{
						case 1:
							printf("\nYou have selected Tacos with cheese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected Garlic Tacos");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected butter paneer Tacos");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;
				case 5:
					goto start;	
			}//end of switch
			break;
		case 9:
			printf("\n You have selected Deserts");
			printf("\n1----------Apple crisp");
			printf("\n2---------corn");
			printf("\n3----------ice-cream");
			printf("\n4----------cake");
			printf("\n5---------goto main menu");
			printf("\nEnter The choice:");
			scanf("%d",&dch);
			switch(dch)
			{
				case 1:
					printf("You have selected Apple crisp");
					printf("\n1----------chocolate Apple crisp");
					printf("\n2----------mango Apple crisp");
					printf("\n3---------- pinaple Apple crisp");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&applecrispch);
					switch(applecrispch)
					{
						case 1:
							printf("\nYou have selected chocolate Apple crisp");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected mango Apple crisp");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("You have selected  pinaple Apple crisp");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
				case 2:
					printf("You have selected corn");
					printf("\n1----------chocolate corn");
					printf("\n2---------- orange corn");
					printf("\n3---------- pinaple corn");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&cornch);
					switch(cornch)
					{
						case 1:
							printf("\nYou have selected chocolate corn");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected orange corn");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected pinaple corn");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;
				case 3:
					printf("You have selected ice-cream");
					printf("\n1----------kaju-badam");
					printf("\n2----------raj-bhog");
					printf("\n3---------- american nuts");
					printf("\n4---------goto main menu");
					printf("\n Enter Your choice:");
					scanf("%d",&icech);
					switch(icech)
					{
						case 1:
							printf("\nYou have selected kaju-badam");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected raj-bhog");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected american nuts");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;	
				case 4:
					printf("You have selected cake");
					printf("\n1----------choco cake");
					printf("\n2----------dry-fruit cake");
					printf("\n3---------- barby cake");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&cakechoice);
					switch(cakechoice)
					{
						case 1:
							printf("\nYou have selected choco cake");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected dry-fruit cake");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected barby cake");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;
				case 5:
					goto start;	
			}//end of switch
			break;
		
		case 10:
			printf("\n You have selected American food");
			printf("\n1----------starters");
			printf("\n2---------soups");
			printf("\n3--------- desert");
			printf("\n4----------Drinks");
			printf("\n5---------goto main menu");
			printf("\nEnter The choice:");
			scanf("%d",&ach);
			switch(ach)
			{
				case 1:
					printf("You have selected Paneer butter masala");
					printf("\n1----------crispy corn");
					printf("\n2----------paneer manchurian");
					printf("\n3----------cheese balls");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&startersch);
					switch(startersch)
					{
						case 1:
							printf("\nYou have selected crispy corn");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected paneer manchurian");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("You have selected cheese balls");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
				case 2:
					printf("You have selected soups");
					printf("\n1----------Tometo soup");
					printf("\n2----------Hot and sour soup");
					printf("\n3---------- garlic soup");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&sch);
					switch(sch)
					{
						case 1:
							printf("\nYou have selected Tometo soup");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected Hot and sour soup");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected  garlic soup");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;
				case 3:
					printf("You have selected Deserts");
					printf("\n1----------Peach Cobbler");
					printf("\n2----------American nuts");
					printf("\n3---------- Vanilla Gelato");
					printf("\n4---------goto main menu");
					printf("\n Enter Your choice:");
					scanf("%d",&desch);
					switch(desch)
					{
						case 1:
							printf("\nYou have selected Peach Cobbler");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected American nuts");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected Vanilla Gelato");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;	
				case 4:
					printf("You have selected Drinks");
					printf("\n1----------Coke Zero");
					printf("\n2----------Fanta");
					printf("\n3---------- Folgers");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&drchoice);
					switch(drchoice)
					{
						case 1:
							printf("\nYou have selected coke zero");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected Fanta");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected Folgers");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;
				case 5:
					goto start;	
			}//end of switch
			break;
		case 11:
			printf("\n You have selected pizza");
			printf("\n1---------- Chicago Pizza");
			printf("\n2---------Neapolitan Pizza");
			printf("\n3---------  Detroit Pizza");
			printf("\n4----------California Pizza");
			printf("\n5---------goto main menu");
			printf("\nEnter The choice:");
			scanf("%d",&pizzach);
			switch(pizzach)
			{
				case 1:
					printf("You have selected Chicago Pizza");
					printf("\n1----------pizza with cheese");
					printf("\n2----------Garlic pizza");
					printf("\n3---------- paneer cheese pizza");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&chicagoch);
					switch(chicagoch)
					{
						case 1:
							printf("\nYou have selected pizza with cheese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected Garlic pizza");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("You have selected paneer cheese pizza");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
				break;
				case 2:
					printf("You have selected Neapolitan Pizza");
					printf("\n1----------pizza with cheese");
					printf("\n2----------Garlic pizza");
					printf("\n3---------- butter paneer pizza");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&neapolitanpizza);
					switch(neapolitanpizza)
					{
						case 1:
							printf("\nYou have selected pizza with cheese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected Garlic pizza");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected butter paneer pizza");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;
				case 3:
					printf("You have selected Detroit Pizza");
					printf("\n1----------pizza with cheese");
					printf("\n2----------Garlic pizza");
					printf("\n3---------- butter paneer pizza");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&dpch);
					switch(dpch)
					{
						case 1:
							printf("\nYou have selected pizza with cheese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected Garlic pizza");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected butter paneer pizza");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;	
				case 4:
					printf("You have selected California pizza");
					printf("\n1----------Paneer masala with cheese");
					printf("\n2----------Garlic paneer masala");
					printf("\n3---------- butter paneer masala");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&cpch);
					switch(cpch)
					{
						case 1:
							printf("\nYou have selected Paneer masala with cheese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected Garlic paneer masala");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected butter paneer masala");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;
				case 5:
					goto start;	
			}//end of switch
			break;
		case 12:
			printf("\n You have selected Dabeli");
			printf("\n1----------Paneer butter dabeli");
			printf("\n2---------paneer dabeli");
			printf("\n3--------- cheese dabeli");
			printf("\n4----------masala dabeli");
			printf("\n5---------goto main menu");
			printf("\nEnter The choice:");
			scanf("%d",&dabelichoice);
			switch(dabelichoice)
			{
				case 1:
					printf("You have selected Paneer butter dabeli");
					printf("\n1----------Paneer butter masala with cheese");
					printf("\n2----------Garlic paneer butter masala");
					printf("\n3---------- paneer cheese");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&dabelich);
					switch(dabelich)
					{
						case 1:
							printf("\nYou have selected Paneer butter Masala with cheese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected garlic paneer butter masala");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("You have selected paneer cheese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
				case 2:
					printf("You have selected Paneer dabeli");
					printf("\n1----------Paneer kofta with cheese");
					printf("\n2----------Garlic paneer kofta");
					printf("\n3---------- butter paneer kofta");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&paneerdchoice);
					switch(paneerdchoice)
					{
						case 1:
							printf("\nYou have selected Paneer kofta with cheese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected garlic paneer kofta");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected butter paneer kofta");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;
				case 3:
					printf("You have selected chese dabeli");
					printf("\n1----------koyakaju with cheese");
					printf("\n2----------Garlic koyakaju kofta");
					printf("\n3---------- sweet koyakaju");
					printf("\n4---------goto main menu");
					printf("\n Enter Your choice:");
					scanf("%d",&dabelicch);
					switch(dabelicch)
					{
						case 1:
							printf("\nYou have selected koyakaju with cheese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected Garlic koyakaju kofta");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected sweet koyakaju");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;	
				case 4:
					printf("You have selected Masala dabeli");
					printf("\n1----------Paneer masala with cheese");
					printf("\n2----------Garlic paneer masala");
					printf("\n3---------- butter paneer masala");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&paneermasaladchoice);
					switch(paneermasaladchoice)
					{
						case 1:
							printf("\nYou have selected Paneer masala with cheese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected Garlic paneer masala");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected butter paneer masala");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;
				case 5:
					goto start;	
			}//end of switch
			break;
		case 13:
			printf("\n You have selected Sendwich");
			printf("\n1----------veg. sendwich");
			printf("\n2---------aaloo sendwich");
			printf("\n3--------- mutter senwich");
			printf("\n4----------Grilled Cheese");
			printf("\n5---------goto main menu");
			printf("\nEnter The choice:");
			scanf("%d",&sendwichchoice);
			switch(sendwichchoice)
			{
				case 1:
					printf("You have selected Sendwich");
					printf("\n1---------- cheese sendwich");
					printf("\n2----------Garlic sendwich");
					printf("\n3---------- paneer cheese sendwich");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&s1ch);
					switch(s1ch)
					{
						case 1:
							printf("\nYou have selected cheese sendwich");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected Garlic sendwich");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("You have selected paneer cheese sendwich");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
				case 2:
					printf("You have selected aaloo sendwich");
					printf("\n1----------sendwich with cheese");
					printf("\n2----------Garlic sendwich");
					printf("\n3---------- butter paneer sendwich");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&aluch);
					switch(aluch)
					{
						case 1:
							printf("\nYou have selected sendwich with cheese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected Garlic sendwich");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected butter paneer sendwich");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;
				case 3:
					printf("You have selected mutter senwich");
					printf("\n1----------sendwich with cheese");
					printf("\n2----------Garlic sendwich");
					printf("\n3---------- sweet sendwich");
					printf("\n4---------goto main menu");
					printf("\n Enter Your choice:");
					scanf("%d",&mch);
					switch(mch)
					{
						case 1:
							printf("\nYou have selected sendwich with cheese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected Garlic sendwich");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected sweet sendwich");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;	
				case 4:
					printf("You have selected Grilled sendwich");
					printf("\n1----------Paneer masala sendwich");
					printf("\n2----------Garlic paneer masala  sendwich");
					printf("\n3---------- butter paneer masala  sendwich");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&gchoice);
					switch(gchoice)
					{
						case 1:
							printf("\nYou have selected Paneer masala with cheese  sendwich");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected Garlic paneer masala  sendwich");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected butter paneer masala  sendwich");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;
				case 5:
					goto start;	
			}//end of switch
			break;
		case 14:
			printf("\n You have selected Bhaji-pav");
			printf("\n1----------Paneer bhajipav");
			printf("\n2---------mutter pavbhaji");
			printf("\n3----------jain bhaji pav");
			printf("\n4----------Paneer masala bhaji");
			printf("\n5---------goto main menu");
			printf("\nEnter The choice:");
			scanf("%d",&bhajipavchoice);
			switch(bhajipavchoice)
			{
				case 1:
					printf("You have selected Paneer bhajipav");
					printf("\n1----------Paneer butter masala with cheese");
					printf("\n2----------Garlic paneer butter masala");
					printf("\n3---------- paneer cheese");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&bjch);
					switch(bjch)
					{
						case 1:
							printf("\nYou have selected Paneer butter Masala with cheese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected garlic paneer butter masala");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("You have selected paneer cheese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
				case 2:
					printf("You have selected mutter pavbhaji");
					printf("\n1----------Paneer kofta with cheese");
					printf("\n2----------Garlic paneer kofta");
					printf("\n3---------- butter paneer kofta");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&pjchoice);
					switch(pjchoice)
					{
						case 1:
							printf("\nYou have selected Paneer kofta with cheese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected garlic paneer kofta");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected butter paneer kofta");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;
				case 3:
					printf("You have selected jain bhaji pav");
					printf("\n1----------koyakaju with cheese");
					printf("\n2----------Garlic koyakaju kofta");
					printf("\n3---------- sweet koyakaju");
					printf("\n4---------goto main menu");
					printf("\n Enter Your choice:");
					scanf("%d",&jpch);
					switch(jpch)
					{
						case 1:
							printf("\nYou have selected koyakaju with cheese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected Garlic koyakaju kofta");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected sweet koyakaju");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;	
				case 4:
					printf("You have selected Paneer Masala bhaji");
					printf("\n1----------Paneer masala with cheese");
					printf("\n2----------Garlic paneer masala");
					printf("\n3---------- butter paneer masala");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&pmjchoice);
					switch(pmjchoice)
					{
						case 1:
							printf("\nYou have selected Paneer masala with cheese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected Garlic paneer masala");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected butter paneer masala");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;
				case 5:
					goto start;	
			}//end of switch
			break;
		case 15:
			printf("\n You have selected vadapav");
			printf("\n1----------Paneer butter masala vadapav");
			printf("\n2---------paneer kofta vadapav");
			printf("\n3--------- Koya kaju vadapav");
			printf("\n4----------Paneer masala vadapav ");
			printf("\n5---------goto main menu");
			printf("\nEnter The choice:");
			scanf("%d",&vadapavch);
			switch(vadapavch)
			{
				case 1:
					printf("You have selected Paneer butter masala vadapavch");
					printf("\n1----------Paneer butter masala with cheese vadapavch");
					printf("\n2----------Garlic paneer butter masala vadapavch");
					printf("\n3---------- paneer cheese vadapavch");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&paneerbuttermasalach);
					switch(paneerbuttermasalach)
					{
						case 1:
							printf("\nYou have selected Paneer butter Masala with cheese vadapav");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected garlic paneer butter masala vadapav");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("You have selected paneer cheese vadapavch");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
				case 2:
					printf("You have selected Paneer kofta vadapav");
					printf("\n1----------Paneer kofta with cheese vadapav");
					printf("\n2----------Garlic paneer kofta vadapav");
					printf("\n3---------- butter paneer kofta vadapav");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&pkvchoice);
					switch(pkvchoice)
					{
						case 1:
							printf("\nYou have selected Paneer kofta with cheese vadapav");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected garlic paneer kofta vadapav+");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected butter paneer kofta");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;
				case 3:
					printf("You have selected paneer kofta vadapav");
					printf("\n1----------koyakaju with cheese");
					printf("\n2----------Garlic koyakaju kofta");
					printf("\n3---------- sweet koyakaju");
					printf("\n4---------goto main menu");
					printf("\n Enter Your choice:");
					scanf("%d",&koyakajuvch);
					switch(koyakajuvch)
					{
						case 1:
							printf("\nYou have selected koyakaju with cheese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected Garlic koyakaju kofta");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected sweet koyakaju");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;	
				case 4:
					printf("You have selected Koya kaju vadapav");
					printf("\n1----------Paneer masala with cheese");
					printf("\n2----------Garlic paneer masala");
					printf("\n3---------- butter paneer masala");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&v1choice);
					switch(v1choice)
					{
						case 1:
							printf("\nYou have selected Paneer masala with cheese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected Garlic paneer masala");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected butter paneer masala");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;
				case 5:
					goto start;	
			}//end of switch
			break;
		case 16:
			printf("\n You have selected samosa");
			printf("\n1----------Paneer butter masala samosa");
			printf("\n2---------paneer kofta samosa");
			printf("\n3--------- Koya kaju samosa");
			printf("\n4----------Paneer masala samosa");
			printf("\n5---------goto main menu");
			printf("\nEnter The choice:");
			scanf("%d",&samosachoice);
			switch(samosachoice)
			{
				case 1:
					printf("You have selected Paneer butter masala samosa");
					printf("\n1----------Paneer butter masala with cheese samosa");
					printf("\n2----------Garlic paneer butter masala samosa");
					printf("\n3---------- paneer cheese samosa");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&samosach);
					switch(samosach)
					{
						case 1:
							printf("\nYou have selected Paneer butter Masala with cheesesamosa");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected garlic paneer butter masala samosa");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("You have selected paneer cheese samosa");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
				case 2:
					printf("You have selected Paneer kofta samosa");
					printf("\n1----------Paneer kofta with cheese samosa");
					printf("\n2----------Garlic paneer kofta samosa");
					printf("\n3---------- butter paneer kofta samosa");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&paneerkoftaschoice);
					switch(paneerkoftaschoice)
					{
						case 1:
							printf("\nYou have selected Paneer kofta with cheese samosa");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected garlic paneer kofta samosa");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected butter paneer kofta samosa");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;
				case 3:
					printf("You have selected koyakaju samaosa");
					printf("\n1----------koyakaju with cheese");
					printf("\n2----------Garlic koyakaju kofta");
					printf("\n3---------- sweet koyakaju");
					printf("\n4---------goto main menu");
					printf("\n Enter Your choice:");
					scanf("%d",&koyakajusch);
					switch(koyakajusch)
					{
						case 1:
							printf("\nYou have selected koyakaju with cheese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected Garlic koyakaju kofta");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected sweet koyakaju");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;	
				case 4:
					printf("You have selected Paneer Masala samosa");
					printf("\n1----------Paneer masala with cheese");
					printf("\n2----------Garlic paneer masala");
					printf("\n3---------- butter paneer masala");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&paneermasalaschoice);
					switch(paneermasalaschoice)
					{
						case 1:
							printf("\nYou have selected Paneer masala with cheese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected Garlic paneer masala");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected butter paneer masala");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;
				case 5:
					goto start;	
			}//end of switch
			break;
		case 17:
			printf("\n You have selected kachori");
			printf("\n1----------Paneer butter masala  kachori");
			printf("\n2---------paneer kofta kachori");
			printf("\n3--------- Koya kaju kachori");
			printf("\n4----------Paneer masala kachori");
			printf("\n5---------goto main menu");
			printf("\nEnter The choice:");
			scanf("%d",&kchoice);
			switch(kchoice)
			{
				case 1:
					printf("You have selected Paneer butter masala  kachori");
					printf("\n1----------Paneer butter masala with cheese  kachori");
					printf("\n2----------Garlic paneer butter masala   kachori");
					printf("\n3---------- paneer cheese kachori");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&pkchoice);
					switch(pkchoice)
					{
						case 1:
							printf("\nYou have selected Paneer butter Masala with cheese  kachori");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected garlic paneer butter masala  kachori");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("You have selected paneer cheese kachori");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
				case 2:
					printf("You have selected Paneer kofta  kachori");
					printf("\n1----------Paneer kofta with cheese kachori");
					printf("\n2----------Garlic paneer kofta kachori");
					printf("\n3---------- butter paneer kofta kachori");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&paneerkoftakchoice);
					switch(paneerkoftakchoice)
					{
						case 1:
							printf("\nYou have selected Paneer kofta with cheese kachori");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected garlic paneer kofta kachori");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected butter paneer kofta kachori");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;
				case 3:
					printf("You have selected koyakaj kachori");
					printf("\n1----------koyakaju with cheese kachori");
					printf("\n2----------Garlic koyakaju kofta kachori");
					printf("\n3---------- sweet koyakaju kachori");
					printf("\n4---------goto main menu");
					printf("\n Enter Your choice:");
					scanf("%d",&koyakajukch);
					switch(koyakajukch)
					{
						case 1:
							printf("\nYou have selected koyakaju with cheese kachori");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected Garlic koyakaju kofta kachori");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected sweet koyakaju  kachori");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;	
				case 4:
					printf("You have selected Paneer Masala  kachori");
					printf("\n1----------Paneer masala with cheese kachori");
					printf("\n2----------Garlic paneer masala kachori");
					printf("\n3---------- butter paneer masala kachori");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&paneermasalakchoice);
					switch(paneermasalakchoice)
					{
						case 1:
							printf("\nYou have selected Paneer masala with cheese kachori");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected Garlic paneer masala kachori");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected butter paneer masala kachori");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;
				case 5:
					goto start;	
			}//end of switch
			break;
		case 18:
			printf("\n You have selected soups");
			printf("\n1----------Tometo Soup");
			printf("\n2----------Hot & sour soup");
			printf("\n3---------Lentil Soup ");
			printf("\n4----------Paneer masala");
			printf("\n5---------goto main menu");
			printf("\nEnter The choice:");
			scanf("%d",&s1choice);
			switch(s1choice)
			{
				case 1:
					printf("You have selected tometo soup");
					printf("\n1----------Paneer butter masala with cheese soup");
					printf("\n2----------Garlic paneer butter masala soup");
					printf("\n3---------- Lentil Soup");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&s2ch);
					switch(s2ch)
					{
						case 1:
							printf("\nYou have selected Paneer butter Masala with cheese soup");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected garlic paneer butter masala soup");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("You have selected paneer cheesesoup");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
				case 2:
					printf("You have selected Paneer kofta soup");
					printf("\n1----------Paneer kofta with cheese");
					printf("\n2----------Garlic paneer kofta");
					printf("\n3---------- butter paneer kofta");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&s3ch);
					switch(paneerkoftachoice)
					{
						case 1:
							printf("\nYou have selected Paneer kofta with cheese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected garlic paneer kofta");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected butter paneer kofta");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;
				case 3:
					printf("You have selected koyakaju soup");
					printf("\n1----------koyakaju with cheese");
					printf("\n2----------Garlic koyakaju kofta");
					printf("\n3---------- sweet koyakaju");
					printf("\n4---------goto main menu");
					printf("\n Enter Your choice:");
					scanf("%d",&s4ch);
					switch(s4ch)
					{
						case 1:
							printf("\nYou have selected koyakaju with cheese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected Garlic koyakaju kofta");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected sweet koyakaju");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;	
				case 4:
					printf("You have selected Paneer Masala");
					printf("\n1----------Paneer masala with cheese");
					printf("\n2----------Garlic paneer masala");
					printf("\n3---------- butter paneer masala");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&s5ch);
					switch(s5ch)
					{
						case 1:
							printf("\nYou have selected Paneer masala with cheese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected Garlic paneer masala");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected butter paneer masala");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;
				case 5:
					goto start;	
			}//end of switch
			break;
		case 19:
			printf("\n You have selected Manchrian");
			printf("\n1----------veg. manchurian");
			printf("\n2---------paneer kofta");
			printf("\n3--------- Koya kaju");
			printf("\n4----------Paneer masala");
			printf("\n5---------goto main menu");
			printf("\nEnter The choice:");
			scanf("%d",&mnchoice);
			switch(mnchoice)
			{
				case 1:
					printf("You have selected veg. manchurian");
					printf("\n1----------Paneer butter manchurian");
					printf("\n2----------Garlic manchurian");
					printf("\n3---------- paneer manchurian");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&vmnch);
					switch(vmnch)
					{
						case 1:
							printf("\nYou have selected Paneer butter manchurian");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected Garlic manchurian");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("You have selected paneer manchurian");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
				case 2:
					printf("You have selected Paneer kofta");
					printf("\n1----------Paneer kofta with cheese");
					printf("\n2----------Garlic paneer kofta");
					printf("\n3---------- butter paneer kofta");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&paneerkoftamnchoice);
					switch(paneerkoftamnchoice)
					{
						case 1:
							printf("\nYou have selected Paneer kofta with cheese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected garlic paneer kofta");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected butter paneer kofta");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;
				case 3:
					printf("You have selected koyakaju");
					printf("\n1----------koyakaju with cheese");
					printf("\n2----------Garlic koyakaju kofta");
					printf("\n3---------- sweet koyakaju");
					printf("\n4---------goto main menu");
					printf("\n Enter Your choice:");
					scanf("%d",&koyakajumnch);
					switch(koyakajumnch)
					{
						case 1:
							printf("\nYou have selected koyakaju with cheese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected Garlic koyakaju kofta");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected sweet koyakaju");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;	
				case 4:
					printf("You have selected Paneer Masala");
					printf("\n1----------Paneer masala with cheese");
					printf("\n2----------Garlic paneer masala");
					printf("\n3---------- butter paneer masala");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&paneermasalamnchoice);
					switch(paneermasalamnchoice)
					{
						case 1:
							printf("\nYou have selected Paneer masala with cheese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected Garlic paneer masala");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected butter paneer masala");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;
				case 5:
					goto start;	
			}//end of switch
			break;
		case 20:
			printf("\n You have selected chat");
			printf("\n1----------Paneer butter masala chat");
			printf("\n2---------paneer kofta chat");
			printf("\n3--------- Koya kaju chat");
			printf("\n4----------Paneer masala chat");
			printf("\n5---------goto main menu");
			printf("\nEnter The choice:");
			scanf("%d",&chatchoice);
			switch(chatchoice)
			{
				case 1:
					printf("You have selected Paneer butter masala chat");
					printf("\n1----------Paneer butter masala with cheese");
					printf("\n2----------Garlic paneer butter masala");
					printf("\n3---------- paneer cheese");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&c1choice);
					switch(c1choice)
					{
						case 1:
							printf("\nYou have selected Paneer butter Masala with cheese chat");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected garlic paneer butter masala chat");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("You have selected paneer cheese chat");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
				case 2:
					printf("You have selected Paneer kofta chat");
					printf("\n1----------Paneer kofta with cheese");
					printf("\n2----------Garlic paneer kofta");
					printf("\n3---------- butter paneer kofta");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&c2choice);
					switch(c2choice)
					{
						case 1:
							printf("\nYou have selected Paneer kofta with cheesechat");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected garlic paneer kofta chat");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected butter paneer kofta chat");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;
				case 3:
					printf("You have selected koyakaju");
					printf("\n1----------koyakaju with cheese");
					printf("\n2----------Garlic koyakaju kofta");
					printf("\n3---------- sweet koyakaju");
					printf("\n4---------goto main menu");
					printf("\n Enter Your choice:");
					scanf("%d",&c3choice);
					switch(c3choice)
					{
						case 1:
							printf("\nYou have selected koyakaju with cheese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected Garlic koyakaju kofta");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected sweet koyakaju");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;	
				case 4:
					printf("You have selected Paneer Masala");
					printf("\n1----------Paneer masala with cheese");
					printf("\n2----------Garlic paneer masala");
					printf("\n3---------- butter paneer masala");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&c4choice);
					switch(c4choice)
					{
						case 1:
							printf("\nYou have selected Paneer masala with cheese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected Garlic paneer masala");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected butter paneer masala");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;
				case 5:
					goto start;	
			}//end of switch
			break;
		case 21:
			printf("\n You have selected bhel");
			printf("\n1----------Paneer butter masala bhel");
			printf("\n2---------paneer kofta bhel");
			printf("\n3--------- Koya kaju bhel");
			printf("\n4----------Paneer masala bhel");
			printf("\n5---------goto main menu");
			printf("\nEnter The choice:");
			scanf("%d",&bhelchoice);
			switch(bhelchoice)
			{
				case 1:
					printf("You have selected Paneer butter masala bhel");
					printf("\n1----------Paneer butter masala with cheese bhel");
					printf("\n2----------Garlic paneer butter masala bhel");
					printf("\n3---------- paneer cheese bhel");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&bl1ch);
					switch(bl1ch)
					{
						case 1:
							printf("\nYou have selected Paneer butter Masala with cheese bhel");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected garlic paneer butter masala bhel");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("You have selected paneer cheesebhel");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
				case 2:
					printf("You have selected Paneer koftabhel");
					printf("\n1----------Paneer kofta with cheese bhel");
					printf("\n2----------Garlic paneer kofta bhel");
					printf("\n3---------- butter paneer kofta bhel");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&bl2ch);
					switch(bl2ch)
					{
						case 1:
							printf("\nYou have selected Paneer kofta with cheese bhel");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected garlic paneer kofta bhel");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected butter paneer kofta bhel");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;
				case 3:
					printf("You have selected koyakaju bhel");
					printf("\n1----------koyakaju with cheese bhel");
					printf("\n2----------Garlic koyakaju kofta bhel");
					printf("\n3---------- sweet koyakaju bhel");
					printf("\n4---------goto main menu");
					printf("\n Enter Your choice:");
					scanf("%d",&bl3ch);
					switch(bl3ch)
					{
						case 1:
							printf("\nYou have selected koyakaju with cheese bhel");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected Garlic koyakaju kofta bhel");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected sweet koyakaju bhel");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;	
				case 4:
					printf("You have selected Paneer Masala bhel");
					printf("\n1----------Paneer masala with chees bhele");
					printf("\n2----------Garlic paneer masala bhel");
					printf("\n3---------- butter paneer masala bhel");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&bl4ch);
					switch(bl4ch)
					{
						case 1:
							printf("\nYou have selected Paneer masala with cheese bhel");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected Garlic paneer masala bhel");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected butter paneer masala bhel");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;
				case 5:
					goto start;	
			}//end of switch
			break;
		case 22:
			printf("\n You have selected breakfast");
			printf("\n1----------butter masala balls");
			printf("\n2---------paneer toast");
			printf("\n3--------- Koya kaju buscuit");
			printf("\n4----------Paneer masala");
			printf("\n5---------goto main menu");
			printf("\nEnter The choice:");
			scanf("%d",&bfchoice);
			switch(bfchoice)
			{
				case 1:
					printf("You have selected butter masala balls");
					printf("\n1----------Paneer butter masala with cheese");
					printf("\n2----------Garlic paneer butter masala");
					printf("\n3---------- paneer cheese");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&paneerbuttermasalabfchoice);
					switch(paneerbuttermasalabfchoice)
					{
						case 1:
							printf("\nYou have selected Paneer butter Masala with cheese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected garlic paneer butter masala");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("You have selected paneer cheese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
				case 2:
					printf("You have selected Paneer kofta");
					printf("\n1----------Paneer kofta with cheese");
					printf("\n2----------Garlic paneer kofta");
					printf("\n3---------- butter paneer kofta");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&paneerkoftabfchoice);
					switch(paneerkoftabfchoice)
					{
						case 1:
							printf("\nYou have selected Paneer kofta with cheese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected garlic paneer kofta");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected butter paneer kofta");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;
				case 3:
					printf("You have selected koyakaju");
					printf("\n1----------koyakaju with cheese");
					printf("\n2----------Garlic koyakaju kofta");
					printf("\n3---------- sweet koyakaju");
					printf("\n4---------goto main menu");
					printf("\n Enter Your choice:");
					scanf("%d",&koyakajubfch);
					switch(koyakajubfch)
					{
						case 1:
							printf("\nYou have selected koyakaju with cheese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected Garlic koyakaju kofta");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected sweet koyakaju");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;	
				case 4:
					printf("You have selected Paneer Masala");
					printf("\n1----------Paneer masala with cheese");
					printf("\n2----------Garlic paneer masala");
					printf("\n3---------- butter paneer masala");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&paneermasalabfchoice);
					switch(paneermasalabfchoice)
					{
						case 1:
							printf("\nYou have selected Paneer masala with cheese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected Garlic paneer masala");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected butter paneer masala");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;
				case 5:
					goto start;	
			}//end of switch
			break;
		case 23:
			printf("\n You have selected Fix thali");
			printf("\n1----------Paneer butter masala");
			printf("\n2---------paneer kofta");
			printf("\n3--------- Koya kaju");
			printf("\n4----------Paneer masala");
			printf("\n5---------goto main menu");
			printf("\nEnter The choice:");
			scanf("%d",&fixchoice);
			switch(fixchoice)
			{
				case 1:
					printf("You have selected Paneer butter masala");
					printf("\n1----------Paneer butter masala with cheese");
					printf("\n2----------Garlic paneer butter masala");
					printf("\n3---------- paneer cheese");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&f1choice);
					switch(f1choice)
					{
						case 1:
							printf("\nYou have selected Paneer butter Masala with cheese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected garlic paneer butter masala");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("You have selected paneer cheese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
				case 2:
					printf("You have selected Paneer kofta");
					printf("\n1----------Paneer kofta with cheese");
					printf("\n2----------Garlic paneer kofta");
					printf("\n3---------- butter paneer kofta");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&f2choice);
					switch(f2choice)
					{
						case 1:
							printf("\nYou have selected Paneer kofta with cheese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected garlic paneer kofta");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected butter paneer kofta");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;
				case 3:
					printf("You have selected koyakaju");
					printf("\n1----------koyakaju with cheese");
					printf("\n2----------Garlic koyakaju kofta");
					printf("\n3---------- sweet koyakaju");
					printf("\n4---------goto main menu");
					printf("\n Enter Your choice:");
					scanf("%d",&f3choice);
					switch(f3choice)
					{
						case 1:
							printf("\nYou have selected koyakaju with cheese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected Garlic koyakaju kofta");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected sweet koyakaju");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;	
				case 4:
					printf("You have selected Paneer Masala");
					printf("\n1----------Paneer masala with cheese");
					printf("\n2----------Garlic paneer masala");
					printf("\n3---------- butter paneer masala");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&f4choice);
					switch(f4choice)
					{
						case 1:
							printf("\nYou have selected Paneer masala with cheese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected Garlic paneer masala");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected butter paneer masala");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;
				case 5:
					goto start;	
			}//end of switch
			break;
		case 24:
			printf("\n You have selected Dait food");
			printf("\n1----------Paneer butter masala");
			printf("\n2---------paneer kofta");
			printf("\n3--------- Koya kaju");
			printf("\n4----------Paneer masala");
			printf("\n5---------goto main menu");
			printf("\nEnter The choice:");
			scanf("%d",&dtchoice);
			switch(dtchoice)
			{
				case 1:
					printf("You have selected Paneer butter masala");
					printf("\n1----------Paneer butter masala with cheese");
					printf("\n2----------Garlic paneer butter masala");
					printf("\n3---------- paneer cheese");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&dt1choice);
					switch(dt1choice)
					{
						case 1:
							printf("\nYou have selected Paneer butter Masala with cheese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected garlic paneer butter masala");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("You have selected paneer cheese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
				case 2:
					printf("You have selected Paneer kofta");
					printf("\n1----------Paneer kofta with cheese");
					printf("\n2----------Garlic paneer kofta");
					printf("\n3---------- butter paneer kofta");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&dt2choice);
					switch(dt2choice)
					{
						case 1:
							printf("\nYou have selected Paneer kofta with cheese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected garlic paneer kofta");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected butter paneer kofta");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;
				case 3:
					printf("You have selected koyakaju");
					printf("\n1----------koyakaju with cheese");
					printf("\n2----------Garlic koyakaju kofta");
					printf("\n3---------- sweet koyakaju");
					printf("\n4---------goto main menu");
					printf("\n Enter Your choice:");
					scanf("%d",&dt3choice);
					switch(dt3choice)
					{
						case 1:
							printf("\nYou have selected koyakaju with cheese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected Garlic koyakaju kofta");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected sweet koyakaju");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;	
				case 4:
					printf("You have selected Paneer Masala");
					printf("\n1----------Paneer masala with cheese");
					printf("\n2----------Garlic paneer masala");
					printf("\n3---------- butter paneer masala");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&dt4choice);
					switch(dt4choice)
					{
						case 1:
							printf("\nYou have selected Paneer masala with cheese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected Garlic paneer masala");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected butter paneer masala");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;
				case 5:
					goto start;	
			}//end of switch
			break;
		case 25:
			printf("\n You have selected frenki");
			printf("\n1----------aaloo frenki");
			printf("\n2---------paneer kofta");
			printf("\n3--------- Koya kaju");
			printf("\n4----------Paneer masala");
			printf("\n5---------goto main menu");
			printf("\nEnter The choice:");
			scanf("%d",&fchoice);
			switch(fchoice)
			{
				case 1:
					printf("You have selected aaloo frnki");
					printf("\n1----------Paneer butter masala with cheese");
					printf("\n2----------Garlic paneer butter masala");
					printf("\n3---------- paneer cheese");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&f1ch);
					switch(f1ch)
					{
						case 1:
							printf("\nYou have selected Paneer butter Masala with cheese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected garlic paneer butter masala");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("You have selected paneer cheese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
				case 2:
					printf("You have selected Paneer kofta");
					printf("\n1----------Paneer kofta with cheese");
					printf("\n2----------Garlic paneer kofta");
					printf("\n3---------- butter paneer kofta");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&f2ch);
					switch(f2ch)
					{
						case 1:
							printf("\nYou have selected Paneer kofta with cheese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected garlic paneer kofta");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected butter paneer kofta");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;
				case 3:
					printf("You have selected koyakaju");
					printf("\n1----------koyakaju with cheese");
					printf("\n2----------Garlic koyakaju kofta");
					printf("\n3---------- sweet koyakaju");
					printf("\n4---------goto main menu");
					printf("\n Enter Your choice:");
					scanf("%d",&f3ch);
					switch(f3ch)
					{
						case 1:
							printf("\nYou have selected koyakaju with cheese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected Garlic koyakaju kofta");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected sweet koyakaju");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;	
				case 4:
					printf("You have selected Paneer Masala");
					printf("\n1----------Paneer masala with cheese");
					printf("\n2----------Garlic paneer masala");
					printf("\n3---------- butter paneer masala");
					printf("\n4---------goto main menu");
					printf("\nEnter The choice:");
					scanf("%d",&f4ch);
					switch(f4ch)
					{
						case 1:
							printf("\nYou have selected Paneer masala with cheese");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 2:
							printf("\nYou have selected Garlic paneer masala");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 3:
							printf("\nYou have selected butter paneer masala");
							printf("Enter the number of plates: \n");
							scanf( "%d",&qty);
							totalprice=qty*PRICE;
							printf("\nThe total price of %d plates is %d",qty,totalprice);
							break;
						case 4:
							goto start;
					}//end of switch
					break;
				case 5:
					goto start;	
			}//end of switch
			break;
		case 26:
			exit(0);
		default:
			printf("You have eneterd invalid choice!!");

	}          //end of switch
	getch();
	goto start;
} //end 	of main