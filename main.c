#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>
int i,option;
char word[100];

char input(){
    printf("\n");
    printf("ENTER THE TEXT TO CONVERT TO MORSE CODE WITHOUT SPACES: ");
    scanf("%s",word);
}

char check(character){
    switch(character){
        case 'a':
            printf(".-");
        break;
        case 'b':
            printf("-...");
        break;
        case 'c':
            printf("-.-.");
        break;
        case 'd':
            printf("-..");
        break;
        case 'e':
            printf(".");
        break;
        case 'f':
            printf("..-.");
        break;
        case 'g':
            printf("--.");
        break;
        case 'h':
            printf("....");
        break;
        case 'i':
            printf("..");
        break;
        case 'j':
            printf(".---");
        break;
        case 'k':
            printf("-.-");
        break;
        case 'l':
            printf(".-..");
        break;
        case 'm':
            printf("--");
        break;
        case 'n':
            printf("-.");
        break;
        case 'o':
            printf("---");
        break;
        case 'p':
            printf(".--.");
        break;
        case 'q':
            printf("--.-");
        break;
        case 'r':
            printf(".-.");
        break;
        case 's':
            printf("...");
        break;
        case 't':
            printf("-");
        break;
        case 'u':
            printf("..-");
        break;
        case 'v':
            printf("...-");
        break;
        case 'w':
            printf(".--");
        break;
        case 'x':
            printf("-..-");
        break;
        case 'y':
            printf("-.--");
        break;
        case 'z':
            printf("--..");
        break;
        case '-':
            printf(" ");
        break;
        default:
            printf("\n");
            printf("PLEASE DO NOT ENTER ANY SPECIAL CHARACTERS OR UPPER CASE LETTERS");

    }
}

int process()
{
   input();
   int lenght;
   char mor;
   lenght=strlen(word);

   for(i=0;i<lenght;i++){
       mor=check(word[i]);
   }
}

int ask(){
    printf("\n\n");
    printf("ENTER YOUR OPTION : ");
    scanf("%d",&option);
    if(option==1){
            process();
            ask();
    }
    else if(option==2){
            printf("\n\nKAVYASHREE\nCOMPUTER SCIENCE STUDENT\nTELANGANA\nINDIA.");
            ask();
    }
    else{
            void exit(int status);
    }
}

int main(){

        printf("*****WELCOME TO MORSE CODE CONVERSION*****\n\n");
        printf("1.TEXT TO MORSE CODE\n");
        printf("2.DEVELOPERS CONTACT\n");
        printf("3.EXIT\n");
        ask();

}




