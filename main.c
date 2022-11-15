#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
	int i;
	int grade[5];
	int t = 0;
	
	for(i=0;i<5;i++)
	{
		printf("input value(%i) = ",i);
		scanf("%d", &grade[i]);
	}
	

	for(i=0;i<5;i++)
	{
		printf("grade[%i] = %i\n", i, *(grade+i));
		t += *(grade+i);
	}
	
	printf("average = %i\n", t/5);
	return 0;
}
