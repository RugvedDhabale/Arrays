#include <iostream>
using namespace std;

// Problems on N Numbers
class ArrayX
{
    public:
        int * Arr;
        int iSize;

        ArrayX(int i)
        {
            iSize = i;
            Arr = new int[iSize];
        }

        void Accept()
        {
            cout << "Please entre the numbers : " << "\n";
            int iCnt = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin >> Arr[iCnt];
            }
        }

        void Display()
        {
            cout << "Please entre the numbers : " << "\n";
            int iCnt = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout << Arr[iCnt] << "\t";
            }
            cout << "\n";
        }

        void Funtion()
        {
            //Logic
        }
};

int main()
{
    int iLength = 0;

    cout << "ENtre the elements : " << "\n";
    cin >> iLength;

    ArrayX obj(iLength);

    obj.Accept();
    obj.Display();

    return 0;
}