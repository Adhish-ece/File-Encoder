#include "utility.h"

int main(int argc,char *argv[])
{
    if(argc !=5)
    {
        print_help(argv);
    }
    Process Data;
    Status Optye = Get_operation_type(argv,&Data);
    if(Optye == e_encode)
    {
        printf("Info: Encoding option is selected\n");
        xor_proccess(&Data);
        printf("Info: Encoding proccess done\n");
    }
    else if(Optye == e_decode)
    {
        printf("Info: Decod option is selected\n");
        xor_proccess(&Data);
        printf("Info: Decoding proccess done\n");
    }
    else
    {
        print_help(argv);
    }
    

}