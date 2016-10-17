#include <stdio.h>
#include <string.h>

//*** Sorts an array of strings in place using bubble sort***//
//
// Inputs:
//   strings: the array of strings, each entry is type char *
//   length: the number of entries in the array
//
// Returns: nothing, the strings are sorted in place
void stringSort(char *strings[], int length) {
    int c = 0;
    int d = 0;
    int swap = 0;
    //sorting the array of strings using bubble sort
    for(c = 0; c < (length -1); c++)
    {
        
        for(d = 0; d < length - c -1; d++)
        {
            if(strcmp(strings[d], strings[d+1]))
            {
                swap = strings[d];
                strings[d] = strings[d+1];
                strings[d+1] = swap;
            }
            
        }
    }
    
    return;
}


int main() {
    char *animals[] = {"zebra", "quail", "xenops",
                       "aardwolf", "aardvark", "dog",
                       "bear", "cat", "bearcat"};
    
    stringSort(animals, 9);
    
    int i;
    for (i = 0; i < 9; i++) {
        printf("%s\n", animals[i]);
    }

    return 0; 
}
