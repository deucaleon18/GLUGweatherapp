#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

class Opera
{
private:
float sum, div, rem, diff, pro, ro;
public:
float addition()
{
    int n,i;
    float x;
    cout<< "How many variable do you want to add together?" << endl;
    cin >> n;
    cout << "Enter the numbers!" << endl;
    for(int i=0; i<n; i++)
    {
         cin >> x;
        sum=0;
        sum = sum + x;
    }
    cout << sum << endl;
    return sum;
}
float diffe()
{
    int n,diff;
    float x=0;
    cout<< "How many variable do you want to subtract?" << endl;
    cin >> n;
    cout << "Enter the first number " << endl;
    cin>>diff;
    cout<<"Enter the numbers to be subtracted"<<endl;
    for(int i=0; i<n; i++)
    {
        
        cin >> x;
        diff = diff- x;
    }
    cout << diff << endl;
    return diff;
}
float multiplica()
{
    int n;
    float pro=1;
    float x;
    cout<< "How many variable do you want to multiply together?" << endl;
    cin >> n;
    cout << "Enter the numbers!" << endl;
    for(int i=0; i<n; i++)
    {
       cin >> x;
        pro = pro*x;
    }
    cout << pro << endl;
    return pro;
}
float divisi()
{
    float x, y,div;
    cout<< "Enter two numbers as a / b" << endl;
    cin >> x;
    cin >> y;
    div = x/y;
    cout << div << endl;
    return div;
}
float roo()
{
    float x;
    cout << "Enter the number you want to calculate the squareroot of" << endl;
    cin >> x;
    ro = sqrt(x);
    cout << ro << rem;
    return ro;
}
float mod()
{
    float x, y;
    cout <<"Enter the numbers(x, y) such that x/y = a + r, where r is the remainder." << endl;
    cin >> x;
    cin >> y;
    rem = x % y;
    cout << rem << endl;
    return rem;
}
};

int main()
{
    Opera op;

    out <<"Welcome!"<< endl;
    cout <<"Choose the operation you want to perform, available are- addition(1), 
            subtraction(2), square-root(3), finding remainder(4), division(5), multiplication(6)" << endl;
    int n;
    switch(n)
    {
        case 1: op.addition();
        break;
        case 2: op.diffe();
        break;
        case 3: op.roo();
        break;
        case 4: op.mod();
        break;
        case 5: op.divisi();
        break;
        case 6: op.multiplica();
    }
    return 0;
}
