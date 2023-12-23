#include <stdio.h>
#include <stdlib.h>

/*AÇIK ARTTIRMA PROGRAMI*/

typedef struct {
	
	/*Teklif Miktarý ve Teklif No deðiþkenlerini tanýmladým.*/
    int teklifMiktari;
    int teklifNo;
    
    } 

    Teklif;

int main(){
	
	/*Katýlýmcý Sayýsý deðiþkenini tanýmladým.*/
    int katilimciSayisi;

    /*Kullanýcýdan scanf fonksiyonu ile Katýlýmcý Sayýsýný girmesini istedim.Printf fonksiyonu ile ekrana yazdýrdým.*/
    printf("Katilimci sayisini giriniz:");
    scanf("%d",&katilimciSayisi);

    /*Yanlýþ katýlýmcý sayýsý girilmesi durumunda programýn sonlanmasý için if koþulunu kullandým.*/
    if(katilimciSayisi<=0){
    	
    	/*Geçersiz kullanýcý sayýsý girildiðini ekrana yazdýrdým.*/
        printf("Gecersiz katilimci sayisi. Program sona eriyor.\n");
        
        return 1;
        
    }

    /*Katýlýmcý Satýsýna göre teklifler için bir dizi oluþturdum.*/
    Teklif teklifler[katilimciSayisi];
    
    /*Deðiþkenleri tanýmladým.*/
    float enYuksekTeklif=-1.0;
    int kazananNo=-1;
    float odeme;

    /*Kullanýcýdan teklifleri girmesini istedim.*/
    printf("Acik artirma icin teklifleri giriniz:\n");

    /*Deðiþken tanýmladým.*/
    int i;
    
    /*Katýlýmcý Sayýsýnýn birer birer arttýrarak kullanýcýnýn girmesini saðlayan for dögüsünü kullandým.*/
    for (i=0;i<katilimciSayisi;++i){
    	
        printf("Teklif %d miktarini ve numarasini giriniz:",i+1);
        scanf("%d %d",&teklifler[i].teklifMiktari,&teklifler[i].teklifNo);
        
    }

    /*Deðiþken tanýmladým.*/
    int j;
    
    /*En yüksek teklifi hesaplayan for döngüsünü kullandým.*/
    for(j=0;j<katilimciSayisi;++j){
    	
        if(teklifler[j].teklifMiktari>enYuksekTeklif){
        	
            enYuksekTeklif=teklifler[j].teklifMiktari;
            kazananNo=j;
            
        }
        
    }
    /*En yüksek teklifi,kazanan kiþinin numarasýný ve teklif miktarýný ekrana yazdýrdým.*/
    printf("En Yuksek Teklif:%d\n",teklifler[kazananNo].teklifMiktari);
    printf("Kazanan No:%d, Teklif Miktari:%d\n",teklifler[kazananNo].teklifNo, teklifler[kazananNo].teklifMiktari);

    /*Teklifi hesaplattým ve ekrana yazdýrdým.*/
    odeme=enYuksekTeklif*teklifler[kazananNo].teklifNo;
    printf("Odeme Tutari:%.2f\n",odeme);
    
    /*Ödemenin yapýldýðýný ekrana yazdýrdým.*/
    printf("Odeme yapiliyor...\n");

    /*Ödemenin tamamlandýðýný ve kazanan kiþinin numarasýný ekrana yazdýrdým.*/
    printf("Odeme tamamlandi. Kazanan Kisi:%d\n",teklifler[kazananNo].teklifNo);

    return 0;
    
}
