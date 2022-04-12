#include<stdio.h>

int string_length(char str[]){
    int i;
    for(i=0; str[i] != '\0'; i++);

    return i;
}

int string_compare(char a[], char b[]){
    int i;

    if(string_length(a) > string_length(b)){
        return 1;
    }
    if(string_length(a) < string_length(b)){
        return -1;
    }

    for(i=0; a[i] != '\0' && b[i] != '\0'; i++){
        if(a[i]>b[i]){
            return 1;
        }else if(a[i]<b[i]){
            return -1;
        }
    }

  
}

int main(){

    int compare; 

    char str1[] = "saikat";
    char str2[]= "saha";

    int str1_length = string_length(str1);
    int str2_length = string_length(str2);
    
    compare = string_compare( str1,  str2);
    printf("%d\n", compare);
    printf("str1 length: %d\nstr2 length: %d\n", str1_length, str2_length);
}