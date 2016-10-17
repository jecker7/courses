
#include <stdio.h>
#include <stdlib.h> // For perror and exit
#include <string.h>


//Checks if the word is a palindrome. returns true if so.
int palindromes(char *word) {
  char* remain;
  char* compare;
  
  int i;
  //splits the word to be checked in half, and compares each half
  int pivot = strlen(word)/2;
  
  for(int i = 0; i < pivot; i++){
      if(word[i] != word[strlen(word) - 1 - i])
        return 0;
  }
  return 1;
  
  
 
    
}



int checkPalindromes() {
    FILE *f = fopen("words.txt", "r");
    if (f == NULL) {
        perror("fopen");
        exit(1);
    }
    
    char buf[64];
    
    while (fgets(buf, sizeof(buf), f) != NULL) {
        buf[strlen(buf) - 1] = '\0';  // Strip terminating newline
        
        if(palindromes(buf)) {
            printf("%s\n", buf);
        }
    }
    
    fclose(f);
    
    return 0;
}


int main() {
    checkPalindromes();
    return 0;
}