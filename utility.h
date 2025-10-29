#include<stdio.h>
#include<string.h>
#define MAX 100
typedef struct
{
    FILE *fin;
    FILE *fout;

    char key[MAX];
}Process;

typedef enum
{
    e_encode,
    e_decode,
    e_failure,
    e_success
}Status;

void print_help(char *argv[]);
Status Get_operation_type(char *argv[],Process *Data);
Status xor_proccess(Process *Data);