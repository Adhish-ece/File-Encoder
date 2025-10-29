#include "utility.h"
void print_help(char *argv[])
{
    printf("Usage:\n");
    printf("  %s <operation> <input_file> <output_file> <key>\n", argv[0]);
    printf("\nExample:\n");
    printf("  %s encode message.txt encoded.txt K\n", argv[0]);
    printf("  %s decode encoded.txt decoded.txt K\n", argv[0]);

}

Status Get_operation_type(char *argv[],Process *Data)
{
   
    strcpy(Data->key,argv[4]);
    Data->fout = fopen(argv[3],"wb");
    Data->fin = fopen(argv[2],"rb");
    if(!Data->fin)
    {
        perror("FIle error");
        return e_failure;
    }
     
    if(strcmp(argv[1],"encode")==0)
    {
        return e_encode;
    }
    else if(strcmp(argv[1],"decode")==0)
    {
        return e_decode;
    }
    return e_failure;
}

Status xor_proccess(Process *Data)
{
    
    fseek(Data->fin,0,SEEK_SET);
    fseek(Data->fout,0,SEEK_SET);
    
    int ch;
    int i =0;
    int len = strlen(Data->key);
    while((ch = fgetc(Data->fin))!=EOF)
    {
        fputc(ch ^ Data->key[i%len],Data->fout);
        i++;
    }
    fclose(Data->fin);
    fclose(Data->fout);
    return e_success; 
}