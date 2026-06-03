#include <stdio.h>
#include <stdbool.h>
int main() {
    int card;
    int numeroB=0;
    int n;
    printf("inserisci il numero massimo di elementi dell'insieme: ");
    scanf("%d", &n);
    char insieme[n];
    char elem;
    for (int i = 0; i < n; i++) {
        printf("inserisci elemento (solo singolo carattere alfanumerico) %d: ", i + 1);
        scanf(" %c", &elem); 
        bool gia_presente = false;
        for (int j = 0; j < card; j++) {
            if (insieme[j] == elem) {
                gia_presente = true;
                break;
            }
        }
        if (!gia_presente) {
            insieme[card] = elem;
            card++;
        } else {
            printf("l'elemento è già presente nell'insieme\n");
        }
    }
    int array[card];
    array[0]=1;
    for (int i=1;i<=card;i++) {
        array[i]=0;
    }
    for (int i=card;i>1;i--) {
        for (int k=card;k>1;k--) {
            array[k-1]=array[k-1]*k+array[k-2];
        }
    }
    for (int i=0;i<card;i++) {
        printf("%d ",array[i]);
        numeroB=numeroB+array[i];
    }
    printf("\n");
    printf("il numero di partizioni possibile sono: %d\n",numeroB);
    return 0;
}