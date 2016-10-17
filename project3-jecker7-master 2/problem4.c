
#include <stdio.h>
#include <stdlib.h> // For perror and exit
#include <string.h>


//Counts number of distinct characters in a given word
int distinctChars(char *word) {
    char copy[100];
    int i;
    int j;
    int noDupe = 1;
    int count = 0;
    int length = strlen(word);
    for(int i = 0; i < length+1; i++){
        int noDupe = 1;
        int copyLen = strlen(copy);
        for(int j = 0; j < copyLen+1; j++){
            if(word[i] == copy[j]){
            //printf("\nWord[i] = %d, copyj = %d \n", word[i], copy[j]);
            noDupe = 0;
            }
        }
        if(noDupe){
            count++;
            copy[count] = word[i];
        }
       
    }
    return count;
    
}


//Iterates through a given string and counts the number
// new characters, outputting the word from a list in a file
// with the greatest number of distinct characters.
int countDistinct() {
    FILE *f = fopen("words.txt", "r");
    if (f == NULL) {
        perror("fopen");
        exit(1);
    }
    
    char buf[80];
    int highestDistinct = 0;
    int i;
    char distinctWord[100];
    while (fgets(buf, sizeof(buf)+1, f) != NULL) {
        
        int bufLen = strlen(buf);
        buf[strlen(buf) - 1] = '\0';  // Strip terminating newline
        
        if(distinctChars(buf) > highestDistinct){
            
            highestDistinct = distinctChars(buf);
           // printf("\nMost distinct word is: %s \n"
           //             "with %d distinct characters\n", buf, highestDistinct);
            for(int i = 0; i < bufLen; i++){
                distinctWord[i] = buf[i];
                distinctWord[i+1] = 0;
                
            }
        }
        //printf("\n word is %s, with %d distinct chars", distinctWord, distinctChars(distinctWord));
        
    }
    printf("\n word is %s, with %d distinct chars", distinctWord, highestDistinct);
    
    fclose(f);
    
    return 0;
}


int main() {
    countDistinct();
    return 0;
}