//Contributors
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>



void main(void)
{
	int x,y,z,i,h,g,k,choice=0;
	char name[256];
	int boxNum=0;

	printf("Please enter your name: "); //Input any number of array inputs
	scanf("%s",name);

	printf("Hello %s welcome to the rpgGame!\n",name);
	
	while(choice != 99)
	{
		puts("You find yourself in a dark room and you are not sure how you got here.");
        	puts("As you look around you see the room has 25 doors, each labeled with a number. You are not sure how such a small room can have 25 doors, sooo magic...");
        	puts("The room starts filling with water and you must choose a door to open or you will likely drown. you may quit anytime by selecting option 99");
        	puts("What door do you choose?");
        	scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
			{
				while(choice != 99)
				{

				}
				break;
			}
			case 2:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 3:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 4:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 5:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 6:
			{
					while(choice != 99)
					{
					}
					break;
			}
			case 7:
			{
					while(choice != 99)
				{ 
				}
					break;
			}
			case 8:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 9:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 10:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 11:
			{
					while(choice != 99)
					{
					}
					break;
			}
			case 12:
			{
				puts("you open the door and find a machine that proceeds to teleport you to a distant facility");
				int hp = 20, enemyhp = 20;
				int w, b[3] = { 0,0,0 };		//enemy weakness and boolean for completion
				FILE *fptr;
				int *p = b;
				fptr = fopen("data.txt", "w+");
				if (fscanf(fptr, "%d %d %d", b[0], b[1], b[2]) != 3)
				{
					rewind(fptr);
					puts("A new save file will be created.");
					fprintf(fptr, "%d %d %d", b[0], b[1], b[2]);
				}
				while (choice != 99)
				{

					printf("Soldier: We're glad you made it back, captain %s! What are your orders?\n(Enter -1 to train, 0 to save your progress, or enter 1-3 to play through a particular chapter of this game.)\n", name);
					if ((*(p + 0) + *(p + 1) + *(p + 2)) == 3)
					{
						puts("After completing every chapter you unlocked a bonus scene.(Enter 4 to view it)");
					}
					scanf("%d", &choice);
					if (choice == -1)
					{
						puts("This is just a combat tutorial against a dummy.\nStart by entering 1(to use a gun), 2(to use a sword), 3(to use a spell), or 4(to heal).");
						puts("Enemies have different weaknesses so try to find them to deal more damage to the enemy.");

						enemyhp = 20; w = 4; hp = 20;
						while (choice != 99 && enemyhp > 0)
						{
							printf("You have %d hp and the enemy has %d hp\nWhat is your next move?(1:gun, 2:sword, 3:spell, or 4:heal)\n", hp, enemyhp);
							scanf("%d", &choice);
							enemyhp -= ((choice == w) ? 8 : 2);
							if (enemyhp <= 0)
							{
								break;
							}
							if (choice == 4)
							{
								hp = (hp + 10>20) ? 20 : (hp + 10);
							}
							hp -= 0;
							printf("You dealt %d damage and the enemy dealt 0 damage.\n", ((choice == w) ? 8 : 2));
						}
						puts("Last tip: Casting a spell may help in what would appear to be impossible odds.");
						puts("Congratulations you beat the training level, you will now be sent back to the facility.");
						choice = -2;
					}
					else if (choice == 0)
					{
						rewind(fptr);
						fprintf(fptr, "%d %d %d", b[0], b[1], b[2]);
						puts("Your progress has been saved, you will now return to the facility.");
						choice = -2;
					}
					else if (choice == 1)
					{
						puts("Chapter 1: Fall of a Republic");
						puts("Once the new chancellor was elected he implemented new laws throughout the galaxy.");
						puts("The laws strengthened the military, but rather than being used to protect the Milky Way Republic from the Andromeda Empire it was used to keep the people in line.");
						puts("Former military, local militias, and people fleeing the laws from the center of the galaxy formed a rebellion force around the edges of the Milky Way.");
						puts("We managed to deceive the enemy into sending their main force to our \"secret base\" now we sent our force for an all out attack towards the center.");
						printf("Here we are, facing the force stationed at the capital... - %s - January 24, 3018\n", name);
						enemyhp = 20; w = 3; hp = 20;
						while (choice != 99 && enemyhp > 0 && hp > 0)
						{
							printf("You have %d hp and the enemy soldier has %d hp\nWhat is your next move?(1:gun, 2:sword, 3:spell, or 4:heal)\n", hp, enemyhp);
							scanf("%d", &choice);
							enemyhp -= 2 * ((choice == w) ? 2 : 1)*((choice == 4) ? 0 : 1);
							if (enemyhp <= 0)
							{
								break;
							}
							if (choice == 4)
							{
								hp = (hp + 10>20) ? 20 : (hp + 10);
							}
							hp -= 3;
							printf("You dealt %d damage and the enemy dealt 3 damage.\n", ((choice == w) ? 4 : 2)*((choice == 4) ? 0 : 1));
						}
						b[0] = 1 * (hp>0) ? 1 : 0;
						if (hp <= 0)
						{
							puts("You lost you will now be sent to the facility.");
						}
						choice = -2;
					}
					else if (choice == 2)
					{
						puts("Chapter 2: Life in the Center");
						puts("The chancellor promised everyone jobs once elected and he delivered on his promise... in the most horrible way possible.");
						puts("Plenty of people were rounded up and experimented on with various chemical substances.");
						puts("The chancellor's goal was to make a mindless population that will obey any order given to them by him directly.");
						puts("Many people never survived the experiments because the drug made unnatural changes to the human brain.");
						puts("Those that survived suffer from symptoms such as rotting flesh and fits of rage, some resort to cannabalism. Rumors suggest it's to ease their pain.");
						printf("Here we are, facing the citizins attempting to put them out of their misery... - %s - February 1, 3018\n", name);
						enemyhp = 20; w = 1; hp = 20;
						while (choice != 99 && enemyhp > 0 && hp > 0)
						{
							printf("You have %d hp and the zombie has %d hp\nWhat is your next move?(1:gun, 2:sword, 3:spell, or 4:heal)\n", hp, enemyhp);
							scanf("%d", &choice);
							enemyhp -= 2 * ((choice == w) ? 2 : 1)*((choice == 4) ? 0 : 1);
							if (enemyhp <= 0)
							{
								break;
							}
							if (choice == 4)
							{
								hp = (hp + 10>20) ? 20 : (hp + 10);
							}
							hp -= 4;
							printf("You dealt %d damage and the enemy dealt 4 damage.\n", ((choice == w) ? 4 : 2)*((choice == 4) ? 0 : 1));
						}
						b[1] = 1 * (hp>0) ? 1 : 0;
						if (hp <= 0)
						{
							puts("You lost you will now be sent to the facility.");
						}
						choice = -2;
					}
					else if (choice == 3)
					{
						puts("Chapter 3: End of the Milky Way Government");
						puts("The chancellor is now confronting us directly along with his corrupt officials.");
						puts("People believe the restricting of magic to the general population helped the chancellor rise to power.");
						puts("Other corrupt officials proceeded to use spells to manipulate the population and due to a lack of knowledge on magic nobody could counter their charm spells.");
						puts("This will be our most difficult fight and we must finish this quickly before the main force returns to the capital.");
						puts("If the rumors hold true then the chancellor has a powerful ability that could destroy armies, there must be a way to counter it.");
						printf("Here we are, our last stand and stakess can't be any higher - %s - February 3, 3018\n", name);
						enemyhp = 40; w = 2; hp = 20;
						int timeStop = 0, timeReset = 0;
						while (choice != 99 && enemyhp > 0 && hp > 0)
						{
							printf("You have %d hp and the chancellor has %d hp\nWhat is your next move?(1:gun, 2:sword, 3:spell, or 4:heal)\n", hp, enemyhp);
							scanf("%d", &choice);
							if (timeStop == 1 && choice == 3 && timeReset == 0)
							{
								puts("Chancellor: How can you nullify my time stop ability?!");
								timeReset = 1;
							}
							if (timeStop == 0 || timeReset == 1)
							{
								enemyhp -= ((choice == w) ? 8 : 2)*((choice == 4) ? 0 : 1);
								if (choice == 4)
								{
									hp = (hp + 10>20) ? 20 : (hp + 10);
								}
							}
							else
							{
								puts("You can't do anything because time has stopped.");
							}
							if (enemyhp <= 0)
							{
								break;
							}
							if (timeStop == 0)
							{
								puts("Chancellor: You think this will be enough! TIMESTOP!");
								timeStop = 1;
							}
							hp -= 7;
						}
						b[2] = 1 * (hp>0) ? 1 : 0;
						if (hp <= 0)
						{
							puts("You lost you will now be sent to the facility.");
						}
						choice = -2;
					}
					else if (choice == 4 && (*(p + 0) + *(p + 1) + *(p + 2)) == 3)
					{
						puts("Chapter 4: Return of the Republic");
						puts("After the final battle everyone celebrated our victory it became a holiday.");
						puts("I was the temporarily in charge of the galaxy until the republic rebuilt itself.");
						puts("To ensure such an incident like the one a few years ago would never happen again I decided to run for chancellor.");
						puts("Having popularity with the people and being the rebellion leader made it easy to get elected for several terms.");
						puts("I may not be immortal but I have successors ready to carry on my legacy of a clean government.");
						printf("Here we are, hopefully the Milky Way Republic will remain peaceful until the end of time. - %s - April 27, 3058\n", name);
						choice = -2;
					}
				}
				break;
			}
			case 13:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 14:
			{
					while(choice != 99)
					{
					}
					break;
			}
			case 15:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 16:
			{
					while(choice != 99)
					{
					}
					break;
			}
			case 17:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 18:			
			{
					while(choice != 99)
					{
					}
					break;
			}
			case 19:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 20:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 21:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 22:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 23:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 24:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 25:
			{
					while(choice != 99)
					{
							puts("You open the door and close it behind you.");
							puts("After you overcome the panic from almost drowning, you look around and You find yourself in a cave, the air is damp and you smell mold.");
							puts("You notice a skeleton at your feet with it's right hand clenched around something. The cave ahead leads to a tunnel and you see a door to your right.");
							puts("At this point you have 3 choices:");
							puts("1. Examine the skeleton.");
							puts("2. Proceed further ahead in the cave.");
							puts("3. Enter the door to your right.");
							scanf("%d",&choice);
							if(choice == 1)
							{
								puts("You reach down and pry open the skeleton's hand, a finger breaks loose and you place it in your pocket. Once you pry the opject free you look at it closely in the light and see it is a live grenade and the pin springs free. You drop the grenade and dash through the cave. You can hear the grenade explode, collapsing the tunnel behind you.");
								puts("To be continued...");
								break;
							}
							else if(choice == 2)
							{
								puts("You find yourself further ahead in the cave.");
								puts("To be continued....");
								break;
							}
							else if(choice == 3)
							{
								puts("You enter the and close the door behind you.");
								printf("You hear an loud voice \" %s why do you disturb me? \" \n",name);
                                                                puts("To be continued....");
								break;
							}
							else
							{
								puts("wrong choice");
							}
					}
					break;
				
			
			
				
			}
		}	
	}
    }

