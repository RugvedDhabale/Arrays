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

class MarvellousLB : public ArrayX
{
    public :

    MarvellousLB(int i) : ArrayX(i)
    {

    }
        int Minimum()
        {
            int iMin = Arr[0];

            for(int iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] < iMin)
                {
                    iMin = Arr[iCnt];
                }
            }
            return iMin;
     
        }
    
};

int main()
{
    int iLength = 0; 
    int iRet = 0; 

    cout << "Entre the size of array : " << "\n";
    cin >> iLength;

    MarvellousLB * obj = new MarvellousLB(iLength);

    obj -> Accpet();
    obj -> Display();

    iRet = obj -> Minimum();

    cout << "Smallest elemets is : " << iRet << "\n";

    delete obj;

    return 0;
}
