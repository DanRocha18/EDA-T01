#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void printaCoisas(){
    printf("Hello World");
}
int main(){

    FILE *file = fopen("tripadvisor_hotel_reviews.csv" , "r");
    if(file == NULL) {
        printf("Não foi possível abrir o arquivo\n");
        exit(1);
    }

    int cnr;
    char c;
    /*while(cnr != EOF){
        c = fgetc(file);
        if(c == ','){
            printf("");
        }else{
            printf("%c", c);
        }
    }*/
    char line[200];
    int nota;
    char *review;
    nota = sizeof(line) - 1;
    printf("%d\n", nota);
    while(fgets(line , 200 , file) != NULL) {
        review = strtok(line, "\"");
        printf("%s\n" , review);
        review = strtok(NULL , "\"");

    }
    printaCoisas();
    return 0;
}