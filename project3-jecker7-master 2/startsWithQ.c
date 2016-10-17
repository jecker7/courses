// Find words in the list that start with q but not qu
// DSM, 2016

#include <stdio.h>
#include <stdlib.h> // For perror and exit
#include <string.h>


//*** Tests a word ***//
//
// It's helpful to put complex tests in their own functions, rather than
// in the basic file-reading loop.
int startsWithQButNotQu(char *word) {
    if (word[0] == 'q' && word[1] != 'u') {
        return 1;
    } else {
        return 0;
    }
}


//*** Reads and tests every word in the list ***//
void readWordList() {
    FILE *f = fopen("words.txt", "r");
    if (f == NULL) {
        perror("fopen");
        exit(1);
    }
    
    char buf[64];
    
    while (fgets(buf, sizeof(buf), f) != NULL) {
        buf[strlen(buf) - 1] = '\0';  // Strip terminating newline
        
        if (startsWithQButNotQu(buf)) {
            printf("%s\n", buf);
        }
    }
    
    fclose(f);
    
    return;
}


int main() {
    readWordList();
    return 0;
}