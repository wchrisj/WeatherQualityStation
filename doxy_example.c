/*!
  *
  * @file    	doxy_example.c
  * @author  	Simon Brolsma
  * @version 	V1.0.0
  * @date    	13-April-2021
  * @brief    C File template
  * 
  * Doxygen example voor c bestanden.
  *	Voor alle functionaliteiten van Doxygen en hoe het werkt.
  */

/* Includes -----------------------------------------------------------*/
#include "stm32f0xx.h"

/* typedef -----------------------------------------------------------*/
typedef struct {
  int x, y, z;
} example;

/* define ------------------------------------------------------------*/
#define BYTE 255

/* macro -------------------------------------------------------------*/
/*!
  @param x input value.
  @returns absolute value of \a x.   
*/
 #define ABS(x) (((x)>0)?(x):-(x))

/* variables ---------------------------------------------------------*/
enum week{Mon, Tue, Wed, Thur, Fri, Sat, Sun};

/* function prototypes -----------------------------------------------*/
int addition(int a, int b);
void increment(int *a);

/* functions ---------------------------------------------------------*/
/**
  * @brief  This function adds two integers with eachother.
  * @param  a First integer
  * @param  b Second integer
  * @retval Integer
  */
int addition(int a, int b) {
  return a+b;
}

/**
  * @brief  This function increments an integer without a return.
  * @param[in]  a Variable to be incremented
  * @param[out] a 
  */
void increment(int *a) {
  *a+=1;
}