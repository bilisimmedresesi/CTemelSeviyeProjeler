#include <stdio.h>
 
    int main()
    {
		//De�i�ken tan�mlar�
        int i = 0, j = 0 ,sayi = 0, basamak = 0,temp=0;
        while (sayi<=0)
        {
	        // Say�y� al
	        printf("Sayi gir : ");
	        scanf("%d", &sayi);
	        temp = sayi; // Say� �zerinde yap�lacak manipulasyonlar� tutacak de�i�ken
		}
		
		//Basamak say�s� tespiti 
        while (temp != 0)
        {
            temp /= 10;
            basamak++;
        }
        int bsm[basamak - 1]; // Basamaklardaki say�lar� tutacak dizi tan�m�
      
		temp=sayi; // tekrar manipule etmeye haz�rla 
        for (i = 0; i < basamak; i++)
        {
            bsm[i] = temp % 10; // basamaktaki say�y� bul ve dizide s�ras�na ata
            temp /= 10; 
        }
		// B�y�kten k����e s�rala
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
            printf("%d", bsm[i]);// En b�y�k say�n�n rakamlar�n� yanyana yaz

		// K���kten b�y��e s�rala
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
            if (bsm[i] == 0 && basamak>=2) // basamak say�s� 2'den fazla ve 0 rakam� varsa say�n�n i�erisinde , 0 ile ba�lamamas� i�in d�zeltme 
            {
                printf("%d%d", bsm[i + 1], bsm[0]);
                i++;
            }
            else
                printf("%d", bsm[i]);
        }
        
        return 0;
    }


