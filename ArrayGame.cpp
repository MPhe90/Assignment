//
// Created by myatm on 11/20/2022.
//
#include <stdio.h>
#include "stdlib.h"
int db[10];
//int dbMoney[100];

int main (){
    int key=10;
    int age=0;
    int option=0;
    int userId=0;
    int userId2=0;
    int LoginuserId=0;
    int flag=0;
    int global_flag=0;
    int global_flag2=0;
    int dbIndex=0;
    while (key<=10){

        printf("Welcome to our Game:\n");
        printf("Enter your Age:");
        scanf("%d",&age);
        if(age>18){

                printf("You can play Game!\n");
                while(true){
                    global_flag=0;
                    printf("Press 1 to Login!\nPress 2 to Register:\nPress 3 to Complete Quit\nPress 4 to Back:");
                    scanf("%d",&option);

                        while(true){
                            if(option==1){
                                printf("This is Login:\n");
                                printf("Enter your ID");
                                scanf("%d",&LoginuserId);

                                for(int i=0; i<=10; i++) {
                                    if (db[i] == LoginuserId) {
                                        //        flag=1;
                                        //      }
                                        //  }
                                        //  if(flag=1){
                                        printf("You can play game\n");
                                        goto playgame;
                                    }
                                    else {
                                        printf("Your ID is Invalid\n");
                                        break;
                                    }
                                }

                            }
                            else if(option==2){
                                if (global_flag==1){
                                    break;
                                }

                                printf("This is Register\n");
                                printf("Pls, Enter your ID\n");
                                scanf("%d",&userId);

                                for (int i = 0; i < 10; i++) {
                                    if (db[i] == userId) {
                             //           flag = 1;
                               //     }
                                    //else {
                                       // flag = 0;
                                    //}
                             //   }
                              //  while (true){
                               //     if(flag==1){
                                        printf("User ID Already Taken:\n");
                                        break;
                                    }
                                    else{
                                        printf("Confirm your ID:\n");
                                        scanf("%d",&userId2);

                                        if(userId==userId2){
                                            db[dbIndex]=userId2;
                                            dbIndex++;
                                            printf("Registration Success:\n");
                                            global_flag=1;
                                           // global_flag2=1;
                                            break;
                                        }
                                        else{
                                            printf("Two IDs do not match!!!\n");
                                        }
                                    }

                                }

                            }
                            else if(option==3){
                                exit(1);
                            }
                            else if(option==4){
                                break;
                            }
                            else {
                                printf("Invalid Option: Try Again!\n");
                                break;
                            }
                        }
                }
        }
        else{
            key=10;
        }


    }
    playgame:
    printf("Welcome To My Game!!!\n");


    return 0;
}