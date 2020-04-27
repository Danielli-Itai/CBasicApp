/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief basic statistical analysis for characters array.
 *
 * 1. Aanalsis of an array of unsigned char data items.
 * 2. Reporting analytics on the maximum, minimum, mean, and median of the data set.
 *
 * @author Itai Danielli
 * @date 27/04/2020
 *
 */



#include <stdio.h>
#include "stats.h"



/* Size of the Data Set */
#define SIZE (40)

/***
*/
void print_statistics(unsigned char min, unsigned char max, unsigned char mean, unsigned char median)
{
}

void print_array(unsigned char* p_test, unsigned int len)
{
}

unsigned char find_minimum(unsigned char* p_test, unsigned int len)
{
	unsigned char minimum = 0xFF;
	return(minimum);
}

unsigned char find_maximum(unsigned char* p_test, unsigned int len)
{
	unsigned char maximum = 0x00;
	return(maximum);
}

unsigned char find_mean(unsigned char* p_test, unsigned int len)
{
	unsigned int mean= 0x00;
	return(mean);

}

void sort_array(unsigned char* p_test, unsigned int len)
{
	return;
}

unsigned char find_median(unsigned char* p_test, unsigned int len)
{
	unsigned char median = 0x00;
	return(median);
}



void main()
 {
  int size = SIZE;
  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  unsigned char minimum = find_minimum(test, size);
  unsigned char maximum = find_maximum(test, size);
  unsigned char mean = find_mean(test, size);
  unsigned char median = find_median(test, size);
  
  /* Statistics and Printing Functions Go Here */
  print_statistics(minimum, maximum, mean, median);
  print_array(test, size);
  
  return;
}

/* Add other Implementation File Code Here */
