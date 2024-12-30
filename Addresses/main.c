//
//  main.c
//  Addresses
//
//  Created by Edwin Cardenas on 12/30/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i = 17;
    int *addressOfI = &i;
    
    printf("i stores it's value %d at %p\n", i, &addressOfI);
    printf("This function starts at %p\n", main);
    printf("The int stored at addressOfI is %d\n", *addressOfI);
    
    *addressOfI = 89;
    printf("Now i is %d\n", i);
    
    printf("An int is %zu bytes\n", sizeof(i));
    printf("An int pointer is %zu bytes\n", sizeof(addressOfI)); // 4 if 32-bit, 8 if 64-bit
    
    printf("A float pointer is %zu bytes\n", sizeof(float));
    
    return 0;
}
