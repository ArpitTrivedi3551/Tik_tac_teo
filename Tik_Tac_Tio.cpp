#include <iostream>


int choice;
int player_X;
int run;
int result;

int check_score(int a[]){

    int score;

    if ( (a[1]== 88) && (a[2]== 88) && (a[3] == 88 ))
    {
        score = 1;
    }else  if ( (a[4]== 88) && (a[5]== 88) && (a[6] == 88))
    {
        score = 1;
    }else  if ( (a[7]== 88) && (a[8]== 88) && (a[9] == 88))
    {
        score = 1;
    }else  if ( (a[1]== 88) && (a[4]== 88) && (a[7] == 88))
    {
        score = 1;
    }else  if ( (a[2]== 88) && (a[5]== 88) && (a[8] == 88))
    {
        score = 1;
    }else  if ( (a[3]== 88) && (a[6]== 88) && (a[9] == 88))
    {
        score = 1;
    }else  if ( (a[1]== 88) && (a[5]== 88) && (a[9] == 88))
    {
        score = 1;
    }else  if ( (a[3]== 88) && (a[5]== 88) && (a[7] == 88))
    {
        score = 1;
    }else  if ( (a[1]== 79) && (a[2]== 79) && (a[3] == 79 ))
    {
        score = 2;
    }else  if ( (a[4]== 79) && (a[5]== 79) && (a[6] == 79))
    {
        score = 2;
    }else  if ( (a[7]== 79) && (a[8]== 79) && (a[9] == 79))
    {
        score = 2;
    }else  if ( (a[1]== 79) && (a[4]== 79) && (a[7] == 79))
    {
        score = 2;
    }else  if ( (a[2]== 79) && (a[5]== 79) && (a[8] == 79))
    {
        score = 2;
    }else  if ( (a[3]== 79) && (a[6]== 79) && (a[9] == 79))
    {
        score = 2;
    }else  if ( (a[1]== 79) && (a[5]== 79) && (a[9] == 79))
    {
        score = 2;
    }else  if ( (a[3]== 79) && (a[5]== 79) && (a[7] == 79))
    {
        score = 2;
    }else
    {
       score = 0;
    }
    
    
    
    return score;

}

void play_game(){

    int a[10] = {'0','1','2','3','4','5','6','7','8','9'};
    int turn=0;
    start:
    run++;
    system("CLS");
    {
        std::cout<<" ============================================="<<std::endl;
        std::cout<<"||                 |       |                 ||"<<std::endl;
        std::cout<<"||             "<<char(a[1])<<"   |   "<<char(a[2])<<"   |   "<<char(a[3])<<"             ||"<<std::endl;
        std::cout<<"||          _______|_______|_______          ||"<<std::endl;
        std::cout<<"||                 |       |                 ||"<<std::endl;
        std::cout<<"||             "<<char(a[4])<<"   |   "<<char(a[5])<<"   |   "<<char(a[6])<<"             ||"<<std::endl;
        std::cout<<"||          _______|_______|_______          ||"<<std::endl;
        std::cout<<"||                 |       |                 ||"<<std::endl;
        std::cout<<"||             "<<char(a[7])<<"   |   "<<char(a[8])<<"   |   "<<char(a[9])<<"             ||"<<std::endl;
        std::cout<<"||                 |       |                 ||"<<std::endl;
        std::cout<<" ============================================="<<std::endl;

        if (run>4)
        {
            result=check_score(a);
            if (result == 1)
            {
                std::cout<<"Hurray !! Player_X Wins";
                goto end;
            }else if (result == 2)
            {
                std::cout<<"Hurray !! Player_Y Wins";
                goto end;
            }else if (run>=15)
            {
                std::cout<<"Oops, Match is Draw";
                goto end;
            }              
        }
        
        if (turn==0)
        {
            std::cout<<"Player_X turns -";
            std::cin>>choice;
            player_X = 48 + choice;
            if (player_X==a[choice])
            {
                a[choice]= 'X';
            }
            else
            {
                goto stop;
            }
            
            turn++;
            goto start;
        }
        if (turn==1)
        {
            std::cout<<"Player_O turns -";
            std::cin>>choice;
            player_X = 48 + choice;
            if (player_X==a[choice])
            {
                a[choice]= 'O';

            } else
            {
                goto stop;
            }
            
            turn--;
            goto start;
        }
    }
    stop:
    std::cout<<"Invalid Input !"<<std::endl;   
    end:
    std::cout<<std::endl;   
}

int main()
{
    int menu = true;
    std::cout<<("---------------Welcome to \" TIK TAK TEO \" ---------------\n");
    do
    {
    std::cout<<("0. Start\n");
    std::cout<<("1. Exit\n");
    std::cout<<("Press Key to choose\n");
    std::cin>>choice;
    switch (choice)
    {
    case 0:
        play_game();
        break;
    case 1:
        std::cout<<("Thankyou for playing !");
        menu = false;
        break;
    
    default:
        std::cout<<("Invalid input");
        menu = false;
        break;
    }
    } while (menu);
    
    
    
    
}
