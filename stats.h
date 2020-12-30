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
 * @file stats.h 
 * @brief Coursera Course: Week 1 Assignment 1
 *
 * Function Declaration 
 *
 * @author David Tandri
 * @date 30/12/2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 
void print_array(unsigned char *arr, int size);

int find_median(unsigned char *arr, int size);

int find_mean(unsigned char *arr, int size);

int find_maximum(unsigned char *arr, int size);

int find_minimum(unsigned char *arr, int size);

void sort_array(unsigned char *arr, int size);

void print_statistics(int min, int max, int mean, int med);

/**
 * @brief Statistic Calculator
 *
 * These functions take in array data and its corresponding size.
 * The function will return the minimum, maximum, mean and median of the array accordingly
 *
 * @param *arr Statistical data to be performed
 * @param size Length of data to be operated by the required function
 * @param min  Displaying the smallest data
 * @param max  Displaying the biggest data
 * @param mean Displaying the average of total data
 * @param med  Displaying the median of total data
 *
 * @return Minimum, Maximum, Mean and Median
 */


#endif /* __STATS_H__ */
