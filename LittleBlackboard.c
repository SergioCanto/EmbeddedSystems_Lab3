#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>  

int main (int argc, char *argv[]){

    char  name[50], id[50], option[50];
    int counter = 0;
    bool op = true;
    FILE *f = fopen("DATALOG.txt", "w");
    if (f == NULL){
      fprintf(stderr,"Error opening file!\n");
      exit(1);
    }
    while (op == true){

        printf("ENTER NAME:\n");
        fgets(name, sizeof(name), stdin);
        fprintf(f, "%s", name);

        printf("ENTER ID:\n");
        fgets(id, sizeof(id), stdin);
        fprintf(f, "%s", id);

        printf("Do you wish to add more [Y/n]");  
        fgets(option, sizeof(option), stdin);

        counter += 1;

        if (counter >= atoi(argv[1])){
          printf("You reached the limit.");
          op = false;
        }
        else if (*option == 'N'){
          op = false;
        }
    }
    fclose(f);
    return 0;
}