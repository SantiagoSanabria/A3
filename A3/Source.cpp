#include <iostream>
#include <string>

using namespace std;

int main()
{
    int ValA = 0;
    int ValB = 0;
    int ValC = 0;
   
    

    cout << "1.Add \n";
  
    cout << "2.Subtract \n";

    cout << "3.Multiply \n";

    cout << "4.Divide \n";

    cout << "5.Modulus \n";

    cout << "Enter The number of your operation \n";
    cin >> ValA;

    if (ValA > 5)
    {
        cout << "That's not a valide number please try again \n";
    }
    if (ValA == 1)
    {
        
        cout << "Please enter the first number\n";
        cin >> ValB;

        cout << "Please enter the second number \n";
        cin >> ValC;
        int Add = (ValB + ValC);
        cout << "\t= " << Add << "\n\n";

    }

    if (ValA == 2)
    {
        
        cout << "Please enter the first number\n";
        cin >> ValB;

        cout << "Please enter the second number \n";
        cin >> ValC;
       
        int Sub = (ValB - ValC);
        cout << "\t= " << Sub << "\n\n";
    }

    if (ValA == 3)
    {
        
        cout << "Please enter the first number\n";
        cin >> ValB;

        cout << "Please enter the second number \n";
        cin >> ValC;
      
        int Mul = (ValB * ValC);
        cout << "\t= " << Mul << "\n\n";
    

    }
    if (ValA == 4)
    {
        
        cout << "Please enter the first number\n";
        cin >> ValB;

        cout << "Please enter the second number\n";
        cin >> ValC;
        int div = (ValB / ValC);
        cout << "\t= " << div << "\n\n";



    }
    if (ValA == 5)
    {
        cout << "\tPlease enter the first number\n";
        cin >> ValB;

        cout << "\tPlease enter the second number\n";
        cin >> ValC;

        int mol = (ValB % ValC);
        cout << "\t= " << mol << "\n\n";

    }
       


    system("pause");
    return 0;
}
