//Contributors

//Ivan Khaffaji Room #19 

//kseeram
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>



void main(void)
{
	int x,y,z,i,h,g,k,choice=0;
	char name[256];
	int boxNum=0;

	
	srand(time(NULL));

	int power = 0;
	int diceroll;


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
				srand(time(NULL));
					while(choice != 99)
					{
							puts("You open the door and find a treasure chest.\n");
							puts("You have 2 choices listed below. Choose carefully.\n");
							puts("1. Open the chest.\n");
							puts("2. Leave the chest and move on.\n");
							scanf("%d",&choice);
							if(choice == 1)
							{
								puts("You open the chest and find a golden dice hidden inside.\n");
								puts("You have 2 choices listed below. Choose carefully.\n");
								puts("1. Roll the dice.\n");
								puts("2. Pocket the dice.\n");
								scanf("%d", &choice);
								if(choice == 1)
								{
									diceroll = 1 + (rand() % 6);
									printf("Congratulations! You rolled a %d. Your strength is increased by %d", diceroll, diceroll);
									puts("You move on with your journey. Ahead you encounter a giant orc with heavy armor. Between you and the orc is a sword.\n");
									puts("You have 3 choices listed below. Choose carefully.\n");
									puts("1. Pick up the sword and combat the orc.\n");
									puts("2. Run up and punch the orc.\n");
									puts("3. Run away.\n");
									scanf("%d", &choice);

								}
								else if(choice == 2)
								{
									puts("You move on with your journey. Ahead you encounter a giant orc with heavy armor. Between you and the orc is a sword.\n");
									puts("You have 3 choices listed below. Choose carefully.\n");
									puts("1. Pick up the sword and combat the orc.\n");
									puts("2. Roll the dice.\n");
									puts("3. Run away.\n");

								}
							}
							else if(choice == 2)
							{
								puts("You leave the chest and move on. Standing before you is a giant orc with heavy armor. Between you and the orc is a sword.\n");
								puts("You have 2 choices listed below. Choose carefully.\n");
								puts("1. Pick up the sword and combat the orc.\n");
								puts("2. Run away.\n");
								scanf("%d", &choice);
								if (choice == 1)
								{
									puts("You pick up the sword and charge at the orc.\n");
									puts("Before you could hit the orc with your sword the orc swings down with its club.\n");
									puts("Your head gets smashed.\n");
									puts("*****_____ GAME OVER _____*****\n");
								}
								else if (choice == 2)
								{
									puts("You attempt to run away.\n");
									puts("The orc quickly catches up and smashes your head.\n");
									puts("*****_____ GAME OVER _____*****\n");								}
							}
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
							puts("you open the door and find ........");
							puts("an old man sitting in the middle of the dark and baren room.");
							puts("what do you do?");
							puts("1.Approach the old man");
							puts("2.Scream at the old man");
							puts("3.Try to sneak behind the old man");
							puts("4.Leave the old man to die.");
							scanf("%d",&choice);
							if(choice == 1)
							{
								puts("As you approach the old man he notices you. what do you do?");
								puts("1.Try talking to the old man");
								puts("2.Pretend he didn't notice and walk away");
								scanf("%d",&choice);
								if(choice ==1)
								{
									puts("The old man was resting and you have disturbed his slumber. You are now in combat what do you do?");
									puts("1.Attempt to beat him");
									puts("2.Run away");
									scanf("%d",&choice);
									if(choice == 1)
									{
										puts("The old man is too strong for you. He beats you. You are dead Game over");
										break;
									}
									if(choice == 2)
									{
										puts("As you begin to run the old man stands up. He catches up to you in a split second.");
										puts("Your vision goes blury. You are dead Game over");
										break;
									}
								}
								if(choice == 2)
								{
									puts("The old man sees your attempt to leave and visibly angers");
									puts("As soon as you turn around you hear the old man breathing behind you");
									puts("The last thing you see is your lower body being strown accross the floor");
									puts("You are dead. Game over.");
									break;
								}
								break;
							}
							if(choice == 2)
							{
								puts("You awaken the old man and bring down his fury upon you. He completely decimates you. You are dead. Game over");
								break;
							}
							if(choice == 3)
							{
								puts("As you approach you make a loud noise. You look down and you it was a tile you stepped on.");
								puts("As you look up the old man is nowhere to be found. The next sensation you feel is a heavy hit in the back of the head.");
								puts("You are dead. Game over");
								break;
							}
							if(choice == 4)
							{
								puts("As you walk away the old man screams at you. He says \"Why would you just leave me.\"");
								puts("You turn around and notice that the old man has taken all your belongings.");
								puts("He screams \"you will pay with your life!\" You are dead. Game over");
								break;
							}
				}
					break;
			}
			case 8:
			{

				int choice;
		

				while(choice != 99){
					puts("you open the door and find ........");
					puts("\n\nYou're instantly teleported into the STAR WARS Universe");
					puts("Select your class:\n");
					puts("1. jedi");
					puts("2. sith");
					puts("3. Smuggler");
					puts("4. Wookie");
					puts("5. yoda");
					printf("type 50 for help\n");
					scanf("%d",&choice);

					if(choice == 1){
						printf("You have chosen the %s","jedi");
					}

					if(choice == 2){
						printf("You have chosen the %s","sith");
					}

					if(choice == 3){
						printf("You have chosen the %s","smuggler");
					}
					
					if(choice == 4){
						printf("You have chosen the %s","wookie");
					}

					if(choice == 5){
						printf("You have chosen the %s","yoda");
					}

					if(choice == 50){
						printf("You have chosen help, but i will not help you\n\n");
						puts("just kidding");
						puts("option 1: The Jedi are the main protagonists in the Star Wars universe. They are depicted as an ancient monastic, academic, meritocratic and paramilitary organization whose origin dates back approximately 25,000 years before the events of the first film released in the franchise. ");
						

					}
	
			
					scanf("%d",&choice);
				}
						
					
					break;
			}
			case 9:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							puts("Even more doors! What now?? You got four doors to choose! \n");
							puts("1. Door 1 \n 2. Door 2 \n 3. Door 3 \n 4. Door 4 \n 5. Turn back to the same door you entered? \n");
							scanf("%d",&choice);
							
							if(choice == 1);
							puts("There's something ahead of you what do you choose to do?");
							puts("1. Walk toward that something \n 2. Turn around");
							scanf("%d", &choice);
							
								if(choice == 1);
								puts("THIS IS A TEST");
								
								if(choice == 2);
								puts("THIS IS A TEST 2");
								
							if(choice == 2)
								printf("You hear your name called \" %s \"! \n Do you dare move forward? \n", name);
								puts("1. Move forward \n 2. Stay where you are at \n");
								scanf("%d", &choice);
								
								if(choice == 1)
									puts("Hey I know you!");
									
								if(choice == 2)
									puts("You hear \" where are you going? \") ");
								
							if(choice == 3)
								puts("There's nothing at all!");
							
							if(choice == 4)
								puts("Hey, there's gold!");
							if(choice == 5)
								puts("The door is locked. Great choice champ!");
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
					int num, j, winning;
					while(choice != 99)
					{
						puts("You enter and close the door behind you.");
						puts("You see two doors one on your left and one on your right");
						puts("There is also a tunnel straight ahead");
						puts("You can either enter door 1 of 2 of go to the tunnel (choice 3)");
						puts("What's your choice?");
						scanf("%d",&choice);
						switch(choice)
						{
							case 1:
								puts("You enter and close the door behind you");
								puts("You find a table straight ahead with a duffel bag on top");
								puts("You can either open the bag (Option 1) or take $500 and leave (Option 2");
								puts("What do you choose?");
								scanf("%d",&choice);
								switch(choice)
								{
									case 1:
									{
										puts("You have chosen to open the bag");
										puts("You win NOTHING, should've taken the money");
										break;
									}
									case 2:
									{
										puts("You have chosen to take the money");
										puts("Very smart since there was nothing in the bag");
										puts("You can now leave $500 richer, Have a good day");
										break;
									}
									default:
										break;
								}
								break;
							case 2:
							{
								puts("You have entered door 2");
								puts("You have won the lottery!");
								break;
							}
								break;
							case 3:
							{
								puts("You have now entered the tunnel");
								puts("Props for being a risk taker");
								puts("While the other doors you could have been a very rich man...");
								puts("You'll have a chance. You will be given one million dollars and you can bet on a number (1-5)");
								puts("You also have another option to not gamble and take $500,000 and leave");
								puts("You're a risk taker, but the option is up to you");
								puts("Enter 1 to gamble or enter 2 to leave with the money");
								scanf("%d",&choice);
								switch(choice)
								{
									case 1:
										puts("Enter the number you'd like to bet on:");
										puts("The number will be multiplied by a random multiplier and that will be the money you win");
										puts("Keep in mind it can be multiplied by 0");
										scanf("%d",&num);
										j = rand() %6;
										printf("%d\n",j);
										winning = (num*j) * 1000000;
										printf("You have won $%d, congratulations!\n",winning);
										break;
									case 2:
										puts("You took the easy way out");
										puts("But you're being rewarded for taking the risk entering the tunnel");
										puts("Have a good day!");
										break;
									default:
										break;

								}
								break;
							}
							default:
								break;
						}
						break;
					}
					break;
			}
			case 15:
			{
					while(choice != 99)
					{
							puts("you open the door, but something prevents you from entering. ");
							puts("Through the door you hear someone shouting \"HOLD THE DOOR\"");
							puts("Despite your effort, the mass opposite from you keeps the door closed.");
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
					//modyfied November 7, 2018
					puts("You open the door and find.......");
					puts("A poorly lit room with a single box on the floor...");
							
					while(choice != 99)
					{


							
							puts("1.Inspect the box");
							puts("2.Flick the light switch");
							scanf("%d",&choice);
							if(choice == 1)
							{
 								puts("You pick up the box and look inside....");
								puts("There is nothing inside...");
								puts("You are highly disappointed and your day is ruined");						
							}
							else if(choice ==2)
							{
								puts("You flick the light switch and hear a scream from the box");
								puts(" Turn off the light ");
							}
							else
							{
								puts("You walk away...");
							}
					}						
				break;
			}
			case 18:			
			{
					while(choice != 99)
					{
						puts("You open the door and find ...... ");
						puts("An s2000 that is currently fixed wiht airbag suspension");
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
								break;

							case 2:
								puts("Why the heck would you make this choice? Literally this is the best car you can ever drive. Pleb");
								break;
							
							case 3:
								puts("Okay this is probably the safest choice you can make, but you are still no fun");
								break;

							default:
								break;

					}
					break;
			}
			case 19:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							puts("a box full of kittens!!! ..........");
							puts("what do you do? ...................");
							puts("1 for taking one kitten............");
							puts("2 for taking two kittens...........");
							puts("3 for taking three kittens.........");
							puts("99 for leaving the room............");
							scanf("%d",&choice);
							switch(choice)
							{
								case 1:
									puts("You only took one kitten??? How heartless!");
									break;
								case 2:
									puts("Ok, not bad. 2 kittens could be worse.");
									break;
								case 3:
									puts("Wow, look at you. Big man. You took 3 kittens. How do you plan on taking care of them?");
									puts("Look, one of them is already crying. Damn, theres a bottle somewhere here, right?");
									puts("1 to pick up the bottle from the table............");
									puts("2 to ignore the kitten............................");
									puts("99 to leave the room..............................");
									scanf("%d",&choice);
									switch(choice)
									{
										case 1:
											puts("The kitten stopped crying. Good job! Now leaving room.");
											choice = 19;
											break;
										case 2:
											puts("You heartless fool! Game over.");
											choice = 99;
											break;
										case 99:
											puts("Now leaving room.");
											choice = 19;
											break;
									}
									break;
							}
							
							
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
