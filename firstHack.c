#include <stdio.h>

void theTunnels()
{
    int playerInjured = 0;
    int answer = 0;
    int answerStatus = 0;
    int figureExamined = 0;
    char uselessPiece[256];
    printf("\nYou enter the heating tunnels, climbing down a rusty ladder.\n");
    printf("Despite the name, you feel a chill settle deep within your bones.\n");
    while(answerStatus == 0)
    {
        printf("Ahead of you are two paths, left [1] and right [2]. Which should you go down?\n > ");
        scanf("%d", &answer);
        if (answer == 1)
        {
            answerStatus = 1;
            printf("You walk to the left, old concrete bending beneath your feet. It feels almost rubbery.\n");
        }
        else if (answer == 2)
        {
            answerStatus = 1;
            printf("The rightmost path is caked in moss, the top of which is singed slighty.\n");
        }
        else
        {
            printf("Unknown command. Use the bracketed words, and use all caps!");
        }
    }
    answerStatus = 0;
    answer = 0;
    printf("After a few moments, you find yourself in a room caked in metal. The door you came in is no longer there.\n");
    printf("The room is sweltering, and there's a strange figure in the corner.\n");
    while (answerStatus == 0)
    {
        printf("Do you want to exit [1] the room, or examine [2] the figure?\n > ");
        scanf("%d", &answer);
        if (answer == 1)
        {
            answerStatus = 1;
        }
        else if (answer == 2)
        {
            answerStatus = 1;
            figureExamined = 1;
            answer = 0;
            printf("You approach the strange figure, and stop a few feet away. It's pretty heavily burned.\n\n");
            printf("You flinch backwards as it's head snaps up, and it begins to scream.\n You should definitely run [1]!\n > ");
            scanf("%d", &answer);
            if (answer == 1)
            {
            printf("You scramble to the door, ears ringing as you feel skittering in the ground, coming from behind you.\n");
            printf("You stumble through the door, slamming it shut behind you.\n");
            }
            else
            {
                playerInjured = 1;
                printf("You don't react in time, and get slammed against the concrete. Everything goes black.\n\n\n");
                printf("You wake up, slumped against the metal door, dried blood staining your hair.\n");
            }
        }
        else
        {
            printf("Unknown command. Use the bracketed words, and use all caps!");
        }
    }
    printf("The cold air is a relief, and the heavy metal door blocks the heat from escaping.\n");
    if (figureExamined == 0)
    {
        printf("You're honestly not sure what to think of the figure in the corner, but you resolve to not think about it.\n");
        printf("It's probably just a mannequin one of the students left there to scare you.\n");
        printf("You made it through the tunnels, piece of cake!");
    }
    else
    {
        if (playerInjured == 1)
        {
            printf("You definitely need to go to a hospital, but at least you're not dead?\n");
            printf("You're never going into those tunnels again.");
        }
        else
        {
            printf("You've never been more terrified in your life, and you should certainly contact the police, but hey, you're alive!\n");   
            printf("You've managed to make it through the tunnels, albiet slightly traumatized.\n");
        }
    }
    
}

//Main Function!

int main (void)
{
    theTunnels();
}
