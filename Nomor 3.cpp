#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct String{
    char add[255];
    char del;
};

void del(char *x, int a, int b){
    if((a + b - 1) <= strlen(x)){
        strcpy(&x[b - 1], &x[a + b - 1]);
        printf("%s\n", x);
    }
}

int main(){
    String str;
    char add_char[255];
    int position, amount;
    bool flag = true;
    int option;
    do{
        do{
            system("clear || CLS");
            puts("Text editor");
            puts("============");
            puts("1. Add String");
            puts("2. Delete String");
            puts("3. exit");
            printf(">> ");
            scanf("%d", &option); getchar();
        }while(option < 1 || option > 3);
        switch (option){
            case 1:
                system("clear || CLS");
                printf("Input string: ");
                scanf("%[^\n]", add_char); getchar();
                strcat(str.add, add_char);
                printf("Text: %s\n", str.add);
                printf("Press enter to continue..."); getchar();
                break;
            case 2:
                system("clear || CLS");
                printf("Input starting position character to delete: ");
                scanf("%d", &position); getchar();
                printf("Input amount character to delete: ");
                scanf("%d", &amount); getchar();
                del(str.add, position, amount);
                printf("Press enter to continue..."); getchar();
                break;
            case 3:
                flag = false;
                return 0;
                break;
        }
    }while(flag == true);
    return 0;
}
