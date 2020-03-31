#include <iostream>
#include <fstream>

using namespace std ;

void Menu();
void Solo();
void Rules();
void Duo();

int main()
{
    bool n=true;
    int m ;
    
    while(n)
    {
        Menu();
    cin >> m;
    switch(m)
    {
        case 1: Solo(); break;
        case 2: Duo(); break;
        case 3: Rules(); break;
        case 0: n=0; break;
    }
    }

}

void Menu()
    {
    
    cout << "\t Menu \n";
    cout << "1.Start solo \n";
    cout << "2.Start with a friend \n";
    cout << "3.Rules of the game \n";
    cout << "0.Exit \n";
    
    }

void Rules()
{
    string rule;
    ifstream fin;
    fin.open("Rules.txt");

    while(!fin.eof())
    {
        fin >> rule ;
        cout << rule << ' ';
    }
    cout << endl;
}

void Solo()
{
    int x , y , bot;
    int yy=0 , botbot=0;
    
    srand((unsigned int)time(NULL));
    
    x=rand()%10+1;
    
    cout << "Write your number:";
    cin >> y;
    
    bot=rand()%10+1;
    cout << "Bot Vasea wrote:" << bot << endl;
    
    if(bot==y)
    {
        cout << "Oh no, you both chose the same number \n"
        << "The number was " << x << endl;
    }
    if(y==x)
    {
        cout << "Wow , you chose the same number as me, didn't expect that coming \n";
    }
    if(bot==x)
    {
        cout << "Nope, no chances bro , my bot chose the same number as me " << x << endl;
    }
//    calculating the distance between the numbers
    if(x>y) yy=x-y;
    if(x<y) yy=y-x;
    
    if(x>bot) botbot=x-bot;
    if(x<bot) botbot=bot-x;
    
//    Let's see who won
    
    if(botbot > yy)
    {
        cout << "That's my boy , you did it , congratulations \n";
        cout << "My number was " << x << endl;
    }
    else if(yy > botbot)
    {
        cout << "Bot Vasile was closer, srry bro, next time =( \n";
        cout << "My number was " << x << endl;
    }
}

void Duo()
{
    int x;
    int p1 , p2;
    int pp1 , pp2;
    
    srand((unsigned int)time(NULL));
    
    x=rand()%10+1;
    
    cout << "Player 1:";
    cin >> p1;
    
    cout << "Player 2:";
    cin >> p2;
    
    if(p1==p2)
        {
            cout << "Oh no, you both chose the same number \n"
            << "The number was " << x << endl;
        }
        if(p1==x)
        {
            cout << "Wow , player 1 chose the same number as me, didn't expect that coming \n";
        }
        if(p2==x)
        {
            cout << "Nope, no chances bro , p2 chose the same number as me " << x << endl;
        }
    //    calculating the distance between the numbers
        if(x>p1) pp1=x-p1;
        if(x<p1) pp1=p1-x;
        
        if(x>p2) pp2=x-p2;
        if(x<p2) pp2=p2-x;
        
    //    Let's see who won
        
        if(pp2 > pp1)
        {
            cout << "Player 1 wins \n";
            cout << "My number was " << x << endl;
        }
        else if(pp1 > pp2)
        {
            cout << "Player 2 wins \n";
            cout << "My number was " << x << endl;
        }
    
}

