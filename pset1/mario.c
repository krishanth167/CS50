#include <stdio.h>
#include <cs50.h>
 
int main()
{   
    int height;
     
    do
    {
        printf("height: ");
        height = GetInt();
    }
    while (height>23 || height < 0);
     
    for(int i =2; i<=height+1; i++)
    {
        for(int j = height -i; j>=0; j--)
        {
            printf(" ");
        }
         
        printf("%.*s\n",i, "########################");
    }
         
}
