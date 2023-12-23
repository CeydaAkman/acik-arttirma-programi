#include <stdio.h>
#include <stdlib.h>

/*AÇIK ARTTIRMA PROGRAMI*/

typedef struct {
	
    /*Teklif Miktarı ve Teklif No değişkenlerini tanımladım.*/
    int teklifMiktari;
    int teklifNo;
    
    } 

    Teklif;

int main(){
	
    /*Katılımcı Sayısı değişkenini tanımladım.*/
    int katilimciSayisi;

    /*Kullanıcıdan scanf fonksiyonu ile Katılımcı Sayısını girmesini istedim.Printf fonksiyonu ile ekrana yazdırdım.*/
    printf("Katilimci sayisini giriniz:");
    scanf("%d",&katilimciSayisi);

    /*Yanlış katılımcı sayısı girilmesi durumunda programın sonlanması için if koşulunu kullandım.*/
    if(katilimciSayisi<=0){
    	
    	/*Geçersiz kullanıcı sayısı girildiğini ekrana yazdırdım.*/
        printf("Gecersiz katilimci sayisi. Program sona eriyor.\n");
        
        return 1;
        
    }

    /*Katılımcı Satısına göre teklifler için bir dizi oluşturdum.*/
    Teklif teklifler[katilimciSayisi];
    
    /*Değişkenleri tanımladım.*/
    float enYuksekTeklif=-1.0;
    int kazananNo=-1;
    float odeme;

    /*Kullanıcıdan teklifleri girmesini istedim.*/
    printf("Acik artirma icin teklifleri giriniz:\n");

    /*Değişken tanımladım.*/
    int i;
    
    /*Katılımcı Sayısının birer birer arttırarak kullanıcının girmesini sağlayan for dögüsünü kullandım.*/
    for (i=0;i<katilimciSayisi;++i){
    	
        printf("Teklif %d miktarini ve numarasini giriniz:",i+1);
        scanf("%d %d",&teklifler[i].teklifMiktari,&teklifler[i].teklifNo);
        
    }

    /*Değişken tanımladım.*/
    int j;
    
    /*En yüksek teklifi hesaplayan for döngüsünü kullandım.*/
    for(j=0;j<katilimciSayisi;++j){
    	
        if(teklifler[j].teklifMiktari>enYuksekTeklif){
        	
            enYuksekTeklif=teklifler[j].teklifMiktari;
            kazananNo=j;
            
        }
        
    }
    /*En yüksek teklifi,kazanan kişinin numarasını ve teklif miktarını ekrana yazdırdım.*/
    printf("En Yuksek Teklif:%d\n",teklifler[kazananNo].teklifMiktari);
    printf("Kazanan No:%d, Teklif Miktari:%d\n",teklifler[kazananNo].teklifNo, teklifler[kazananNo].teklifMiktari);

    /*Teklifi hesaplattım ve ekrana yazdırdım.*/
    odeme=enYuksekTeklif*teklifler[kazananNo].teklifNo;
    printf("Odeme Tutari:%.2f\n",odeme);
    
    /*Ödemenin yapıldığını ekrana yazdırdım.*/
    printf("Odeme yapiliyor...\n");

    /*Ödemenin tamamlandığını ve kazanan kişinin numarasını ekrana yazdırdım.*/
    printf("Odeme tamamlandi. Kazanan Kisi:%d\n",teklifler[kazananNo].teklifNo);

    return 0;
    
}
