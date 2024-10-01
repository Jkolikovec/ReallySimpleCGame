#include <stdio.h>

char charak;
char rozhodnuti;

int main(){
    printf("Zadej pismenko (a/b/c) ");
    scanf("%c", &rozhodnuti);
    switch(rozhodnuti){
    case 'a':
    printf("Ahoj\n");
    int cislo = 5;
    int cislo2;
    printf("%d\n", cislo);
    printf("Zadej cislo ");
    scanf("%d", &cislo2);
    getchar();
    printf("iijmijm: %d\n", cislo2);
    printf("Zadej znak: ");
    scanf("%c", &charak);
    getchar();
    printf("assaf: %c\n", charak);
    int vysledek = cislo + cislo2;
    printf("vysledek %d\n", vysledek);
    if(cislo2==5){
        printf("vysledek je 10");
    }
    else if(cislo2==6){
        printf("vysledek je 11");
    }
    else{
        printf("vysledek neni 10 ani 11");
    }
    case 'b':
    
    }

    return 0;
}