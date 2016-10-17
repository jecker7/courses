
#include <stdio.h>
#include <stdlib.h> // For perror and exit
#include <string.h>


//*** Tests a word ***//
//
// Checks for three consecutive pairs of double letters
int tripleDouble(char *word) {
    int i, j, k, l, m, n;
    for(int i = 0; i < strlen(word); i++){
            if(word[i] == word[i+1] && word[i+1]!= NULL){
                if(word[i+2] == word[i+3] && word[i+3]!=NULL){
                    if(word[i+4] == word[i+5] && word[i+5]!= NULL)
                    return 1;
                }
        }
           
    }
   
    return 0;
   


}
//reading the file and checking for doubles
void readWordList() {
    FILE *f = fopen("words.txt", "r");
    if (f == NULL) {
        perror("fopen");
        exit(1);
    }
    
    char buf[64];
    
    while (fgets(buf, sizeof(buf), f) != NULL) {
        buf[strlen(buf) - 1] = '\0';  // Strip terminating newline
        
        if (tripleDouble(buf)) {
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