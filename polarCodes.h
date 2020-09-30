#include <stdio.h>

// Polar Codes

struct PC_CONFIG {
    int E;
    int K;
    int nMax;
    int UL_DL;
    int iIL;
    int iBIL;
    int L;
    int crcLen;
    int crcPolyID;
} pcConfig;

int * NR_PC_ENCODER(int * bits, struct PC_CONFIG pcConfig);
int * NR_PC_DECODER(int * bits, struct PC_CONFIG pcConfig);

int * NR_CRC_ENCODER(int * bits, struct PC_CONFIG pcConfig);
int * NR_CRC_DECODER(int * bits, struct PC_CONFIG pcConfig);

int * NR_PC_RATE_MATCH(int * bits, struct PC_CONFIG pcConfig);
int * NR_PC_RATE_REMOVE(int * bits, struct PC_CONFIG pcConfig);

int * SC_DECODER(float * bits, struct PC_CONFIG pcConfig);
int * SCL_DECODER(float * bits, struct PC_CONFIG pcConfig);
int * BP_DECODER(float * bits, struct PC_CONFIG pcConfig);

// BPSK Modulation

float * BPSK_MOD(int * bits);
float * BPSK_DEMOD(float * syms, int BITS_LLR);

// Fading and AWGN Channels

float * AWGN(float * syms, float SNRdB);
float * EPA1(float * syms, int numRxAnt, float dopplerFreq, float initTime);

// Utilities and Misc.

int * DATA_GEN(int numBits);
void PRINT_ARRAY_INT(int * dataBits, int numBits);
void PRINT_ARRAY_FLOAT(float * mat);
int * poly_long_div(int * dataBits, int * crcPoly, struct PC_CONFIG pcConfig);
int degree_poly(int * poly, int numBits);

