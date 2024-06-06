#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int roll_a_dice(void)                          //function to roll dice
{
    srand(rand());
    return rand()%6+1;
}
void scoresheet_c(int i,int x,int y)           //function to print score sheet
{
    printf("\nRound %d Scoresheet!\n-----------------------------------\nComputer: %d.\nPlayer: %d\n\n",i,x,y);

}
int play_computer(int a,int b,int c,int d,int e,char choice,int total_score)          //function for computer to decide strategy
{
    int fives=0,sixes=0,three_kind=0,large_straight=0,yahtzee=0,chance=0;
    switch(choice)
    {
        case 'f':
            if(a==5) fives=fives+5;
            if(b==5) fives=fives+5;
            if(c==5) fives=fives+5;
            if(d==5) fives=fives+5;
            if(e==5) fives=fives+5;
            printf("\nComputer chooses Fives:%d.Computer's total score is: %d",fives,total_score+fives);
            return fives;
            break;
        case 's':
            if(a==6) sixes+=6;
            if(b==6) sixes+=6;
            if(c==6) sixes+=6;
            if(d==6) sixes+=6;
            if(e==6) sixes+=6;
            printf("\nComputer chooses Sixes:%d.Computer's total score is: %d",sixes,total_score+sixes);
            return sixes;
            break;
        case 't':
            if(a==b && a==c) three_kind=3*a;
            if(a==b && a==d) three_kind=3*a;
            if(a==b && a==e) three_kind=3*a;
            if(a==c && a==d) three_kind=3*a;
            if(a==c && a==e) three_kind=3*a;
            if(a==d && a==e) three_kind=3*a;
            if(b==c && b==d) three_kind=3*b;
            if(b==c && b==e) three_kind=3*b;
            if(b==d && b==e) three_kind=3*b;
            if(d==c && e==d) three_kind=3*c;
            printf("\nComputer chooses Three of a Kind:%d.Computer's total score is: %d",three_kind,total_score+three_kind);
            return three_kind;
            break;
        case 'y':
            if(a==b && a==c && a==d && a==e)
                yahtzee=50;
            printf("\nComputer chooses Yahtzee:%d.Computer's total score is: %d",yahtzee,total_score+yahtzee);
            return yahtzee;
            break;
        case 'l':
            if(a==1 || b==1 || c==1 || d==1 || e==1)
                {
                if(a==2 || b==2 || c==2 || d==2 || e==2)
                    {
                    if(a==3 || b==3 || c==3 || d==3 || e==3)
                        {
                        if(a==4 || b==4 || c==4 || d==4 || e==4)
                            {
                            if(a==5 || b==5 || c==5 || d==5 || e==5)
                                large_straight=40;
                            }
                        }
                    }
                }

            if(a==2 || b==2 || c==2 || d==2 || e==2)
                {
                if(a==3 || b==3 || c==3 || d==3 || e==3)
                    {
                    if(a==4 || b==4 || c==4 || d==4 || e==4)
                        {
                        if(a==5 || b==5 || c==5 || d==5 || e==5)
                            {
                            if(a==6 || b==6 || c==6 || d==6 || e==6)
                                large_straight=40;
                            }
                        }
                    }
                }
            printf("\nComputer chooses Large Straight:%d.Computer's total score is: %d",large_straight,total_score+large_straight);
            return large_straight;
            break;

        case 'c':
            chance = a+b+c+d+e;
            printf("\nComputer chooses Chance:%d.Computer's total score is: %d",chance,total_score+chance);
            return chance;
            break;
    }
}
char computer_strategy_decider(int a,int b,int c,int d,int e,int three_kind_c, int large_straight_c,int yahtzee_c,int fives_c,int sixes_c,int chance_c)                           //function to make computer play
{
    int fives=0,sixes=0,three_kind=0,large_straight=0,yahtzee=0,chance=0;
    if(fives_c==0)
    {
        if(a==5) fives=fives+5;
        if(b==5) fives=fives+5;
        if(c==5) fives=fives+5;
        if(d==5) fives=fives+5;
        if(e==5) fives=fives+5;
    }

    if(sixes_c==0)
    {
        if(a==6) sixes+=6;
        if(b==6) sixes+=6;
        if(c==6) sixes+=6;
        if(d==6) sixes+=6;
        if(e==6) sixes+=6;
    }

    if(three_kind_c==0)
    {
        if(a==b && a==c) three_kind=3*a;
        if(a==b && a==d) three_kind=3*a;
        if(a==b && a==e) three_kind=3*a;
        if(a==c && a==d) three_kind=3*a;
        if(a==c && a==e) three_kind=3*a;
        if(a==d && a==e) three_kind=3*a;
        if(b==c && b==d) three_kind=3*b;
        if(b==c && b==e) three_kind=3*b;
        if(b==d && b==e) three_kind=3*b;
        if(d==c && e==d) three_kind=3*c;
    }


    if(a==b && a==c && a==d && a==e && yahtzee_c==0)
        yahtzee=50;

    if(large_straight_c==0)
    {
        if(a==1 || b==1 || c==1 || d==1 || e==1)
            {
            if(a==2 || b==2 || c==2 || d==2 || e==2)
                {
                if(a==3 || b==3 || c==3 || d==3 || e==3)
                    {
                    if(a==4 || b==4 || c==4 || d==4 || e==4)
                        {
                        if(a==5 || b==5 || c==5 || d==5 || e==5)
                            large_straight=40;
                        }
                    }
                }
            }

        if(a==2 || b==2 || c==2 || d==2 || e==2)
            {
            if(a==3 || b==3 || c==3 || d==3 || e==3)
                {
                if(a==4 || b==4 || c==4 || d==4 || e==4)
                    {
                    if(a==5 || b==5 || c==5 || d==5 || e==5)
                        {
                      if(a==6 || b==6 || c==6 || d==6 || e==6)
                            large_straight=40;
                        }
                    }
                }
            }
    }

    if(chance_c==0)
       chance = a+b+c+d+e;

    if(yahtzee>large_straight && yahtzee>three_kind && yahtzee>sixes && yahtzee>fives && yahtzee>chance && yahtzee_c==0)
    {
        yahtzee_c=1;
        return 'y';
    }
    else if(large_straight>yahtzee && large_straight>three_kind && large_straight>sixes && large_straight>chance && large_straight>fives && large_straight_c==0)
    {
        large_straight_c=1;
        return 'l';
    }
    else if(three_kind>large_straight && three_kind>yahtzee && three_kind>sixes && three_kind>chance && three_kind>fives && three_kind_c==0)
    {
        three_kind_c=1;
        return 't';
    }
    else if(sixes>large_straight && sixes>three_kind && sixes>yahtzee && sixes>fives && sixes>chance && sixes_c==0)
    {
        sixes_c=1;
        return 's';
    }
    else if(fives>large_straight && fives>three_kind && fives>sixes && fives>yahtzee && fives>chance && fives_c==0)
    {
        fives_c=1;
        return 'f';
    }
    else if(chance>yahtzee && chance>large_straight && chance>three_kind && chance>sixes && chance>fives && chance_c==0)
    {
        chance_c=1;
        return 'c';
    }
    else if(chance==sixes && chance_c==0 )
    {
        chance_c=1;
        return 'c';
    }
    else if(chance==fives && chance_c==0)
    {
        chance_c=1;
        return 'c';
    }
    else if(three_kind==sixes && three_kind_c==0 )
    {
        three_kind_c=1;
        return 't';
    }
    else if(three_kind==fives && three_kind_c==0)
    {
        three_kind_c=1;
        return 't';
    }
    else
    {
        if(chance_c==0)
            return 'c';
        else if(large_straight_c==0)
            return 'l';
        else if(three_kind_c==0)
            return 't';
        else if(yahtzee_c==0)
            return 'y';
        else if(sixes_c==0)
            return 's';
        else if(fives_c==0)
            return 'f';
    }


}
int play_user(int a,int b,int c,int d,int e,int three_kind_p, int large_straight_p,int yahtzee_p,int fives_p,int sixes_p,int chance_p,int total_score_p,int option)  //function to make player play and choose strategy
{
    int fives=0,sixes=0,three_kind=0,large_straight=0,yahtzee=0,chance=0;
    switch(option)
    {
        case 1:
            chance=a+b+c+d+e;
            printf("Your score is: %d,Your Total score is:%d\n",chance,total_score_p+chance);
            return chance;
            break;
        case 2:
                if(a==1 || b==1 || c==1 || d==1 || e==1)
                    {
                    if(a==2 || b==2 || c==2 || d==2 || e==2)
                        {
                        if(a==3 || b==3 || c==3 || d==3 || e==3)
                            {
                            if(a==4 || b==4 || c==4 || d==4 || e==4)
                                {
                                if(a==5 || b==5 || c==5 || d==5 || e==5)
                                    large_straight=40;
                                }
                            }
                        }
                    }

                if(a==2 || b==2 || c==2 || d==2 || e==2)
                    {
                    if(a==3 || b==3 || c==3 || d==3 || e==3)
                        {
                        if(a==4 || b==4 || c==4 || d==4 || e==4)
                            {
                            if(a==5 || b==5 || c==5 || d==5 || e==5)
                                {
                                if(a==6 || b==6 || c==6 || d==6 || e==6)
                                    large_straight=40;
                                }
                            }
                        }
                    }
                printf("Your score is: %d,Your Total score is:%d\n",large_straight,total_score_p+large_straight);
                return large_straight;
                break;
        case 3:
                if(a==b && a==c && a==d && a==e)
                    yahtzee=50;
                printf("Your score is: %d,Your Total score is:%d\n",yahtzee,total_score_p+yahtzee);
                return yahtzee;
                break;
        case 5:
              if(a==5) fives+=5;
              if(b==5) fives+=5;
              if(c==5) fives+=5;
              if(d==5) fives+=5;
              if(e==5) fives+=5;
               printf("Your score is: %d,Your Total score is:%d\n",fives,total_score_p+fives);
               return fives;
               break;
        case 6:
            if(a==6) sixes+=6;
            if(b==6) sixes+=6;
            if(c==6) sixes+=6;
            if(d==6) sixes+=6;
            if(e==6) sixes+=6;
            printf("Your score is: %d,Your Total score is:%d\n",sixes,total_score_p+sixes);
            return sixes;
            break;
        case 4:
            if(a==b && a==c) three_kind=3*a;
            if(a==b && a==d) three_kind=3*a;
            if(a==b && a==e) three_kind=3*a;
            if(a==c && a==d) three_kind=3*a;
            if(a==c && a==e) three_kind=3*a;
            if(a==d && a==e) three_kind=3*a;
            if(b==c && b==d) three_kind=3*b;
            if(b==c && b==e) three_kind=3*b;
            if(b==d && b==e) three_kind=3*b;
            if(d==c && e==d) three_kind=3*c;
            printf("Your score is: %d,Your Total score is:%d\n",three_kind,total_score_p+three_kind);
            return three_kind;
            break;
    }
}
int main()
{
    int a=2,b=5,i;                                         //to compare starting values of dice to see who gets first turn
    int check,count;  char again;                          //for repetition of while loops
    int option;                                            //input for strategy
    char x;                                                //to store the option selected by computer strategy.
    int total_score_p=0,total_score_c=0;                   //total score tracking of player and computer
    int dice1,dice2,dice3,dice4,dice5;                     //values for dice of computer and player
    int three_kind_c=0,large_straight_c=0,yahtzee_c=0,fives_c=0,sixes_c=0,chance_c=0;    //checks for computer's strategies if they have been used or not.
    int three_kind_p=0,large_straight_p=0,yahtzee_p=0,fives_p=0,sixes_p=0,chance_p=0;    //checks for player's strategies if they have been used or not.

    printf("\n============================================\n--------------------------------------------\n      WELCOME TO THE GAME OF YAHTZEE!!!\n--------------------------------------------\n============================================\n\n\nLet's see who's Lucky!\n");
    do  //to check who gets first turn and make sure that both dice do not have the same number.
    {
        a=roll_a_dice();
        b=roll_a_dice();
    }while(a==b);
    if(a>b)                              //if player's turn is before the computer's.
    {
        printf("Player: %d  -  Machine: %d.\nYou are the lucky one.Let's get started.\n",a,b);
        for(i=1;i<=6;i++)
        {
            printf("\nRound %d:\n=============================",i);            //start of round 1-6
            count=1;
            again='Y';
            while(count<=3 && again=='Y')       //for player to roll dice for a maximum of three times
            {
                printf("\n\nRolled the dice for You.\n");
                dice1=roll_a_dice();
                dice2=roll_a_dice();
                dice3=roll_a_dice();
                dice4=roll_a_dice();
                dice5=roll_a_dice();
                printf("Dice1: %d, Dice2: %d, Dice3: %d, Dice4: %d, Dice5: %d.\n",dice1,dice2,dice3,dice4,dice5);
                if(count!=3) printf("Do you want to roll again?(Y/N):");      //taking the input of the player wants to roll again.
                scanf(" %c",&again);
                count++;
            }
            check=0;
            while(check==0)    //for player to select strategy
            {
                if(chance_p!=1) printf("(1)   for chance.\n");
                if(large_straight_p!=1) printf("(2)   large straight.\n");
                if(yahtzee_p!=1) printf("(3)   for yahtzee.\n");
                if(three_kind_p!=1) printf("(4)   for three of a Kind.\n");
                if(fives_p!=1) printf("(5)   for fives.\n");
                if(sixes_p!=1) printf("(6)   for sixes.\n");
                printf("Choose the option you may like.\n");
                scanf("%d",&option);
                switch(option)                  //making sure the same choice is not chosen more than once.
                {
                    case 1:
                        if(chance_p==1) printf("option already chosen before.\n");
                        else
                        {   check=1;
                            chance_p=1;
                        }
                        break;
                    case 2:
                        if(large_straight_p==1) printf("option already chosen before.\n");
                        else
                        {   check=1;
                            large_straight_p=1;
                        }
                        break;
                    case 3:
                        if(yahtzee_p==1) printf("option already chosen before.\n");
                        else
                        {   check=1;
                            yahtzee_p=1;
                        }
                        break;
                    case 4:
                        if(three_kind_p==1) printf("option already chosen before.\n");
                        else
                        {   check=1;
                            three_kind_p=1;
                        }
                        break;
                    case 5:
                        if(fives_p==1) printf("option already chosen before.\n");
                        else
                        {   check=1;
                            fives_p=1;
                        }
                        break;
                    case 6:
                        if(sixes_p==1) printf("option already chosen before.\n");
                        else
                        {   check=1;
                            sixes_p=1;
                        }
                    break;
                }
            }
            total_score_p+=(play_user(dice1,dice2,dice3,dice4,dice5,three_kind_p,large_straight_p,yahtzee_p,fives_p,sixes_p,chance_p,total_score_p,option));  //to get player's score and add it to the total.
            printf("\nRolled the dice for computer.\n");
            dice1=roll_a_dice();
            dice2=roll_a_dice();
            dice3=roll_a_dice();
            dice4=roll_a_dice();
            dice5=roll_a_dice();
            printf("Dice1: %d, Dice2: %d, Dice3: %d, Dice4: %d, Dice5: %d.\n",dice1,dice2,dice3,dice4,dice5);

            x=computer_strategy_decider(dice1,dice2,dice3,dice4,dice5,three_kind_c,large_straight_c,yahtzee_c,fives_c,sixes_c,chance_c);
            if(x=='y') yahtzee_c=1;                                //to set the strategy used by computer to one so they are not used again.
            else if(x=='t') three_kind_c=1;
            else if(x=='l') large_straight_c=1;
            else if(x=='c') chance_c=1;
            else if(x=='f') fives_c=1;
            else if(x=='s') sixes_c=1;

            total_score_c+=play_computer(dice1,dice2,dice3,dice4,dice5,x,total_score_c);  //to get computer's score and add it to the total.
            scoresheet_c(i,total_score_c,total_score_p);
        }       //end of round 1-6
        printf("GAME HAS FINISHED!!!\n----------------------\n");
        printf("\nComputer: %d.\nPlayer: %d\n",total_score_c,total_score_p);

        if(total_score_c>total_score_p) printf("COMPUTER WON !\n\n\n\n");   //printing the decision of the game.
        else printf("YOU WON, CONGRATULATIONS !!!\n\n\n\n");
    }
    else                                 //if computer's turn is before the player.
    {
        printf("Player: %d  -  Machine: %d.\nComputer is the lucky one.Let's get started.\n",a,b);
        for(i=1;i<=6;i++)                               //start of round 1-6
        {
            printf("\nRound %d:\n=============================",i);
            printf("\nRolled the dice for computer.\n");
            dice1=roll_a_dice();
            dice2=roll_a_dice();
            dice3=roll_a_dice();
            dice4=roll_a_dice();
            dice5=roll_a_dice();
            printf("Dice1: %d, Dice2: %d, Dice3: %d, Dice4: %d, Dice5: %d.\n",dice1,dice2,dice3,dice4,dice5);

            x=computer_strategy_decider(dice1,dice2,dice3,dice4,dice5,three_kind_c,large_straight_c,yahtzee_c,fives_c,sixes_c,chance_c);
            if(x=='y') yahtzee_c=1;                                //to set the strategies used by computer to one so they are not used again.
            else if(x=='t') three_kind_c=1;
            else if(x=='l') large_straight_c=1;
            else if(x=='c') chance_c=1;
            else if(x=='f') fives_c=1;
            else if(x=='s') sixes_c=1;
            total_score_c+=play_computer(dice1,dice2,dice3,dice4,dice5,x,total_score_c);  //to get computer's score and add it to the total score.

            count=1;
            again='Y';
            while(count<=3 && again=='Y')       //for player to roll dice for at max three times.
            {
                printf("\n\nRolled the dice for You.\n");
                dice1=roll_a_dice();
                dice2=roll_a_dice();
                dice3=roll_a_dice();
                dice4=roll_a_dice();
                dice5=roll_a_dice();
                printf("Dice1: %d, Dice2: %d, Dice3: %d, Dice4: %d, Dice5: %d.\n",dice1,dice2,dice3,dice4,dice5);
                if(count!=3)printf("Do you want to roll again?(Y/N):");             //asking if the user wants to roll again.
                scanf(" %c",&again);
                count++;
            }
            check=0;
            while(check==0)    //for player to select strategy
            {
                if(chance_p!=1) printf("(1)   for chance.\n");
                if(large_straight_p!=1) printf("(2)   large straight.\n");
                if(yahtzee_p!=1) printf("(3)   for yahtzee.\n");
                if(three_kind_p!=1) printf("(4)   for three of a Kind.\n");
                if(fives_p!=1) printf("(5)   for fives.\n");
                if(sixes_p!=1) printf("(6)   for sixes.\n");
                printf("Choose the option you may like.\n");
                scanf("%d",&option);
                switch(option)             //to make sure the user does not use the same strategy more than once.
                {
                    case 1:
                        if(chance_p==1) printf("option already chosen before.\n");
                        else
                        {   check=1;
                            chance_p=1;
                        }
                        break;
                    case 2:
                        if(large_straight_p==1) printf("option already chosen before.\n");
                        else
                        {   check=1;
                            large_straight_p=1;
                        }
                        break;
                    case 3:
                        if(yahtzee_p==1) printf("option already chosen before.\n");
                        else
                        {   check=1;
                            yahtzee_p=1;
                        }
                        break;
                    case 4:
                        if(three_kind_p==1) printf("option already chosen before.\n");
                        else
                        {   check=1;
                            three_kind_p=1;
                        }
                        break;
                    case 5:
                        if(fives_p==1) printf("option already chosen before.\n");
                        else
                        {   check=1;
                            fives_p=1;
                        }
                        break;
                    case 6:
                        if(sixes_p==1) printf("option already chosen before.\n");
                        else
                        {   check=1;
                            sixes_p=1;
                        }
                    break;
                }
            }
            total_score_p+=(play_user(dice1,dice2,dice3,dice4,dice5,three_kind_p,large_straight_p,yahtzee_p,fives_p,sixes_p,chance_p,total_score_p,option));  //to get player's score and add it to the total.
            scoresheet_c(i,total_score_c,total_score_p);
        }       //end of round 1-6
        printf("GAME HAS FINISHED!!!\n----------------------\n");
        printf("\nComputer: %d.\nPlayer: %d\n",total_score_c,total_score_p);
        if(total_score_c>total_score_p)                              //printing the decision of the game.
            printf("COMPUTER WON !\n\n\n\n");
        else
            printf("YOU WON, CONGRATULATIONS !!!\n\n\n\n");
    }


    return 0;
}
