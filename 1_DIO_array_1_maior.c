#include <stdio.h>

//

int encontrarMaior(int arr[], int tam){

    int maior = arr[0];     // inicializando o maior como o primeiro elemento
        for(int i = 1; i < tam; i++){
            if(arr[i] > maior){
                maior = arr[i];     // atualiza o maior, se necessario
            }
    }

    return maior;
}

int main(){

    int arr[5] = {1, 7, 3, 4, 5};  // arary com 5 elementos

    int maior = encontrarMaior(arr, 5); // econtra o maior elemento

    printf("O maior elemento do array: %d", maior);


return 0 ;
}


