#include <stdio.h>
#include <stdlib.h>

int price=0, i=1, ret_cash=0;

void mainmenu()
{
    printf("\n:::::MENU:::::\n");
    printf("1. SAMOSA   30/-\n");
    printf("2. DOSA     20/-\n");
    printf("3. TEA      10/-\n");
    printf("0. EXIT\n");
}

void pallate(int cup, int item_price)
{
    int plate;
    if (cup==0)
    {
        printf("HOW MANY PLATES: ");
    }
    if (cup==1)
    {
        printf("HOW MANY CUPS: ");
    }
    scanf("%d",&plate);
    printf("OK NICE CHOICE....");
    printf("\nANYTHING YOU WANT....\n");
    price = price + (plate*item_price);
}

void notes(int ret_cash)
{
    int hund = ret_cash/100;
    int t = ret_cash%100;
    int fifty=t/50;
    int t1 = t%50;
    int twenty=t1/20;
    int t2 = t1%20;
    int ten=t2/10;
    int t3 = t2%10;
    int five=t3/5;
    int t4 = t3%5;
    int two=t4/2;
    int one = t4%2;
    if(hund!=0){
        printf("\n%d NOTES OF RS.100",hund);
    }
    if(fifty!=0){
        printf("\n%d NOTES OF RS.50",fifty);
    }
    if(twenty!=0){
        printf("\n%d NOTES OF RS.20",twenty);
    }
    if(ten!=0){
         printf("\n%d NOTES OF RS.10",ten);
    }
    if(five!=0){
        printf("\n%d NOTES OF RS.5",five);
    }
    if(two!=0){
        printf("\n%d NOTES OF RS.2",two);
    }
    if(one!=0){
        printf("\n%d NOTES OF RS.1",one);
    }
}

void cases(int choice)
{
    int cup=0,cash;
    switch(choice)
        {
            case 1: pallate(cup,30);
                    break;

            case 2: pallate(cup,20);
                    break;

            case 3: cup=1;
                    pallate(cup,10);
                    break;

            case 0:
                    do{
                    printf("\nYOUR BILL IS : %d\n",price);
                    printf("\nRECEIVED CASH : ");
                    scanf("%d",&cash);
                    ret_cash = cash - price;
                    if(ret_cash>=0)
                    {
                        printf("\nRETURN CASH : %d/-\n",ret_cash);
                    }
                    }while(ret_cash<0);

                    if(ret_cash>=0)
                    {
                        notes(ret_cash);
                    }
                    printf("\n\n::::::::THANKYOU SIR/MA'AM VISIT AGAIN::::::::\n");
                    i=0;
                    break;

            default: printf("\nENTER VALID CHOICE");
                    break;
    }
}

int main()
{
    int choice;

    printf("\t\t:::::WELCOME TO HOTEL RAM BHANDAR:::::\n");
    while(i)
    {
        mainmenu();
        printf("\nENTER YOUR CHOICE : ");
        scanf("%d",&choice);
        cases(choice);
    }
    return 0;
}
