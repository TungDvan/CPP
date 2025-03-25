#include <stdio.h>

void __fastcall check_result(unsigned int a1)
{
    int j; // [sp+10h] [bp-10h]
    int v3; // [sp+14h] [bp-Ch]
    int i; // [sp+18h] [bp-8h]
    int v5; // [sp+1Ch] [bp-4h]

    printf("bytes: %08x\n", a1);
    v5 = 0;
    for (i = 0; i <= 3; ++i)
    {
        v3 = 0;
        for (j = 0; j <= 7; ++j)
            //printf("%d %d %x %x\n", i, j, (a1 >> ((8 * i) & 0x1F)), (a1 >> ((8 * i) & 0x1F)) >> (j & 0x1F));
            v3 |= (((unsigned __int8)(a1 >> ((8 * i) & 0x1F)) >> (j & 0x1F)) & 1) << ((j + 2) & 7);
                

        v5 |= v3 << ((8 * i) & 0x1F);
        //printf("result: %08x\n", v5);
    }
    printf("result: %08x\n", v5);
}
//f3->cf    11110011->11001111
//f4->d3    11110100->11010011
//48->21    01001000->00100001
//f3->cf

int main() {
    //check_result(0xf348f4f3);
    check_result(0x566ab5ca);
    return 0;
}


