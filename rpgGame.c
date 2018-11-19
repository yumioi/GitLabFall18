//Contributors
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>



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
						FILE *inptr;
						char ranstring[256]; 
						int numguess;
						puts("You open the door and find ...... ");
						puts("An s2000 that is currently fixed with airbag suspension");
						puts("An s2000 completely modified with all authentic JDM parts");
						puts("An that is just completely bone stock andlow miles, but is an AP1");
						puts("But now you have 3 choices...");
						puts("Choice 1: throw away the bagged s2000 but then the modified s2000 is reverted to OEM");
						puts("Choice 2: throw away all of these cars and save your money for a worse car");
						puts("Choice 3: Make these cars all bone stock");
						scanf("%d", &choice);
						switch(choice)
						{
							case 1:
								puts("Okay so this was a pretty good choice, but i can tell you're a purist. Yuck");
								puts("So now that you chose this i have a task for you, if you can guess the number than you get to move on to the next door, but really you can still move on anyways.");
								puts("So heres the equation 134 x 4 + 31 x 21 = ?\n Whats the answer? ");
								scanf("%d", &numguess);
								if(numguess = 1187)
								{
									puts("Okay i guess you're pretty smart so get out of my room.");
								}
								else
								{
									puts("Bro it is literally so easy but that was your last chance, bye");
								}

								break;

							case 2:
								puts("Why the heck would you make this choice? Literally this is the best car you can ever drive. Pleb");
								puts("Since you chose this i have a riddle for you, you walk into a room with 5 people, they all die, how many people are left in the room?");
								scanf("%d", &numguess);
								if(numguess = 6)
								{
									puts("Sweet, looks like you have some good abstract thinking skills.");
									puts("Okay now you can choose another door, bye!");
								}
								else
								{
									puts("Okay so, look at your answer and then think really hard about the riddle.");
								}	
								break;
							
							case 3:
								puts("Okay this is probably the safest choice you can make, but you are still no fun");
								puts("So since you are no fun, i am goin to try and make this fun by taking a huge twist on the story line. What i am going to do is create a file you're going to write to but your job is to tell me where the file is");
								inptr = fopen("here_is_Your_file_lol.txt", "a");
								puts("Now put in your string please >:)");
								scanf("%s", &ranstring);
								printf("Here is the string you entered: %s", ranstring);
								fprintf(inptr,"%s", ranstring);
								fclose(inptr);
								break;

							default:
								puts("Okay so i gave you like three options and you decided to be a little Rebel. No. Don't. This code would work fine if you did not try messing it up pls k thx.");
								break;

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
}
