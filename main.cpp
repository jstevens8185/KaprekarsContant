/////////////////////////////////////////   Kaprekar's Constant   ///////////////////////////////////////////////////

// The number 6174 is known as Kaprekar's contant, after the mathematician who discovered an associated property: 
//      for all four-digit numbers with at least two distinct digits, repeatedly applying a simple procedure
//      eventually results in this value. The procedure is as follows:

// For a given input x, create two new numbers that consist of the digits in x in ascending and descending order.
// Subtract the smaller number from the larger number.
// For example, this algorithm terminates in three steps when starting from 1234:

// 4321 - 1234 = 3087
// 8730 - 0378 = 8352
// 8532 - 2358 = 6174
// Write a function that returns how many steps this will take for a given input N.

#include <iostream>
#include <string>

using namespace std;

const int KAPCONST = 6174;


bool verifyLength(string);
void intToA(int, int*);
void flipIt(int*, int*);
void BiggerSmaller(int*, int*, int*, int*);


int main(){

//Step 0: Declare contant as array
//          KapConst = 6174

    string Num = "";
    int IntNum = 0;

    int* a1ptr = new int[4];
    int* a2ptr = new int[4];

    int* bigger = new int[4];
    int* smaller = new int[4];

//step 1:   Get Starting Value as string

    cout << "Enter a 4 digit number with at least 2 unique digits" << endl;
    cin >> Num;
    
//Step 2:   Verify it is a four digit number AND has at least 2 different digits

//  Step 2.1:   Make sure numbers are entered and not letters

//  Step 2.2:   if string size is 4 continue
//              else throw error and restart

    if(!verifyLength(Num))
    {
        return 0;
    };
  
    

//Step 3:   Flip Number

//  Step 3.1:   Convert String to int
    
    int IntNumCopy = IntNum = stoi(Num);

    
    
//  Step 3.2:   Convert int to array
    
    intToA(IntNumCopy, a1ptr);

//  Step 3.3:   Copy array backwards
    
    flipIt(a1ptr, a2ptr);


//Step 4:   Decide which is bigger
/****************************************************************************************************************************
 *                                                      PROBLEM IS IN THIS AREA
 *                         Bigger and smaller will print from inside BiggerSmaller() but after the function
 ****************************************************************************************************************************/
    BiggerSmaller(a1ptr,a2ptr,bigger,smaller);

     cout << "bigger is " ;
    //  for (int i = 0; i < 4; i++)
    //  {
         cout << bigger[0];
    //  }

    cout << endl;

    cout << "Smaller is " ;
    for (int i = 0; i < 4; i++)
    {
        cout << smaller[i];
    }

    cout << endl;

    
//  Step 4.1    If a1[0] is bigger than a2[0] then a1 is bigger
    
    
//  Step 4.1.2  If a1[0] = a2[0] then check a1[1]...

//  Step 4.2           

//Step 5:   Subtract smaller number from bigger number

//Step 6:   Result becomes new starting value

//Step 7:   Increment count

//Step 8:   Check if number is equal to 6174

//Step 9:   Repeat until number is equal to 6174

//Step 10:  Print count


return 0;
}


////////////////////////////////////////////
//  verifyLength
//  returns bool
//  params: String Num
//
//  Returns false if number is outside range
//  Returns true if number is inside range
////////////////////////////////////////////

bool verifyLength(string Num)
    {
        if(Num.length() > 4){
            cout << "Error 001: Number is longer than 4 digits." << endl;
            return 0;
        }
        else if(Num.length() < 4){
            cout << "Error 002: Number is shorter than 4 digits." << endl;
            return 0;
        }
        else{
            return 1;
        }
    }

void intToA(int digit, int* a1ptr)
    {
        for (int i = 3; i >= 0; i--){
            a1ptr[i] = digit % 10;
            digit /= 10;
        };

    //////////////////////////////////
    //          Debugging           //
    //////////////////////////////////

    // for (int i = 0; i < 4; i++)
    //     {
    //         cout << a1ptr[i];
    //     }

    //////////////////////////////////
    };



////////////////////////////////////////////
//                FlipIt                  //
//  Flips Array to show mirrored numbers  //
//  Params: int* a1ptr, int* a2ptr        //
//  Returns: Void                         //
////////////////////////////////////////////

void flipIt(int* a1ptr, int* a2ptr)
    {
        int j = 3;
        for(int i = 0; i < 4; i++)
        {   
            a2ptr[i] = a1ptr[j];
            j--;
        }

    //////////////////////////////////
    //          Debugging           //
    //////////////////////////////////

    // a2ptr[0] = a1ptr[3];
    // a2ptr[1] = a1ptr[2];
    // a2ptr[2] = a1ptr[1];
    // a2ptr[3] = a1ptr[0];

    // cout << a2ptr[0] << endl;
    // cout << a2ptr[1] << endl;
    // cout << a2ptr[2] << endl;
    // cout << a2ptr[3] << endl;
    // for (int i = 0; i < 4; i++){
    //     cout << a1[i];
    // };
    // cout << endl;
        
    // for (int i = 0; i < 4; i++){
    //     cout << a2[i];
    // };
    // cout << endl;

    //////////////////////////////////
};



////////////////////////////////////////////
//                BiggerSmaller                //
//  decides which array has a bigger num  //
//  Params: int* a1ptr, int* a2ptr        //
//          int* bigger, int* smaller     //
//  Returns: Void                         //
////////////////////////////////////////////

void BiggerSmaller(int* a1ptr, int* a2ptr, int* bigger, int* smaller){
    int i = 0;
    while(bigger == NULL && i < 4)
    {
        if(a1ptr[i] > a2ptr[i])
        {
            bigger = a1ptr;
            smaller = a2ptr;
        }
        else if(a1ptr[i] < a2ptr[i])
        {
            bigger = a2ptr;
            smaller = a1ptr;
        }
    i++;
    }

    //////////////////////////////////
    //          Debugging           //
    //////////////////////////////////


    // cout << "bigger is " ;
    //  for (int i = 0; i < 4; i++)
    //  {
    //     cout << bigger[i];
    //  }

    // cout << endl;

    // cout << "Smaller is " ;
    // for (int i = 0; i < 4; i++)
    // {
    //     cout << smaller[i];
    // }

    // cout << endl;

    //////////////////////////////////
};