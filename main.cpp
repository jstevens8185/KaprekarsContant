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



int main(){
//Step 0: Declare contant as array
//          KapConst = 6174

//step 1:   Get Starting Value as string

//Step 2:   Verify it is a four digit number
//  Step 2.1:   if string size is 4 continue
//              else throw error and restart

//Step 3:   Flip Number
//  Step 3.1:   Convert String to int
//  Step 3.2:   Convert int to array
//  Step 3.3:   Copy array backwards

//Step 4:   Decide witch is bigger

//Step 5:   Subtract smaller number from bigger number

//Step 6:   Result becomes new starting value

//Step 7:   Increment count

//Step 8:   Check if number is equal to 6174

//Step 9:   Repeat until number is equal to 6174

//Step 10:  Print count


return 0;
}