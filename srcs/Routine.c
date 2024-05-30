#include "../includes/Routine.h"



void Routine_1()
{
	correct_left();
    printf("Follow_line\n"); /* Starts moving forward */

    bool hasCheckedLeftTurn = false;
    int rightTurnCount = 0;

    grabOre(); /* Robot starts with ore in its claw */

    while (1)
    {
        if (!hasCheckedLeftTurn && detectLeftTurn()) /* Check if the line goes to the left */
        {
            turnLeft();
            printf("turn left\n"); /* Execute turn left */
            hasCheckedLeftTurn = true;
            break;
        }
    }


    while (1)
    {
        if (detectRightTurn()) /* Check if the line goes to the right */
        {
            rightTurnCount++;

            if (rightTurnCount == 3) /* Check if it's the third right turn */
            {
                slideRightUntilWall(); /* Slide to the right until a wall is reached */
				printf("up the wall");
                break;
            }
        }
    } 


    while (1)
    {
        if (detectWall()) /* Check if the wall is detected */
            {
                placeOre(); /* Grab the ore */
                printf("placed Ore");
                slideBack(); /* Slide back */
                break;
            }
    }

    while (1)
    {
        if (detectLeftTurn()) /* Check if a left turn is detected after sliding back */
        {
            goStraightUntilLeftLine(); /* Go straight (follow the line) until a left turn is detected */
            printf("go forward");
            break;
        }
    }

    turnLeft(); /* Execute a left turn */
    printf("turn left");
    goStraightUntilBase(); /* Move forward until the base is reached */
    printf("go to Base");
}



void Routine_2()
{
    printf("Follow_line\n"); /* Starts moving forward */

    bool hasDetectedRightTurn = false;

    while (1)
    {
        if (!hasDetectedRightTurn && detectRightTurn()) /* Check if the line goes to the right */
        {
            hasDetectedRightTurn = true;
            slideRightUntilWall(); /* Slide to the right until a wall is reached */
            printf("up the wall");
            break;
        }
    }

    while (1)
    {
         if (detectWall()) /* Check if the wall is detected */
        {
            grabOre(); /* Grab the ore */
            printf("grab Ore");
            slideBack(); /* Slide back */
            break;
        }
    }
    
    goStraightUntilBase(); /* Move forward until the base is reached */
    printf("go to Base");
}

void	Routine_3()
{
}
