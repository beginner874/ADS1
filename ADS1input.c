#include <stdio.h>
#include <stdbool.h>
int main() {
    int card=0;
    int temp;
    int temp1;
    int numeroB=0;
    int n;
    printf("Inserisci il numero massimo di elementi dell'insieme: ");
    scanf("%d", &n);
    char insieme[n];
    char elem;
    for (int i = 0; i < n; i++) {
        printf("Inserisci elemento %d: ", i + 1);
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
            printf("L'elemento '%c' e' gia' presente nell'insieme!\n", elem);
        }
    }
    int array[card];
    array[0]=1;
    for (int i=1;i<=card;i++) {
        array[i]=0;
        printf("%d ",array[i-1]);
    }
    printf("\n");
    for (int i=1;i<card;i++) {
        temp=array[i-1];
        for (int k=1;k<card;k++) {
            temp1=temp;
            temp=array[k];
            array[k]=array[k]*(k+1)+temp1;
        }
        for (int j=0;j<card;j++) {
                printf("%d ",array[j]);
            }
            printf("\n");
    }
    for (int i=0;i<card;i++) {
            numeroB=numeroB+array[i];
    }
    printf("\n");
    printf("il numero di partizioni possibile sono: %d\n",numeroB);
    return 0;
}