#ifndef _STUFFING_H
#define _STUFFING_H

#include "defines.h"

void bcc2_stuffing(unsigned char *bcc2, int *size, unsigned char *bcc2_stuffed);
unsigned char *data_stuffing(unsigned char *data, int size, int *final_size);
unsigned char *data_destuffing(unsigned char *data, int size, int *final_size);
void bcc2_destuffing(unsigned char *bcc2_s, unsigned char *bcc2);

#endif
