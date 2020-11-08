#include <stdio.h>

void theTunnels()
{
    int playerInjured = 0;
    int answer = 0, answerStatus = 0;
    int pathSelected = 0;
    int keyGot = 0;
    int acidGot = 0;
    int plantAwake = 0;
    int acidRequired = 0;
    char uselessPiece[256];
    printf("\nYou enter the heating tunnels, climbing down a rusty ladder.\n");
    printf("Despite the name, you feel a chill settle deep within your bones.\n\n");
    while(answerStatus == 0)
    {
        printf("Ahead of you are two paths, left [1] and right [2]. Which should you go down?\n > ");
        scanf("%d", &answer);
        if (answer == 1)
        {
            pathSelected = 1;
            answerStatus = 1;
            printf("You walk to the left, old concrete bending beneath your feet. It feels almost rubbery.\n\n");
        }
        else if (answer == 2)
        {
            pathSelected = 2;
            answerStatus = 1;
            printf("The rightmost path is caked in moss, the top of which is singed slighty.\n\n");
        }
        else
        {
            printf("Unknown command. Use the bracketed numbers next to the action you want to attempt!\n\n");
        }
    }
    answer = 0;
    answerStatus = 0;
    if (pathSelected == 1)
    {
        printf("A metal room greets you. Imposing steel climbs up the wall, blackened by what appears to be soot.\n");
        printf("A door to the exit lies in front of you, padlocked shut, and a strange figure lies to the right.\n\n");
        while (answerStatus == 0)
        {
            printf("Do you want to investigate the figure [1] or go through the door [2]?\n> ");
            scanf("%d", &answer);
            if (answer == 1)
            {
                if (keyGot == 1)
                {
                    printf("As you turn around, you see a stick thin creature club you with its arm. Your vision goes black!\n\n");
                    playerInjured = 1;
                    answerStatus = 1;
                }
                else
                {
                printf("You approach the figure. It looks burned, and it's clutching an axe in it's hand. That could probably break the lock!\n");
                printf("You pry the axe out of the figures hand, and turn around.\nTaking a step away, you hear a scraping sound behind you.\nYou should probably leave!\n\n");
                keyGot = 1;
                }
            }
            else if (answer == 2)
            {
                if (keyGot == 1)
                {
                    printf("You slash through the chain with the axe, and throw open the door.\nThe sound of bones breaking behind you, you flee the sewers.\n\n");
                    answerStatus = 1;
                }
                else
                {
                    printf("You try to open the door, but the padlock prevents exit. Maybe there's a key?\n\n");
                }
            }
            else
            {
                if (keyGot == 1)
                {
                    printf("As you stand frozen, you feel something club you from behind, and you fall unconcious!\n\n");
                    playerInjured = 1;
                    answerStatus = 1;

                }
                else
                {
                printf("Unknown command. Use the bracketed numbers next to the action you want to attempt!\n\n");
                }
            }
        }
        if (playerInjured == 0)
        {
            printf("You slump against the wall. It didn't seem like anything was following you.\n");
            printf("The axe drops to the ground. No need for it now. An axe wouldn't stop that thing.\n");
            printf("You made it out without getting hurt, that's all you can really ask for!\n\n");
        }
        else
        {
            printf("You wake up inside a small shed, blood dried to your head.\n");
            printf("You stand, legs wobbly, and head to the nearest hospital.\n");
            printf("At least you survived?\n\n");
        }
    }
    else
    {
        answerStatus = 0;
        printf("A strange greenhouse sits in the tunnels. Odd plants with covered bulbs seem to watch you.\n");
        printf("You see a ladder leading to a manhole, although it's covered with vines.\n");
        printf("There's also a table of chemicals, nestled away in the corner.\n\n");
        while (answerStatus == 0)
        {
            printf("\nDo you examine the plants [1], the table [2], or the manhole[3]?\n > ");
            scanf("%d", &answer);
            if (plantAwake != 0 && answer != 3)
            {
                printf("Your inaction has costed you. The plant wraps a vine around your leg, and slings you into the wall.\nYour vision grows black.\n\n");
                answerStatus = 1;
                playerInjured = 2;
            }
            else if (answer == 1)
            {
                printf("The plants are a light green, and seem to sway back and forth, even with no breeze.\n");
                printf("Best to leave well enough alone, at least for now.\n\n");
            }
            else if (answer == 2)
            {
                if(acidRequired != 0)
                {
                    printf("You grab the acid. This should burn through the vines!\n");
                    printf("As you grab the vial, the vines burst into life!\nLeaving is probably wise!\n\n");
                    plantAwake = 1;
                    acidGot = 1;
                }
                else
                {
                    printf("A table of dangerous looking chemicals. Best to leave them alone.\n\n");
                }
            }
            else if (answer == 3)
            {
                if (acidGot == 1)
                {
                    printf("You splash acid onto the vines, and they burn away.\nYou push the manhole open, and escape the tunnels!\n\n");
                    answerStatus = 1;
                }
                else
                {
                    printf("Thick vines cover the manhole. Maybe you can find something to get through them?\n\n");
                    acidRequired = 1;
                }
            }
            else
            {
                printf("Unknown command. Use the bracketed numbers next to the action you want to attempt!\n\n");
            }
        }
        if (playerInjured == 0)
        {
            printf("You take a moment to breathe. The sunlight filters through trees.\n");
            printf("You drop the acid. No use to you now.\n");
            printf("You made it out unharmed, which is all you can really ask for!\n\n");
            
        }
        else
        {
            printf("You wake up on the surface, blood drying on your face.\n");
            printf("You stand up, and slowly walk toward the nearest hospital, thinking of a story\n");
            printf("At least you're alive?\n\n");
        }

    }
}

int main (void)
{
    theTunnels();
}
