#include<stdio.h> 
#include<conio.h> 
int main() 
{ 
//Declaration of variables and pointer variables 
int x,y,*ptr_x,*ptr_y,temp; 

//Insert value of x and y 
printf("Enter the value of x and y\n"); 
scanf("%d%d", &x, &y); 
//Printing value before swapping 
printf("Before Swapping\nx = %d\ny = %d\n", x, y); 
//Assigning address of variables to pointers 
ptr_x = &x; 
ptr_y = &y; 
//Swapping pointer address with the help of temp variable 
temp = *ptr_y; 
*ptr_y = *ptr_x; 
*ptr_x = temp; 
//printing values of x and y 
printf("After Swapping\nx = %d\ny = %d\n", x, y); 
return 0;
}
