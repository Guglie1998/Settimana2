#include <stdio.h>

int main() {
    
    //inserimento variabili
    float primo_numero, secondo_numero, moltiplicazione, media;
    int selezione;

    printf("CONSEGNA [SETTIMANA 2 LEZIONE 3]\n");
    printf("\n");

    //selezione calcolo
    printf("1. Moltiplica due valori\n");
    printf("2. Calcola la media di due valori\n");
    printf("Seleziona una opzione (0 per terminare): ");
    scanf("%d", &selezione);
    while (selezione>2)
    {
        printf("ERRORE, valore non riconosciuto\n");
        printf("Seleziona una opzione (0 per terminare): ");
        scanf("%d", &selezione);
    }
    printf("\n");

    switch (selezione)
    {
        case 1:
            //moltiplicazione
            printf("[MOLTIPLICAZIONE DI DUE VALORI]\n");
            printf("Inserisci un primo numero: ");
            scanf("%f", &primo_numero);

            printf("Inserisci il secondo numero: ");
            scanf("%f", &secondo_numero);
            printf("\n");

            moltiplicazione=primo_numero*secondo_numero;

            printf("La moltiplicazione tra i due numeri risulta: %.2f", moltiplicazione);

            break;

        case 2:
            //media
            printf("[MEDIA TRA DUE VALORI]\n");
            printf("Inserisci un primo numero: ");
            scanf("%f", &primo_numero);

            printf("Inserisci il secondo numero: ");
            scanf("%f", &secondo_numero);
            printf ("\n");

            media=(primo_numero+secondo_numero)/2;

            printf("La media tra i due numeri risulta: %.2f", media);

            break;
        case 0:
            break;
    }


   
   return 0;
}