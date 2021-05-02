#include <stdio.h>
 
    int main()
    {
		//Deðiþken tanýmlarý
        int i = 0, j = 0 ,sayi = 0, basamak = 0,temp=0;
        while (sayi<=0)
        {
	        // Sayýyý al
	        printf("Sayi gir : ");
	        scanf("%d", &sayi);
	        temp = sayi; // Sayý üzerinde yapýlacak manipulasyonlarý tutacak deðiþken
		}
		
		//Basamak sayýsý tespiti 
        while (temp != 0)
        {
            temp /= 10;
            basamak++;
        }
        int bsm[basamak - 1]; // Basamaklardaki sayýlarý tutacak dizi tanýmý
      
		temp=sayi; // tekrar manipule etmeye hazýrla 
        for (i = 0; i < basamak; i++)
        {
            bsm[i] = temp % 10; // basamaktaki sayýyý bul ve dizide sýrasýna ata
            temp /= 10; 
        }
		// Büyükten küçüðe sýrala
        for (i = 0; i < basamak - 1; i++)
        {
            for (j = i + 1; j < basamak; j++)
                if (bsm[j] > bsm[i])
                {
                    temp = bsm[j];
                    bsm[j] = bsm[i];
                    bsm[i] = temp;
                }
        }

        printf("\n En Buyuk : ");
        for (i = 0; i < basamak; i++)
            printf("%d", bsm[i]);// En büyük sayýnýn rakamlarýný yanyana yaz

		// Küçükten büyüðe sýrala
        for (i = 0; i < basamak - 1; i++)
        {
            for (j = i + 1; j < basamak; j++)
                if (bsm[j] < bsm[i])
                {
                    temp = bsm[j];
                    bsm[j] = bsm[i];
                    bsm[i] = temp;
                }
        }
        
        printf("\n En Kucuk : ");
        for (i = 0; i < basamak; i++)
        {
            if (bsm[i] == 0 && basamak>=2) // basamak sayýsý 2'den fazla ve 0 rakamý varsa sayýnýn içerisinde , 0 ile baþlamamasý için düzeltme 
            {
                printf("%d%d", bsm[i + 1], bsm[0]);
                i++;
            }
            else
                printf("%d", bsm[i]);
        }
        
        return 0;
    }


