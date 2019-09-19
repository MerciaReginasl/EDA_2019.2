/*
 * =====================================================================================
 *
 *       Filename:  pacote.h
 *
 *    Description:  Definições de tipos e funções para a questão 4
 *
 *        
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <string.h>

#define ACKPACKET 1
#define DATAPACKET 0

typedef struct{
    int packet_type; //1 para ACK e 0 para DATAPACKET
    uint8_t id_pkg, qnt_bytes, *bytes;
    uint32_t addr_dest, addr_source;
} Packet;

Packet *createDataPacket(uint8_t id, uint8_t qnt_b, uint32_t source, uint32_t dest){
    if(qnt_b > 100 || qnt_b < 0) return NULL;
    Packet *p =(Packet*)malloc(sizeof(Packet));
    p->id_pkg = id;
    p->addr_dest = dest;
    p->addr_source = source;
    p->packet_type =  DATAPACKET;
    p->qnt_bytes = qnt_b;
    uint8_t *p_bytes = (uint8_t*)malloc(qnt_b*(sizeof(uint8_t)));
    p->bytes = p_bytes;
    return p;
}

Packet *createACKPacket(uint8_t id, uint32_t source, uint32_t dest){
    Packet *p = (Packet*)malloc(sizeof(Packet));
    p->id_pkg = id;
    p->addr_source = source;
    p->addr_dest = dest;
    p->bytes = NULL;
    p->qnt_bytes = 0;
    p->packet_type = ACKPACKET;
    return p;
}

void writeData(const Packet *p, uint8_t *data, uint8_t q_data){
    uint8_t i, max_bytes = p->qnt_bytes;
    for(i = 0;i < max_bytes; i++){
        if(i < q_data) p->bytes[i] = data[i];
        else p->bytes[i] = 0;
    }
}

Packet *clonePacket(const Packet *p){
    Packet *cp;
    if(p->packet_type == ACKPACKET)
        cp = createACKPacket(p->id_pkg, p->addr_source, p->addr_dest);
    else{
        cp = createDataPacket(p->id_pkg, p->qnt_bytes, p->addr_source, p->addr_dest);
        writeData(cp, p->bytes, p->qnt_bytes);
    }
    return cp;
}

void printPacketInformation(const Packet *p){
    char type[5];
    (p->packet_type == ACKPACKET) ? strcpy(type, "ACK"): strcpy(type, "DATA");

    printf("Packet type: %s\n", type);
    printf("ID: %d\n", p->id_pkg);
    printf("Source Addres: %d\n", p->addr_source);
    printf("Destination Addres: %d\n", p->addr_dest);

    if(p->packet_type==DATAPACKET){
        printf("Payload Size: %d\n", p->qnt_bytes);
        uint8_t i, payload_size = p->qnt_bytes, *payload = p->bytes;
        for(i = 0; i < payload_size-1; i++) printf("%d ", payload[i]);
        printf("%d\n",payload[payload_size-1]);
    }
}

void deletePacket(Packet *p){
    if(p->packet_type==DATAPACKET) free(p->bytes);
    free(p);
}
