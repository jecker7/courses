
#include <stdio.h>
#include <stdlib.h> // For perror and exit
#include <string.h>


//Checks for vowels and y's, returns true if no vowels and y's are found.
int vowelsY(char *word) {
    
    char vowels[6] = {'a', 'e', 'i', 'o', 'u', 'y'};
    int i = 0;
    int j = 0;
    int len = strlen(word);
    //printf("word = %s", word);
    //printf("len = %d", len);
    for(i = 0; i < len; i++){
        //printf("gets to here");
        for(j = 0; j < 6; j++){
            //printf("word[i] = %c, i = %d", word[i], i);
            if(word[i]==vowels[j]){
                return 0;
            }
        }
    }
    return 1;
}


//iterates through the words in a file using a buffer,
//and checks for vowels and y's
int checkForVowels() {
    FILE *f = fopen("words.txt", "r");
    if (f == NULL) {
        perror("fopen");
        exit(1);
    }
    
    char buf[64];
    
    while (fgets(buf, sizeof(buf), f) != NULL) {
        buf[strlen(buf) - 1] = '\0';  // Strip terminating newline
        
        if(vowelsY(buf)) {
            printf("%s\n", buf);
        }
    }
    
    fclose(f);
    
    return 0;
}


int main() {
    checkForVowels();
    return 0;
}