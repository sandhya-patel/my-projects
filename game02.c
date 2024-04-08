#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int game(char you , char comp){
    //case covered:
    //gg ww ss
 if(you == comp){
    return 0;
 }
 //case covered:
    // sw ws
    //gs sg
    // wg gw
    if(you=='s' && comp=='w'){
        return 1;
    }
   else if(you=='w' && comp=='s'){
        return -1;
    }

    if(you=='g' && comp=='s'){
        return 1;
    }
   else if(you=='s' && comp=='g'){
        return -1;
    }
    if(you=='w' && comp=='g'){
        return 1;
    }
   else if(you=='g' && comp=='w'){
        return -1;
    }
}
int main(){
    
    
int i;
    for(i=1; i<4;i++){
       
    
    char you,comp;
    srand(time(0));
    comp= rand()%100 + 1;
    if(comp<33){
        comp='s';
    }
   else if(comp<66){
        comp='w';
    }
    else
    {
        comp='g';
    }
    printf("s for snake , g for gun , w for water \n ");
    scanf("%c" ,&you);
    int result = game(you,comp);
    printf("you chose %c and computer chose %c\n :--> " ,you,comp );
    if(result==0){
        printf("game draw!\n\n");
    }
   else if(result==1){
        printf("you win!\n\n");
       
         
    }
    else{
        printf("you lose!\n\n");
    }

    }
   
    printf("opps...you lost your chance!");




}