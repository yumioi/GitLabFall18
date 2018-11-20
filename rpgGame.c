//Contributors

//Brandon LaNuevo Room #1
//Ivan Khaffaji Room #19

//Hugo Rodriguez Room #10


// Justin Do Room #2


//kseeram
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>


//Prototypes
void sleep(unsigned int seconds);

void main(void)
{
    int x,y,z,i,h,g,k,choice=0;
    char name[256];
    int boxNum=0;
    int num = 6, guess= 0, a;


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
            case 2: // Justin Do Room 2
                {
                    while(choice != 99)
                    {
                        puts("Welcome to room 2. Glad you didn't drown. \n");
                        puts("You open the door and find a wolf that looks intimidating.\n");
                        puts("You need to stay alive and there are three choices to choose from.\n");
                        puts("1. Run back to the door.\n");
                        puts("2. Pick up the knife on the floor and throw it at the wolf.\n");
                        puts("3. Drop and play dead on the floor.\n");
                        scanf("%d",&choice);
                        if(choice == 1)
                        {
                            puts("You start running to the door but you are slower than the wolf.\n");
                            puts("The wolf catches up and eats you alive.\n");
                        }
                        if(choice == 2)
                        {
                            puts("You pick up the knife... \n");
                            puts("Throw it as hard as you can and....\n");
                            puts("End up missing the wolf and the wolf mauls you to death.\n");
                        }
                        if(choice == 3)
                        {
                            puts("You decide to lay down and the wolf comes running at you...\n");
                            puts("As soon the wolf runs up to you, it sniffs you for a couple of minutes.\n");
                            puts("The wolf starts to lick you face and then scurries away.");
                        }
                        else
                        {
                            puts("Incorrect choice!\n");
                            puts("Choices are 1, 2 or 3 \n");
                        }
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
                        puts("you open the door to find a man wearing sunglasses, track pants, and a blue shirt with a ravioli stain on his shirt pocket.");
                        puts("Welcome to the filthy frank show! Where everything is filthy and filled with terrible pop culture references.");
                        puts("If you want to make it out alive, just answer my questions and stuff and you'll be safe from dark lord chin chin");
                        puts("Question:  If Pewdiepie reached 80 million subscribers, will the ravioli stick to the ceiling?");
                        puts("1. Wait what?");
                        puts("2. Youtube's reccomended algorithm is garbage!");
                        puts("3. 34 chromonsones");
                        scanf("%d",&choice);
                        if (choice == 1)
                        {
                            puts("YOU OBVIOUSLY WEREN'T LISTENING!!! BACK TO THE RICEFIELDS FOR YOU!!!......GAME OVER.");
                            break;
                        }
                        else if (choice == 2)
                        {
                            puts("Yes, youtubes algorithm is pretty bad and they do demonetize my content, BUT IT ISN'T THE RIGHT ANSWER PUNK!!!......GAME OVER.");
                            break;
                        }
                        else if (choice == 3)
                        {
                            puts("I can't believe you try bribing me. You should be so damn ashamed.  Lucky for you though, I take bribes!");
                            puts("He pockets the chromosones");
                        }
                        else
                        {
                            puts("TRY AGAIN YOU DUNCE");
                        }
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
                        puts("you open the door and find Balloons");
                        puts("Your options:");
                        puts("1: Pop the balloons.");
                        puts("2: Inhale the helium.");
                        puts("3: Grab them and fly away.");

                        scanf("%d",&choice);
                        if(choice == 1)
                        {
                            puts("Congratulations you made a kid cry.");
                        }

                        if(choice == 2)
                        {
                            puts("You inhaled the helium and now you sound funny");
                        }

                        if(choice == 3)
                        {
                            puts("You need a lot more balloons to fly.");
                        }
                        break;
                    }
                    break;
                }
            case 11:
                {
                    while(choice != 99)
                    {
                        printf("Enter a number between 1 and 10: ");

                        scanf("%d", &guess);


                        printf("%d + magic number =%d\n",guess, (num + guess) );
                        printf("%d * magic number=%d\n", guess, (num * guess));
                        printf("%d - magic number=%d\n", guess, (num - guess));
                        printf("what is your guess?\n");
                        scanf("%d", &a);
                        if(a==num)
                        {
                            printf("You are correct! You win\n");
                        }
                        else
                        {
                            printf("sorry wrong guess");
                        }
                    }
                    break;
                }
            case 12:	//synced rpg
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
                                            winning = (num*j) * 2000000;
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
                            puts("a box full of kittens!!! ..........");
                            puts("what do you do? ...................");
                            puts("1 for taking one kitten............");
                            puts("2 for taking two kittens...........");
                            puts("3 for taking three kittens.........");
                            puts("4 for not taking any kittens.......");
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
                                        case 3:
                                            puts("You didn't take any kittens!!!!! You monster");
                                            choice = 99;
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
                            
				puts("You open the door and find yourself in Spanish 101 class!");
				puts("Welcome to Karina's Spanish 101 class! :)");
				puts("I have created 3 exams for you to take, so the end of this adventure you should be able to express yourself in spanish.");
				puts("You have the choice to challenge me if you don't want to start from level 1.");
				puts("You may choose a level above level 1 and if you pass the chosen level with a 90% or above then you automatically pass levels below the chosen level!");
				puts("BUT if you do not pass the chosen level with a 90% or above then you will restart from level 1, so CHALLENGE ME! :P");
				puts("If you choose to start from level 1 then you can work your way up to the next 2 levels.");
				puts("The average of the 3 exams will be taken at the end. If you pass with an 80% then you pass the class otherwise you will retake the class.");
				puts("Let the challenge begin! Enjoy! :D");
				puts("You may quit anytime by selecting option 99, but I recommend you not to quit!");
					

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
