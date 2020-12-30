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
 * @brief Basic statistic calculator
 *
 * This program can perform basic operation such as
 * finding minimum, finding maximum, calculating mean,
 * calculating median and rearranging the data from the highest to lowest
 *
 * @author David Tandri
 * @date 30/12/2020
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  
  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
  

  /* Other Variable Declarations Go Here */
  int med,mean,max,min;
  /* Statistics and Printing Functions Go Here */
  printf("Unsorted Array:\n");
  print_array(test,SIZE);

  printf("Sorted Array (largest to smallest):\n");
  sort_array(test,SIZE);
  print_array(test,SIZE);
  
  med=find_median(test,SIZE);
  mean=find_mean(test,SIZE);
  max=find_maximum(test,SIZE);
  min=find_minimum(test,SIZE);

  print_statistics(min, max, mean, med);
}

/* Add other Implementation File Code Here */
  
void print_array(unsigned char *arr, int size)
{
  int i;
  for(i=0; i<size; i++)
  {
  	printf("%d ",*arr);
  	arr++;
  }
  printf("\n\n");
}

int find_median(unsigned char *arr, int size)
{ 
  int mid,mid_next;
  mid=(size/2)-1;
  mid_next=mid+1;
  return (arr[mid]+arr[mid_next])/2;
}

int find_mean(unsigned char *arr, int size)
{
  int i,total=0,ave;
  for(i=0; i<size; i++)
  {
  	total+=*arr;
  	arr++;
  }
  return total/size;
}

int find_maximum(unsigned char *arr, int size)
{
  int i,max=0;
  for(i=0; i<size; i++)
  {
  	if(*arr>max)
  		{max=*arr;}
  arr++;
  }
  return max;
}

int find_minimum(unsigned char *arr, int size)
{
  int i, min=*arr;
  for(i=0; i<size; i++)
  {
  	if(*arr<min)
  		{min=*arr;}
  arr++;
  }
  return min;
}

void sort_array(unsigned char *arr, int size)
{
  int i,y,max_i,max=0;
  for(y=0; y<size; y++)
	{
  	for(i=y; i<size; i++)
  	{  if(arr[i]>max)
     	 {	max=arr[i];
    	 		max_i=i;
			 }    
		} 
	arr[max_i]=arr[y];
	arr[y]=max;
	max=0;	
	}
}

void print_statistics(int min, int max, int mean, int med)
{  
  printf("The minimum: %d\n\n", min);
  printf("The maximum: %d\n\n", max);
  printf("The mean: %d\n\n", mean);
  printf("The median after sorthing: %d\n\n", med);
}
	




