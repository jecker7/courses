#include <stdio.h>


//*** Converts a hex string to an integer ***//
//
// Input: an unsigned hexadecimal value represented as a string
//     you may assume it contains only 0-9 and A-F and is not prefixed by 0x
//
// Returns: the int having the string's value
int hextoi(char *hex) {
   int num = (int)strtol(hex, NULL, 16);      
   return num;
}

int main() {
    
    char *test[] = {"00",  // 0
                    "10",  // 16
                    "AA",  // 170
                    "FF",  // 255
                    "123",  // 291
                    "ABC",  // 2748
                    "DEF",  // 3567
                    "10FA"};  // 4346
    
    int i;
    for (i = 0; i < 8; i++) {
        int converted = hextoi(test[i]);
        printf("Value of %s = %d\n", test[i], converted);
    }
    
    return 0;
}