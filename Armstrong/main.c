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

/* ALTAKİ KOD KULLANICI H,h harfi girene kadar kullanıcıda sürekli sayı girmesini ister ve armstrong sayı mı diye bakar 

int main() 
{
 
	while(1==1) // sonsuz döngüye sokar
	{
			int num,result = 0;
		printf("Sayi giriniz : ");
		scanf("%d", &num);
		   result=0;
		   int basamak=0;
		   int b=num;
		   while (b != 0)
		    {
		    
		       b /= 10;
		       basamak++;
		    }
		    int i,mod =0;
		    int c=num;
			for (i=0;i<basamak;i++)
			{
			  	
			    mod = c % 10;
			    c= c /10;
			    result += pow(mod,basamak); 
			}
		
		    if (result == num)
		        printf("\r\n\r\n\r\n**** %d Armstrong Sayi.\r\n\r\n\r\n", num,result);
	        else 
			    printf("\r\n\r\n\r\nXXXX %d Armstrong Degil.\r\n\r\n\r\n",num);
		char isContinue='E';	// H,h harfi dışındaki herşey bizim içn varsayılan evet demek sayabiliriz.. 
		 printf(" ==========    Devam etmek istiyor musunuz ?     ==========    \r\n\r\n\r\n [ E / H ] :  ");
		scanf("%s", &isContinue);    
		if (isContinue=='H'||isContinue=='h')
		       break;
	}
	return 0;
}


*/



