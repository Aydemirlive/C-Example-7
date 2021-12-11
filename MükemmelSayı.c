#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int sayi,toplam,x;
    printf("Sayi giriniz");
    scanf("%d",&sayi);
    toplam=0;
    for(x=1;x<=(sayi/2);x++){
                           
    
                          if(sayi%x==0)
                          toplam=toplam+x;
                          }                    
                          if(sayi==toplam)
                          printf("sayi mukemmeldir");
                          else 
                          printf("sayi mukemmel degildir");
  system("PAUSE");	
  return 0;
}
