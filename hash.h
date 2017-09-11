#ifndef _HASH_H
#define _HASH_H

#ifdef __cplusplus
extern "C" {
#endif

/* A Simple Hash Function */
unsigned int simple_hash(char *str, unsigned int key_len);

/* RS Hash Function */
unsigned int RS_hash(char *str, unsigned int key_len);

/* JS Hash Function */
unsigned int JS_hash(char *str, unsigned int key_len);

/* P. J. Weinberger Hash Function */
unsigned int PJW_hash(char *str, unsigned int key_len);

/* ELF Hash Function */
unsigned int ELF_hash(char *str, unsigned int key_len);

/* BKDR Hash Function */
unsigned int BKDR_hash(char *str, unsigned int key_len);

/* SDBM Hash Function */
unsigned int SDBM_hash(char *str, unsigned int key_len);

/* DJB Hash Function */
unsigned int DJB_hash(char *str, unsigned int key_len);

/* AP Hash Function */
unsigned int AP_hash(char *str, unsigned int key_len);

/* CRC Hash Function */
unsigned int CRC_hash(char *str, unsigned int key_len);

#ifdef __cplusplus
}
#endif

#endif
