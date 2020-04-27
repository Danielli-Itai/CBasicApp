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
	printf("\n minimum value: %d", min);
	printf("\n maximum value: %d", max);
	printf("\n mean value: %d", mean);
	printf("\n median value: %d", median);
	
	printf("\n");
}

void print_array(unsigned char* p_test, unsigned int len)
{
	if(NULL != p_test){
		for(int i = 0x00; i< len; i++){
			printf("\n array value %d:%d",i, p_test[i]);
		}
	}
	printf("\n");
}

unsigned char find_minimum(unsigned char* p_test, unsigned int len)
{
	unsigned char minimum = 0xFF;
	
	if(NULL != p_test){
		for(int i = 0x00; i< len;i++){
			if(p_test[i] < minimum){
				minimum = p_test[i];
			}
		}
	}
	return(minimum);
}

unsigned char find_maximum(unsigned char* p_test, unsigned int len)
{
	unsigned char maximum = 0x00;
	
	if(NULL != p_test){
		for(int i = 0x00; i< len; i++){
			if(p_test[i] > maximum){
				maximum = p_test[i];
			}
		}
	}
	return(maximum);
}

unsigned char find_mean(unsigned char* p_test, unsigned int len)
{
	unsigned int mean= 0x00;
	
	if(NULL != p_test){
		for(int i = 0x00; i< len; i++){
			mean += p_test[i];
		}
	}
	if(0x00 != len){
		mean /= len;
	}
	return(mean);

}

void sort_array(unsigned char* p_test, unsigned int len)
{
	if(NULL != p_test){
		for(int i = 0x00; i<len; i++){
			for(int j = i+1; j<len; j++){
				if(p_test[i] < p_test[j]){
					unsigned char tmp = p_test[i];
					p_test[i] = p_test[j];
					p_test[j] = tmp;
				}
			}
		}
	}

	return;
}

unsigned char find_median(unsigned char* p_test, unsigned int len)
{
	sort_array(p_test, len);

	unsigned char median = 0x00;
	unsigned char position = len / 2;
	
	if((len > 0x00) && (NULL != p_test)){
		if(len == 2 * position){
			median =(p_test[position-1] +  p_test[position]) / 2;
		}
		else{
			median = p_test[position];
		}
	}
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
