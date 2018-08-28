// Ma. Andrea G. Perido
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main()
{
    system ("COLOR 90");
    
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
    
    back:
    cout << "\n \nEnter the quantity of the products you'll \nbuy below:";
    
    cout << "\n \nInstant Noodles:";
    cin >> a;
    IN= a*in;
    
    cout << "Canned Sardines:";
    cin >> b;
    CS= b*cs;
    
    cout << "Loaf Bread:";
    cin >> c;
    LB= c*lb;
    
    cout << "Instant Coffee:";
    cin >> d;
    IC= d*ic;
    
    cout << "Powdered Milk:";
    cin >> e;
    PM= e*pm;
    
    cout << "Toothpaste:";
    cin >> f;
    TP= f*tp;
    
    cout << "Soap:";
    cin >> g;
    SP= g*sp;
    
    cout << "Shampoo:";
    cin >> h;
    SH= h*sh;
    
    cout << "Laundry Detergent:";
    cin >> i;
    LD= i*ld;
    
    cout << "Potato Chips:";
    cin >> j;
    PC= j*pc;
    
    total= IN+CS+LB+IC+PM+TP+SP+SH+LD+PC;
    if (total<=budget){
        change= budget-total;
        cout << "\n \nTotal expenses is on your budget!";
        cout << "\nWith the change of " << "₱" <<change;
    } 
    else {
        cout << "\n \nYour budget doesn't meet the expenses";
        cout << "\nDo you wish to re-enter quantity to meet\nyour budget? (y/n)";
        cin >> ans;
        
        if (ans=='y')
        { goto back;}
        else {
            need= total-budget;
            cout << "\nYou need ₱" <<need << " to meet the expenses.";
        }
    }
    return 0;
}