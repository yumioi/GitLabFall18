//Contributors
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <time.h>

//Edgar bahena room: 4

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
			case 4: // Edgar Baheha
			{
					while(choice != 99)
					{
							puts("You decided to open the 4th door,"
								" and you are given 3 more choice."
								" The door closes behind you leaving you"
								" alone to forcably choose a door in order to continue."
								" Each door states a given possiblity"
								" if chosen. The choices are as follow: \n"
								"1. This Door with give you the ability to"
								" understand the 'Truth' of all things\n" 
								"2. This Door will give you the ability to"
								" become 'Untouchable'\n"
								"3. This Door will offer you a chance to 'Redo'"
								" any event you encounter.\n");
							puts("You seem to be hesitant as you decide to choose a door,"
							"but are overwhelmed by the reward that you ignore any consequence");
							puts("Enter the door you choose to continue: ");							
							scanf("%d",&choice);
							if(choice == 1)
							{
								puts("You know everyone and everything."
									"You understand the knowledge of the universe "
									"and humanities purpose, "
									"however it came with a price. "
									"You lose your own benevolence and emotions.\n");
								puts("As you become an emotionless human-being, you understand what you must do, "
									"and in order to fulfill your existance you must exit this place.");
								puts("You continue into the darkness and encounter several beings, some which seem "
									"to be attracted toward you. You have two choices that you may choose from: \n");
								puts("1- Communicate with the group in order to gain allies to help on your journey.\n"
									"2- Offer salvation and destory them.\n");
								scanf("%d",&choice);
								
								if(choice == 1)
								{
									puts("you have gained two allies, a Skeleton Soldier and a Wolf. \n");
									puts(" You talk with your aillies, learning more about their existance "
										"and daily attributes"); 
									puts("As you continue on your journey you finally encounter the final door. ");
									puts("you are given 2 more choices: \n");
									puts("1 - kill off your allies to exit\n"
										"2 - Offer your intellect instead\n");
									scanf("%d",&choice);
								
									if(choice == 1)
									{
										puts("You have chosen wrong, You are stuck in here forever! " );
										puts("You realize that even with all the intellect in the world, "
											"You will never understand true emoton");
										puts("The End");
										
									}
									else if(choice == 2)
									{
										puts("You gave up knowledge in exchange for friendship. "
											"Although you know you did the right thing, you can't "
											"help but think that knowlege was greater than friendship. ");
										puts("Now that you have left the cave, you are free to do anything.");
										puts("The End");
										
									}
									else
									{
										puts("Can you pick right for once?");
									
									}
								}
								else if(choice == 2)
								{
									puts("The mysteries group has been defeated");
									puts(" You slowly feel a presence nearby");
									puts(" As you near the exit, You slowly start to hear sounds "
										"and realize that you are being hunted by the dead ");
									puts("You slowly try to fight back, hwoever are eventually brought down");
									puts("You have died." "The End\n");
									
								} 
								else
								{
									puts("Wrong choice");
									
								}								
							}
							else if(choice == 2)
							{
								puts("You became a being with pure energy."
									"You lost your phyical body and transcended "
									"into a higher plane. "
									"You lost the feeling of touch ,but gained "
									"unreachable power ");
								puts("As you continue on your jorney, you come unto a cross-road "
									"where yuo can decide to choose which one to take: \n");
								puts("1- the left path\n"
									"2- the right path\n");
					  			scanf("%d",&choice);
								if(choice == 1)
								{
									puts("You came upon a lake, you decided to absorb the water with ur new found power. "
										"You soon realize that your only weakness is water.");
									puts("The consequence of your actions led to your death");
									puts("The End."	);
								}
								if(choice == 2)
								{
									puts("You approach a light. It gazes upon you ever so brightly.");
									puts("It's brighter than your own self, and a voice slowly let's you know");
									puts("You have dead the moment you turned into this being and now you must suffer the 											consequences");
									puts("You have already died");
									puts("The End");
								}
			
								
							}
							else if(choice == 3)
							{
								puts("You have the power to reverse time."
									"You gained an increable ability, however as you soon"
									"come to understand, each time you"
									"reverse time, someone close to you dies."
									"You start to question why you chose this door"
									"and begin to feel extreemly guilty for killing"
									"these people");
								puts("You start walking toward a river");
								puts("You decide two choices:");
								puts("1-Follow the river\n" "2-camp for the night\n");
								scanf("%d",&choice);
								if(choice == 1)
								{
									puts("you decided to follow the river.");
									puts("You hear something strange and suddenly the river begins to flood");
									puts("you slowly drown and are faced with a dilemma");
									puts("You have died due to drowing");
									puts("The End");
								}
								if(choice == 2)
								{
									puts("You decided to camp for the night");
									puts("You began to read your book and slowly hear sounds coming from outside the tent");
									puts("You soon discover a dragon has appeared!");
									puts("As you combat it with your redo power, you slowly kill off your friends");
									puts("after redoing for so long you lost everything and were still unable to kill the dragon");
									puts("At the end you have died");
									puts("The End");
								}

							}
							else
							{
								puts("You failed to follow orders, By the power bestowed upon me by the "
									"Great Garrett Poppe you will DIE!!!!\n");
								printf("%s",name);
								puts(" has died.");
						
							}
					choice = 99;
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
					while(choice != 99)
					{
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

