#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"diaryy.h"
void welcome_message();
int insert();
int append();
int view();

int main()
{
    FILE *fp;
    char press;
    int num;
First:
    printf("\n\n---- Press ----- operation ------\n\n");
    printf("     '+' ------ add new note     \n");
    printf("     'a' ------ append new note     \n");
    printf("     'v' ------ View Previous     \n");
    printf("     'e' ------ Exit Program     \n\n");
    printf("-------------------------------\n\n");

while(1)
{
    scanf("%c",&press);

    if (press == '+'){
        insert();
        printf("Press '1' for continue\n'0' for Exit\n");
        scanf("%d", &num);
        if (num == 1){
            goto First;
        }
        else{
            break;
        }
    }
    else if (press == 'a'){
        append();
        printf("Press '1' for continue\n'0' for Exit\n");
        scanf("%d", &num);
        if (num == 1){
            goto First;
        }
        else{
            break;
        }
    }
    else if (press == 'v'){
        view();
        printf("Press '1' for continue\n'0' for Exit\n");
        scanf("%d", &num);
        if (num == 1){
            goto First;
        }
        else{
            break;
        }
    }
    else if (press == 'e'){
        return 0;
    }
    else{
        printf("Please press correct key.\n");
    }
}
    return 0;
}