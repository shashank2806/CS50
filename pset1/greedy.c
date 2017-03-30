#include <stdio.h>
#include <cs50.h>
#include <math.h>
int main(void)
{
	float owed;

	do{
	printf("O hai! How much change is owed?\n");
	owed = get_float();
	} while(owed<0);

	int change = (int)(round(owed*100));
	
	int count = 0;
	while(change>=25){
		count = count +1;
		change = change - 25;
	}
	while(change>=10 && change<25){
		count =count+1;
		change = change -10;
	}
	while(change>=5 && change < 10){
		count = count+1;
		change = change - 5;
	}
	
	while(change>=1 && change <5){
		count = count+1;
		change = change -1;
		
	}
	
		printf("%i\n",count);	
	
}

