# Project 3: Pointers and Strings

### Due Sunday, 10/16, at 11:59 PM.

## Description

These problems will give your practice working with pointers, strings, and basic file input in C.

Include a `Makefile` to build all of your programs from source. Make sure your programs build and run correctly on the Cloud9 environment.

## Files

  - `Project-3.md`: this file
  - `README.md`: edit this to include your name and a statement of the Honor Code
  - `words.txt`: a plain text list of words, one per line
  - `startsWithQ.c`: finds all of the words in the list that start with *q* but not *qu*
  - `stringSort.c`: incomplete program that sorts an array of strings
  - `hexConversion.c`: incomplete program that converts hex strings to integers

## Wordplay

Take a look at the file `words.txt`, which contains a large list of words taken from crossword puzzle answers. Some of the words are enjoyably exotic. There is one word on each line.

The following questions ask about words having particular characteristics. Write a C program to answer each question. Your files should be named `problem1.c`, `problem2.c`, and so forth.

Each program should open `words.txt`, examine the words it contains, and print the words that satisfy the question to the console. Please don't add any unnecessary output to your programs. `startsWithQ.c` provides an example.
    
  1. The Welsh word *cwm* ("a rounded, glaciated valley") contains no vowels and no *y*. Print all the words in the word list that contain no vowels and no *y*.
  
  2. The word *balloon* contains two consecutive pairs of double letters. Are there any words that have three consecutive pairs of double letters?
  
  3. A palindrome is a word that reads the same both forwards and backwards, like *TACOCAT*. Print all the palindromes in the word list. Remember that `fgets` includes the terminating `\n` in any line that it reads, which doesn't count as part of the word.
  
  4. The word *football* contains six distinct letters. Find the word in the list having the most distinct letters. Think about how to represent the set of letters the word contains.

## String Sorter

Take a look at the file `stringSort.c`. Finish writing the `stringSort` function, which should take an array of strings as its input and sort them in-place. You can use any sorting algorithm. Don't allocate any new memory or copy any of the strings to new locations; everything should be done by swapping pointers in the input array.

Remember that you can use `strcmp` (defined in `string.h`) to compare strings.

## Hex Conversion

Take a look at the file `hexConversion.c`, which includes a function named `hextoi` that should convert a hex string to its corresponding integer value. Finish implementing the function. You may assume that the value is unsigned and that the string will contain only the digits `0` through `9` or the letters `A` through `F`. The string will not be prefixed by `0x`.

## Submission and Grading

Upload your work to the GitHub repo that you created by following the project link. Make sure that your files upload successfully! You can always download your repo from Cloud9, then upload the files manually to the GitHub repo if you're having difficulties running `git` from the command line.

I'll grade your project using the following rubric.

  - All programs compile successfully with `make`: 10 points

  - All problems  (15 points each)
    - Correct output: 12 points
    - Style, formatting, and useful comments: 3 points
