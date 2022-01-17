#include <stdio.h>
#include <string.h>
    int choicegame,answer,i=0,sum=0,choiceChange,newPrice;
    char ChangeTo[25];
    int selects[]={0};
    int numbers[]={1,2,3,4,5,6,7,8,9,10};
    char* giftcards[]={"\t\t\t\t1.Playstation giftcards\n","\t\t\t\t2.Xbox giftcards\n","\t\t\t\t3.Razer giftcards\n"}; //usage of pointer in string
    int giftcardsprices[]={10,20,25,50,100};
    char* games[]={"GTA","FORTNITE","PUBG","R6S","Valorant"};
    int gamesprice[]={15,30,25,10,5};
    char* ingamepurchasesgta[]={"\t1.a million dollar\n","\t2.a two million dollars\n","\t3.ten million dollars\n","\t4.hundred million dollars\n"};
    int ingamepurchasesgtaPrices[]={10,25,50,100};
    char* ingamepurchasesfortnite[]={"\t1. 1000 vbucks\n","\t2. 2800 vbucks\n","\t3. 5000 vbucks\n","\t4. 13500 vbucks\n","\t5. Starter pack\n"};
    int ingamepurchasesfortnitePrices[]={8,20,32,80,4};
    char* ingamepurchasesPUBG[]={"\t1. 60 uc\n","\t2. 180 uc\n","\t3. 324 uc\n","\t4. 690 uc\n","\t5. 1800 uc\n","\t6. 4000 uc\n","\t7. 8400 uc\n"};
    int ingamepurchasesPUBGPrices[]={1,3,5,10,25,50,100};
    char* ingamepurchasesR6S[]={"\t1. 600 CREDITS\n","\t2. 1200 CREDITS\n","\t3. 2000 CREDITS\n","\t4. 4000 CREDITS\n","\t5. 8000 CREDITS\n"};
    int ingamepurchasesR6SPrices[]={5,10,20,50,100};
    char* ingamepurchasesValorant[]={"\t1.300 VP\n","\t2.575 VP\n","\t3.1200 VP\n","\t4.2480 VP\n","\t5.4400 VP\n","\t5.6300 VP\n","\t5.8400 VP\n"};
    int ingamepurchasesValorantPrices[]={2,5,10,25,50,75,100};
    char* nameofselections[]={"games","in game purchases","gift cards","Movies"};
    //usage of functions
void giftcardsprices2(){ 
    printf("\t\t\t\tChoose the item from this group\n");
        for(int k=0;k<5;k++){
            printf("\t\t\t\t%d. %d$ \n",numbers[k],giftcardsprices[k]);
        }
    printf("\n\t\t\t\tchoose the item you want to buy\n");
    scanf("%d",&choicegame);
    giftcardsprices[choicegame-1];
    printf("The price of your game is %d$\n",giftcardsprices[choicegame-1]);
    selects[i] =giftcardsprices[choicegame-1];
    i+=1;
}
void gameprint(){
    for(int a=0;a<5;a++){
                printf("\t\t\t\t");
                printf("\t%d.%s\n",numbers[a],games[a]);
            }
}
void giftcardsselects(int K){
    // usage of switch case
switch(K){
                case 1: 
                    giftcardsprices2();
                   
                break;
                case 2 :
                    giftcardsprices2();

                break;
                case 3:
                    giftcardsprices2();
  
                break;
    
}
}
void gameselection(int A){
    switch(A){
        case 1: 
                printf("\t\t\t\tChoose the item from this group\n");
                for(int k=0;k<4;k++){
                printf("%s",ingamepurchasesgta[k]);
                }
                //change in progress
                printf("\n\t\t\t\tchoose the item you want to buy\n");
                scanf("%d",&choicegame);
                ingamepurchasesgtaPrices[choicegame-1];//how to append this resullt in an array {done}
                
                printf("The price of your game is %d$ \n",ingamepurchasesgtaPrices[choicegame-1]);
                selects[i] =ingamepurchasesgtaPrices[choicegame-1];
                i+=1;
                
                break;
        case 2:
                printf("\t\t\t\tChoose the item from this group\n");
                for(int k=0;k<5;k++){
                printf("%s",ingamepurchasesfortnite[k]);
                }
                //change in progress
                printf("\n\t\t\t\tchoose the item you want to buy\n");
                scanf("%d",&choicegame);
                
                ingamepurchasesfortnitePrices[choicegame-1];//how to append this resullt in an array {done}
                
                printf("The price of your game is %d$ \n",ingamepurchasesfortnitePrices[choicegame-1]);
                selects[i] =ingamepurchasesfortnitePrices[choicegame-1];
                i+=1;
                
                break;
        case 3:
                printf("\t\t\t\tChoose the item from this group\n");
                for(int k=0;k<7;k++){
                printf("%s",ingamepurchasesPUBG[k]);
                }
                //change in progress
                printf("\n\t\t\t\tchoose the item you want to buy\n");
                scanf("%d",&choicegame);
                
                ingamepurchasesPUBGPrices[choicegame-1];//how to append this resullt in an array {done}
                
                printf("The price of your game is %d$ \n",ingamepurchasesPUBGPrices[choicegame-1]);
                selects[i] =ingamepurchasesPUBGPrices[choicegame-1];
                i+=1;
                break;
        case 4:
                printf("\t\t\t\tChoose the item from this group\n");
                for(int k=0;k<5;k++){
                printf("%s",ingamepurchasesR6S[k]);
                }
                //change in progress
                printf("\n\t\t\t\tchoose the item you want to buy\n");
                scanf("%d",&choicegame);
                ingamepurchasesR6SPrices[choicegame-1];//how to append this resullt in an array {done}
                
                printf("The price of your game is %d$ \n",ingamepurchasesR6SPrices[choicegame-1]);
                selects[i] =ingamepurchasesR6SPrices[choicegame-1];
                i+=1;
                
                break;
        case 5:
                printf("\t\t\t\tChoose the item from this group\n");
                for(int k=0;k<5;k++){
                printf("%s",ingamepurchasesValorant[k]);
                }
                //change in progress
                printf("\n\t\t\t\tchoose the item you want to buy\n");
                scanf("%d",&choicegame);
                
                ingamepurchasesValorantPrices[choicegame-1];//how to append this resullt in an array {done}
                printf("The price of your game is %d$ \n",ingamepurchasesValorantPrices[choicegame-1]);
                selects[i] =ingamepurchasesValorantPrices[choicegame-1];
                i+=1;
                
                break;
                default:printf("Enter a value from 1 to 5");
            
            }
            
}
struct buyer{
    // usage of structure and printing it later
        char name[50];
        int age;
        long int telefonNumber;
    
};

void intro(){
    printf("\t\t\t\tWelcome in our Game store\n");
    printf("\t\t\t\tWhat do you want to buy\n");
    printf("\t\t\t\t1.Games\n");
    printf("\t\t\t\t2.in game purchases\n");
    printf("\t\t\t\t3.gift cards\n");
    printf("\t\t\t\t4.stats\n");
    printf("\t\t\t\t5.settings\n");
    printf("\t\t\t\t6.exit\n");
}
int main(void){
    int choice;
    int gameselect;
    struct buyer newbuyer;
    char* buyername;
    int buyerage;
    long int buyernumber;
    int flag=0;
    // struct inputs of users 
    printf("\n\t\t\t\tDo you want to buy a %s(yes=1/no=0)\n",nameofselections[0]);
            scanf("%d",&answer);
            if(answer==1){
                int nameCorrect=0;
                while(nameCorrect==0){
                printf("\n\t\t\t\tEnter your name\n");
                scanf("%s",newbuyer.name);
                    if(strlen(newbuyer.name)>2){
                        nameCorrect=1;
                    }else{
                        printf("Enter a correct name there is no name with %ld length",strlen(newbuyer.name));
                    }
                }
            int ageCorrect = 0;
            while(ageCorrect==0){
                printf("\n\t\t\t\tEnter your age\n");
                scanf("%d",&buyerage);
                newbuyer.age=buyerage;
                if(buyerage<=0){
                    printf("You are not born yet!");
                }else if (buyerage>100){
                    printf("You are dead??");
                }else {
                    ageCorrect=1;
                }
            }
            int numberCorrect=0;
            while(numberCorrect==0){
                printf("\n\t\t\t\tEnter your number\n");
                scanf("%ld",&buyernumber);
                newbuyer.telefonNumber=buyernumber;
                // usage if statements to handle errors
                if(buyernumber>1111111111 && buyernumber<11111111111){
                    numberCorrect=1;
                }else{
                    printf("Print a vaild number it should be of 11 digits begins with 0 ");
                }
            }
                
            }
            else{printf("Goodbye");
            flag=1;    
            }
            // end of section 
    //using of while and multiple for loops to print the arrays
    while(flag==0){
    
    intro();
    scanf("%d",&choice);
    switch(choice){
        case 1:
            printf("\t\t\t\tThe games available are\n");
            gameprint();
                printf("\n\t\t\t\tchoose the item you want to buy\n");
                scanf("%d",&choicegame);
                gamesprice[choicegame-1];//appending elements in the array
                printf("The price of your game is %d$ \n",gamesprice[choicegame-1]);
                selects[i] =gamesprice[choicegame-1];
                i+=1;
            break;
        case 2:
            printf("\t\t\t\tThe %s available are\n",nameofselections[1]);
            gameprint();
            scanf("%d",&gameselect);
            gameselection(gameselect);
            break;
        case 3:
            printf("\t\t\t\tThe %s available are\n",nameofselections[2]);
            for(int a=0;a<3;a++){
            printf("%s",giftcards[a]);
            }
            scanf("%d",&gameselect);
            giftcardsselects(gameselect);
            break;
        case 4:
        printf("\t\t\t\tThe customer stats are: \n");
        printf("\t\t\t\tThe customer name is : %s \n",newbuyer.name);
        printf("\t\t\t\tThe customer age is : %d \n",newbuyer.age);
        printf("\t\t\t\tThe customer number is : %ld \n",newbuyer.telefonNumber);
        break;
        case 5:
            gameprint();
            printf("\nwhat game do you want to change\n");
            scanf("\n%d",&choiceChange);
            printf("\nthe other game you want to add and it's price\n");
            scanf("\n%s\n%d",ChangeTo,&newPrice);
            games[choiceChange-1]=ChangeTo;
            gamesprice[choiceChange-1]=newPrice;
            
            break;
        case 6:
            flag=1;
            break;
    }        
            }
    for (int k = 0; k < i; k++){
        printf("%d$\t", selects[k]);
        sum+=selects[k];
        }
        printf("\n\n\t\t\t\tThe sum of the amount you bought is %d$", sum);
return 0;
}
