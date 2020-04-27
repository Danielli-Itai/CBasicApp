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
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

  /**
   * Function: find_average
   * @brief print the statistical analisys results.
   *
   * This function prints out the statistical analysis results.
   *    mininmum value.
   *
   * @param min minimum number.
   *
   * @return No return value.
   */
  void print_statistics(unsigned char min, unsigned char max, unsigned char mean, unsigned char median);

  /**
   * Function: find_average
   * @brief print the array elements.
   *
   * This function prints prints the array to the screen
   * Given an array of data and a length.
   *
   * @param p_test pointer to the array.
   * @param len array size.
   *
   * @return No return value.
   */
  void print_array(unsigned char* p_test, unsigned int len);

  /**
   * Function: find_minimum
   * @brief finds the minimum value in an array.
   *
   * This function returns the minimum value of an array.
   * The function returns 0xFF In case of an error or no value can be found.
   *
   * @param p_test pointer to the array.
   * @param len array size.
   *
   * @return the array minimum value.
   */
  unsigned char find_minimum(unsigned char* p_test, unsigned int len);

  /**
   * Function: find_maximum
   * @brief finds the maximum value in an array.
   *
   * This function returns the maximum value in an array.
   * The function returns 0x00 In case of an error or no value can be found.
   *
   * @param p_test pointer to the array.
   * @param len array size.
   *
   * @return the array maximum value.
   */
  unsigned char find_maximum(unsigned char* p_test, unsigned int len);

  /**
   * Function: find_mean
   * @brief calculates the mean value of an array.
   *
   * This function returns the mean of an array set of valus.
   * The function returns 0x00 In case of error or an array size 0.
   *
   * @param p_test pointer to the array.
   * @param len array size.
   *
   * @return the array mean value.
   */
  unsigned char find_mean(unsigned char* p_test, unsigned int len);

  /**
   * Function: sort_array
   * @brief sorts an array in place.
   *
   * This function sorts an array in dacceseeding order from max in place 0.
   * to minimum in the last place.
   *
   * @param p_test pointer to the array.
   * @param len array size.
   *
   * @return No return value.
   */
  void sort_array(unsigned char* p_test, unsigned int len);

  /**
   * Function: find_median
   * @brief retrurns the median given a sorted array.
   *
   * This function calculates the median of a sorted array.
   * In case of even length the median is the avarage of the two valuaes at
   * len/2 and len/2 + 1
   *
   * @param p_test pointer to the array.
   * @param len array size.
   *
   * @return median value.
   */
  unsigned char find_median(unsigned char* p_test, unsigned int len);
#endif /* __STATS_H__ */
