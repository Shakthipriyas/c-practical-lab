#include <iostream>
using namespace std;

// create a class
class Array {
  // private data member
 private:
  int array[10];

  // public functions
 public:
  // getArray() function to get the 
  // value of the array
  void getArray() {
    for (int index = 0; index <= 9; index++) {
      cout << "array[" << index << "]: ";
      cin >> array[index];
    }
  }

  // productArray() function to calculate the
  // product of the largest and the
  // smallest number in the array
  int productArray() {
    // initialising int type variables 
    // to perform operations
    int index_1, index_2, temp, product;

    // for loop to read the whole array
    for (index_1 = 0; index_1 <= 9; index_1++) {
      // for loop to compare numbers of array
      for (index_2 = 0; index_2 < 9 - index_1; index_2++) {
        // if condition to check if the next term is smaller than
        // this then swapping takes place
        if (array[index_2] > array[index_2 + 1]) {
          // swapping numbers if numbers
          // are not in the order
          temp = array[index_2];
          array[index_2] = array[index_2 + 1];
          array[index_2 + 1] = temp;
        }
      }
    }

    // calculating product of the Largest
    // and Smallest number in the array
    product = array[9] * array[0];

    cout << "Smallest Number: " << array[0] << " Largest Number: " << array[9]
         << endl;

    // returning the product
    return product;
  }
};

int main() {
  // create an object
  Array A;

  // int type variable to store 
  // the product
  int product;

  // calling getArray() function is called 
  // by the object to store the array
  A.getArray();

  product = A.productArray();

  cout << "Product of the largest and smallest number is " << product;

  return 0;
#include <iostream>
#include <cmath>

using namespace std;

int convertBinarytoOctal(long long);
int main()
{
    long long binaryNumber;

    cout << "Enter a binary number: ";
    cin >> binaryNumber;

    cout << binaryNumber << " in binary = " << convertBinarytoOctal(binaryNumber) << " in octal ";

    return 0;
}

int convertBinarytoOctal(long long binaryNumber)
{
    int octalNumber = 0, decimalNumber = 0, i = 0;

    while(binaryNumber != 0)
    {
        decimalNumber += (binaryNumber%10) * pow(2,i);
        ++i;
        binaryNumber/=10;
    }

    i = 1;

    while (decimalNumber != 0)
    {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }

    return octalNumber;
}
