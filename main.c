#include <stdio.h>
#include <stdlib.h>

/*A�IK ARTTIRMA PROGRAMI*/

typedef struct {
	
	/*Teklif Miktar� ve Teklif No de�i�kenlerini tan�mlad�m.*/
    int teklifMiktari;
    int teklifNo;
    
    } 

    Teklif;

int main(){
	
	/*Kat�l�mc� Say�s� de�i�kenini tan�mlad�m.*/
    int katilimciSayisi;

    /*Kullan�c�dan scanf fonksiyonu ile Kat�l�mc� Say�s�n� girmesini istedim.Printf fonksiyonu ile ekrana yazd�rd�m.*/
    printf("Katilimci sayisini giriniz:");
    scanf("%d",&katilimciSayisi);

    /*Yanl�� kat�l�mc� say�s� girilmesi durumunda program�n sonlanmas� i�in if ko�ulunu kulland�m.*/
    if(katilimciSayisi<=0){
    	
    	/*Ge�ersiz kullan�c� say�s� girildi�ini ekrana yazd�rd�m.*/
        printf("Gecersiz katilimci sayisi. Program sona eriyor.\n");
        
        return 1;
        
    }

    /*Kat�l�mc� Sat�s�na g�re teklifler i�in bir dizi olu�turdum.*/
    Teklif teklifler[katilimciSayisi];
    
    /*De�i�kenleri tan�mlad�m.*/
    float enYuksekTeklif=-1.0;
    int kazananNo=-1;
    float odeme;

    /*Kullan�c�dan teklifleri girmesini istedim.*/
    printf("Acik artirma icin teklifleri giriniz:\n");

    /*De�i�ken tan�mlad�m.*/
    int i;
    
    /*Kat�l�mc� Say�s�n�n birer birer artt�rarak kullan�c�n�n girmesini sa�layan for d�g�s�n� kulland�m.*/
    for (i=0;i<katilimciSayisi;++i){
    	
        printf("Teklif %d miktarini ve numarasini giriniz:",i+1);
        scanf("%d %d",&teklifler[i].teklifMiktari,&teklifler[i].teklifNo);
        
    }

    /*De�i�ken tan�mlad�m.*/
    int j;
    
    /*En y�ksek teklifi hesaplayan for d�ng�s�n� kulland�m.*/
    for(j=0;j<katilimciSayisi;++j){
    	
        if(teklifler[j].teklifMiktari>enYuksekTeklif){
        	
            enYuksekTeklif=teklifler[j].teklifMiktari;
            kazananNo=j;
            
        }
        
    }
    /*En y�ksek teklifi,kazanan ki�inin numaras�n� ve teklif miktar�n� ekrana yazd�rd�m.*/
    printf("En Yuksek Teklif:%d\n",teklifler[kazananNo].teklifMiktari);
    printf("Kazanan No:%d, Teklif Miktari:%d\n",teklifler[kazananNo].teklifNo, teklifler[kazananNo].teklifMiktari);

    /*Teklifi hesaplatt�m ve ekrana yazd�rd�m.*/
    odeme=enYuksekTeklif*teklifler[kazananNo].teklifNo;
    printf("Odeme Tutari:%.2f\n",odeme);
    
    /*�demenin yap�ld���n� ekrana yazd�rd�m.*/
    printf("Odeme yapiliyor...\n");

    /*�demenin tamamland���n� ve kazanan ki�inin numaras�n� ekrana yazd�rd�m.*/
    printf("Odeme tamamlandi. Kazanan Kisi:%d\n",teklifler[kazananNo].teklifNo);

    return 0;
    
}
