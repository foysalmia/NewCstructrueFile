/*Write a C program to take input from a file named “input.txt” and calculate how many characters are there in that file*/

#include<stdio.h>

void main(){
    FILE *input = fopen("input.txt","r");
    int index =0;
    char str[100];
    fscanf(input,"%s",str);
    while(str[index] != '\0'){
        index++;
    }
    printf("%d",index);
}
