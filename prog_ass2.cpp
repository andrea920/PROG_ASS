// Ma. Andrea G. Perido
#include <iostream> //for input and output function
#include <stdio.h> 
#include <stdlib.h> //for the color
using namespace std;
int main()
{
    system ("COLOR F4"); //use c++ on windows
    
    float in,cs,lb,ic,pm,tp,sp,sh,ld,pc;
    float budget;
    int a,b,c,d,e,f,g,h,i,j;
    float IN,CS,LB,IC,PM,TP,SP,SH,LD,PC;
    float total, change,need;
    char ans;
    
    in= 13.75;
    cs= 17.50;
    lb= 44.75;
    ic= 6.40;
    pm= 12.50;
    tp= 27.65;
    sp= 14.95;
    sh= 23.50;
    ld= 8.50;
    pc= 4.75;
    cout << "GROCER PARTNER" << "\n";
    cout << "Your budget partner! \n \n \n";
    
    cout << "Please enter your budget amount here:";
    cin >> budget;
    
    back: //for the function goto
    cout << "\n \nEnter the quantity of the products you'll \nbuy below:";
    
    cout << "\n \nInstant Noodles:";
    cin >> a;
    IN= a*in;
    cout << "Price: " <<IN;
    
    cout << "\nCanned Sardines:";
    cin >> b;
    CS= b*cs;
    cout << "Price: " <<CS;
    
    cout << "\nLoaf Bread:";
    cin >> c;
    LB= c*lb;
    cout << "Price: " <<LB;
    
    cout << "\nInstant Coffee:";
    cin >> d;
    IC= d*ic;
    cout << "Price: " <<IC;
    
    cout << "\nPowdered Milk:";
    cin >> e;
    PM= e*pm;
    cout << "Price: " <<PM;
    
    cout << "\nToothpaste:";
    cin >> f;
    TP= f*tp;
    cout << "Price: " <<TP;
    
    cout << "\nSoap:";
    cin >> g;
    SP= g*sp;
    cout << "Price: " <<SP;
    
    cout << "\nShampoo:";
    cin >> h;
    SH= h*sh;
    cout << "Price: " <<SH;
    
    cout << "\nLaundry Detergent:";
    cin >> i;
    LD= i*ld;
    cout << "Price: " <<LD;
    
    cout << "\nPotato Chips:";
    cin >> j;
    PC= j*pc;
    cout << "Price: " <<PC;
    
    total= IN+CS+LB+IC+PM+TP+SP+SH+LD+PC;
    cout << "\nThe total price is: " <<total;
    if (total<=budget){ //for knowing if your budget meets the total price of expenses
        change= budget-total;
        cout << "\n \nTotal expenses is on your budget!";
        cout << "\nWith the change of " << "₱" <<change;
    } 
    else {
        cout << "\n \nYour budget doesn't meet the expenses";
        cout << "\nDo you wish to re-enter quantity to meet\nyour budget? (y/n)";
        cin >> ans;
        
        if (ans=='y') //if the user wants to change the quantity of the items to meet the budget
        { goto back;}
        else {
            need= total-budget;
            cout << "\nYou need ₱" <<need << " to meet the expenses.";
        }
    }
    getch();
    return 0;
}