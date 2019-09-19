/*
 * =====================================================================================
 *
 *       Filename:  testepacotes.c
 *
 *    Description:  Teste da struct e dos metodos implementados no arquivo pacote.h
 *
 *        
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include "pacote.h"

void main(){
    Packet *p1, *p2, *p3;
    // Criando os pacotes do tipo Data e ACK(pacote de reconhecimento)
    p1 = createDataPacket(10, 5, 1, 2);
    p2 = createACKPacket(20, 1, 2);
    p3 = createDataPacket(13, 123, 3, 1);  //Tentando criar pacote com carga útil maior que 100.

    printf("Ponteiro para p3: %ld\n", p3);
    

    // Criando a carga que sera destinada ao pacote p1
    uint8_t data[] = {1,2,3,4,112};
    writeData(p1, data, 5);

    // Colnando os pacote p1 e p2 com a função clonePacket
    Packet *clonep1, *clonep2, *clonep1p;
    clonep1 = clonePacket(p1);
    clonep1p = clonePacket(p1);
    clonep2 = clonePacket(p2);

    // Populando o payload do clonep1
    uint8_t data_clone[] = {12, 24, 87};
    writeData(clonep1, data_clone, 3);


    // Imprimindo as informações dos pacotes
    printPacketInformation(p1);
    printf("\n");

    printPacketInformation(p2);
    printf("\n");

    printf("Clone de p1 com payload modificado:\n");
    printPacketInformation(clonep1);
    printf("\n");

    printf("Clone puro de p1:\n");
    printPacketInformation(clonep1p);
    printf("\n");

    printf("Clone de p2(tipo ACK):\n");
    printPacketInformation(clonep2);
    // Deletando os pacotes da memória
    deletePacket(p1);
    deletePacket(p2);

    deletePacket(clonep1);
    deletePacket(clonep2);
    deletePacket(clonep1p);
}
