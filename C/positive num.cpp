#include<stdio.h> 
 int main()
{ 
 int num; 
 int sum = 0; 
 printf("Enter the positive numbers (enter 999 to quit):\n"); 
 scanf("%d",&num); 
 while(num != 999) 
 { 
 sum = sum + num; 
 scanf("%d",&num); 
 } 
 printf("\n The sum of all positive numbers = %d\n",sum); 
} 
