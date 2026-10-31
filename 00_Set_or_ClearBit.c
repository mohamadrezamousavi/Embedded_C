#include <stdio.h>

unsigned char modifybit(unsigned char reg, int pos, int mode){
    if (mode == 1){
        reg |= (1 << pos); //(00001000)  for pos = 3// set bit
    }
    else if( mode == 0){
        reg &= ~(1 << pos); // (11110111) for pos = 3 // clear bit
    }
}

int main (){
    unsigned char reg = 0;
    int pos, mode;
    printf("Enter reg pos mode: ");
    scanf("%hhu %d %d", &reg, &pos, &mode);
    printf("new value is: %d\n", modifybit(reg,pos,mode));
    return 0;
}