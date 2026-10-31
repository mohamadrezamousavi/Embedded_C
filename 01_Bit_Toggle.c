#include <stdio.h>

void bit_toggle(unsigned char * reg){
    *reg ^= (1 << 5);
}

int main (){
    unsigned char reg;
    scanf("%hhu", &reg);
    bit_toggle(&reg);
    printf("%d", reg);
}