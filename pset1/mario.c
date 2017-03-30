#include <stdio.h>
#include <cs50.h>

int main(void)

{
int i,j,height;
    
    do{
        printf("Height: ");
        height = get_int();
    } while(height<0 || height>23);

    for(j=2;j<=height+1;j++)
    {

		for(i=height+1;i>j;i--)
		{
			printf(" ");
		}
	   	for(i=0;i<j;i++)
	   	{
	   		printf("#");
		}	
	printf("\n");
    	
    }

    
}