#include <iostream>
using namespace std;

class ArrayX
{
    public: 
        int * Arr;
        int iSize = 0; 

        ArrayX(int i) // parameterised constructor is a constructor which accepts value
        {
            cout << "Allocating the memory for resources..." << "\n";
            iSize = i;
            Arr = new int[iSize]; 
        }

        ~ArrayX()
        {
            cout << "Deallocating the memory of resources..." << "\n";
            delete[]Arr;
        }

        void Accpet()   // getter setter method
        {
            cout << "Elements of array : " << "\n";

            for(int iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin >> Arr[iCnt];
            }
        }

        void Display()
        {
            cout << "Entre the elements of array : " << "\n";

            for(int iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout << Arr[iCnt] << "\t";
            }
            cout << "\n";
        }
};

int main()
{
    int iLength = 0; 

    cout << "Entre the size of array : " << "\n";
    cin >> iLength;

    ArrayX * obj = new ArrayX(iLength);

    obj->Accpet();
    obj->Display();

    delete obj;

    return 0;
}