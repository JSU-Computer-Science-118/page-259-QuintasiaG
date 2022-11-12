// Quintasia Gordon J00967930 10-11-2022 DONE

#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;


int main() 
{
  
    int a, b, c;
    double disc = 0;
    double root1, root2;


    cout << "Enter the value of a (the coefficient of x^2): ";

    cin >> a;

 
    cout << "Enter the value of b (the coefficient of x): ";

 
    cin >> b;

    cout << "Enter the value of c (the constant term): ";


    cin >> c;

    cout << fixed << setprecision(2);


    disc = (b*b) - 4*(a*c);


    if(disc < 0)
    {
        cout << endl 
            << "The equation has two complex roots." 
            << endl;
    }


    else if(disc == 0)
    {
        cout << endl 
            << "The equation has a single (repeated) root." 
            << endl;

  
        root1 = (0-b)/(double)(2*a);
        
 
        cout << "Root 1 = Root 2 = " << root1 << endl;
    }

 
    else
    {
        cout << endl 
            << "The equation has two real roots." 
            << endl;

        root1 = ((0-b) + pow(disc, 0.5))/(double)(2*a);

        root2 = ((0-b) - pow(disc, 0.5))/(double)(2*a);

   
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    }

 
    return 0;
}

