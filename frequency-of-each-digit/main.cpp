/*
Program : To find the frequency of each digit in a user-entered number
Author  : Majid Mujahid Hussain
Dated   : 16th March 2021
*/
#include <iostream>

using namespace std;

int main()
{
    int number, remainder, count = 0, i , j;
    cout << "Hello world!" << endl;

    //taking user input
    cout << " Please enter a number: ";
    cin >> number;

    //using loops
    //using while loops

//      i = 0;
//    while (i < 10)
//    {
//            //i = 0;
//            count = 0;
//            //cout << "The frequency of "<< i <<" is: ";
//            j = number;
//            while(j > 0)
//            {
//                //j = number;
//                remainder = j % 10;
//                if(remainder == i)
//                {
//                  count++;
//                }
//                j /= 10;
//            }
//            cout << "\nThe frequency of "<< i <<" is: "<< count << endl;
//            i++;
//        }

    //using DoWhile Loop

//    i = -1;
//    do
//    {
//    //i = 0;
//    count = 0;
//    j = number;
//    do
//    {
//        //j = number;
//        remainder = j % 10;
//        if ( remainder == i+1)
//        {
//            count++;
//        }
//        j /= 10;
//
//    }while( j > 0);
//    i++;
//    cout << "The frequency of " << i <<" is: "<< count << endl;
//    }while( i < 9);

//  using for loop
    for(i = 0; i < 10; i++)
    {
        count = 0;
   //     cout << "The frequency of " << i << "is: "<<endl;
        for(j = number; j > 0; j /= 10)
        {
            remainder = j % 10;
            if(remainder == i)
            {
                count++;
            }
            //cout << "The frequency of " << i <<" is: "<< count << endl;
        }
   cout << "The frequency of " << i <<" is: "<< count << endl;
    }
   //cout << "The frequency of " << i <<" is: "<< count << endl;
    return 0;

}
