#include <stdio.h>
#include <math.h>
int main() 
{
 
	int num,result = 0;
	printf("Kaca kadar taranacak ? ");
	scanf("%d", &num);

	int s;
	for(s=num; s<=num;s++)
	{
	   result=0;
	   int basamak=0;
	   int b=s;
	   while (b != 0)
	    {
	    
	       b /= 10;
	       basamak++;
	    }
	    int i,mod =0;
	    int c=s;
		for (i=0;i<basamak;i++)
		{
		  	
		    mod = c % 10;
		    c= c /10;
		    result += pow(mod,basamak); 
		}
	
	    if (result == s)
	        printf("**** %d %d is an Armstrong number.\r\n", s,result);
        else 
		    printf("%d is not an Armstrong number.\r\n",s);
	}
	return 0;
}

