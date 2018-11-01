#include<iostream>
#include<time.h>

int main()
{
    int bet,cash=500,h;
    char replay;
    system("cls");

    srand(time(NULL));
    std::cout<< "Welcome To Binary Roulette" <<std::endl;
    std::cout<<std::endl;
    std::cout<<"your current balance is @"<<cash<<std::endl;
    while(cash>0)
    {
        std::cout<<"do you want to play roulette(y/x)"<<std::endl;
        std::cin>>replay;

        if(replay=='y')
        {
            std::cout<<"choose either the number 1 or 0"<<std::endl;
            std::cin>>h;
            if(h==1 || h==0)
            {
                std::cout<<"enter bet amount:";
                std::cin>>bet;
                if(bet>cash)
                {
                    std::cout<<"low balance"<<std::endl <<"cashing out"<<std::endl;
                    break;
                }
                if(bet<=0)
                {
                    std::cout<<"you can't play with bet amount @"<<bet<<"cashingout"<<std::endl;
                    break;
                }

                int random=rand()%2;
                std::cout<<random<<std::endl;
                if(random==h)
                {
                    cash=cash + (bet*2);
                    std::cout<<"you won this game"<<std::endl;
                }
                else
                {
                    cash=cash-bet;
                    std::cout<<"you lose this game"<<std::endl;
                }
                std::cout<<"balance is @"<<cash<<std::endl;
            }
            else
            {
                std::cout<<"cashing out"<<std::endl;
                break;
            }
        }
        else
        break;
    }
    std::cout<<"game over";
    return 0;
}          
                  
        
    
