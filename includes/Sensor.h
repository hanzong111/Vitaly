#ifndef SENSOR_H
#define SENSOR_H	

#include "Movement.h"
#include "Routine.h"
#include <stdio.h>

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
int correct_right(void);
void	grayscale_read(t_gs *port);
void	display_grayscale(t_gs greyscale);

int time_to_turnleft();

#endif
