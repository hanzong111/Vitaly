#ifndef ROUTINE_H
#define ROUTINE_H	

#include <stdio.h>
#include <stdbool.h>

typedef struct s_gs
{
    int _1;
    int _2;
		int _3;
		int _4;
		int _5;
		int _6;
		int _7;
		int _8;
} t_gs;

/* ROUTINE FUNCTIONS */
//rountine 1, routine2
void    grabOre(void); 
void    placeOre(void);
void    slideRightUntilWall(void);
void    slideBack(void);
void    goStraightUntilLeftLine(void);
void    goStraightUntilBase(void);
void    turnLeft(void);


/**
  * @brief  1st Routine
  * @param  None
  * @retval None
  */
void Routine_1(void);
/**
  * @brief  2nd Routine
  * @param  None
  * @retval None
  */
void Routine_2(void);
/**
  * @brief  3rd Routine
  * @param  None
  * @retval None
  */
void Routine_3(void);


/**
  * @brief  If robot is moving towards the right , use this to slightly move left so that it is back on track 
  * @param  None
  * @retval None
  */
/* returns  = 1 if needs correction */
/* returns  = 0 if do not need correction */
int	correct_left(void);
/**
  * @brief  If robot is moving towards the left , use this to slightly move right so that it is back on track 
  * @param  None
  * @retval None
  */
/* returns  = 1 if needs correction */
/* returns  = 0 if do not need correction */

/* SENSOR FUNCTIONS */
//routine1, routine2
int detectLeftTurn();
int detectRightTurn();
int detectWall();

int correct_right(void);
void	grayscale_read(t_gs *port);
void	display_grayscale(t_gs greyscale);
//not in routine1 or routine2
int time_to_turnleft();
void	move_foward(void);
void	move_backwards(void);
void	move_left(void);
void	move_right(void);
void	turn_left(void);
void	turn_right(void);


#endif
