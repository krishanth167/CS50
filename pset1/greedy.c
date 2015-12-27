#include <stdio.h>
#include <cs50.h>
#include <math.h>
 
int main()
{
    float change;
    int cents;
    int coins=0;
     
    do
    {   
        printf("How much change is owed? ");
        change = GetFloat();
    }
    while (change<0);
    
    cents = (int)round(change*100);
     
    //check for 25
    coins += cents/25;
    cents = cents % 25;
     
    //check for 10
    coins += cents/10;
    cents = cents % 10;
     
    //check for 5
    coins += cents/5;
    cents = cents % 5;
     
    //check for 1
    coins += cents/1;
    cents = cents % 1;
     
    //print result
    printf("%i\n", coins);
}
