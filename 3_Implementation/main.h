/**
 * @file main.h
 * @author ISHWAR KUBASAD (kubsadishwar@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdio.h>
#include<stdlib.h>
/**
 * @brief student structure creation
 * 
 */
struct student
{
   int roll,m1,m2,tot;
   char name[10],add[50],cont[10];
   float per;
};
/**
 * @brief display function
 * 
 * @param s 
 * @param n 
 */
void display(struct student *s,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\n%d %s %d %d %d %f %s %s",s[i].roll,s[i].name,s[i].m1,s[i].m2,s[i].tot,s[i].per,s[i].cont,s[i].add);
    }
}
