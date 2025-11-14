#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int killer_processor(char name[]){

    char command[100] = "pkill ";
    strcat(command, name);

    int result = system(command);

    return result;


}



int main(){

    printf("Enter name processor: ");
    char name_process[100];

    // удаляем символ новой строки в вводе.
    name_process[strcspn(name_process, "\n")] = '\0';

    if (fgets(name_process, sizeof(name_process), stdin) != NULL){
        killer_processor(name_process);
    }else{
        printf("Sorry, but you haven't entered anything.");
    }


    return 0;
}