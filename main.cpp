// Quintasia Gordon J00967930 10-11-2022 DONE

#include <iostream>
#include <cmath>


using namespace std;

int main()
{
    double a, b, c, discriminant, root1, root2;
  
    discriminant = b * b - 4 * a * c;
   
    if (a == 0 || discriminant < 0) 
        cout << "The single root is" << root1<<endl;
     if (discriminant == 0) 
        cout << "Two real roots" << endl;
        cout << "First root" << (-b) / (2 * a) << root1<<endl;

       
    if  (discriminant == 0) 
       cout << "Second root" <<root2<<endl;
         discriminant = sqrt(discriminant);
        root1 = (-b + discriminant) / (2 * a);
        root2 = (-b - discriminant) / (2 * a);
        cout << "Roots are " << root1 << " and " << root2 << endl;
   if (discriminant == 0) 
       cout << "Complex roots" << endl;
     
        
    
    return 0; 
    }
        
    

