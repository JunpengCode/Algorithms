#include <iostream>
using namespace std;

/**
  * common method. The number of recursive is o(min(numberA,numberB))
  * @author Junpeng Zhu
  * @numberA the parameter of the first number
  * @numberB the parameter of the second number
*/
int gcd1(int numberA, int numberB){
    int greaterNumber = (numberA>=numberB)?numberA:numberB;
    int smallNumber = (numberA<numberB)?numberA:numberB;

    int gcd = 1;
    int count = 0 ;
    for (int i = 2; i <= smallNumber; i++){
        if (greaterNumber % i == 0  && smallNumber % i ==0){
            gcd = i ;
            count++;
        }else{
            count++;
            continue;
        }
    }
    cout << "The number of gcd1 comparision is count:" << count << endl;
    return gcd;

}

/**
  * common method. The number of recursive is o(min(numberA,numberB)/2)
  * @author Junpeng Zhu
  * @numberA the parameter of the first number
  * @numberB the parameter of the second number
*/
int gcd2(int numberA, int numberB){
    int greaterNumber = (numberA>=numberB)?numberA:numberB;
    int smallNumber = (numberA<numberB)?numberA:numberB;
    if (greaterNumber % smallNumber == 0){
        int gcd = smallNumber;
        int count = 0;
        count++;
        cout << "The number of gcd2 comparision is count:" << count << endl;
        return gcd;
    }else{
        int gcd = 1;
        int count = 0;
        for (int i = 2; i <= smallNumber/2; i++){
            if (greaterNumber % i == 0  && smallNumber % i ==0){
                gcd = i ;
                count++;
            }else{
                count++;
                continue;
            }
        }
        cout << "The number of gcd2 comparision is count:" << count << endl;
        return gcd;
    }
}


/**
  * Eclidean method. The number of recursive is o(log(max(numberA,numberB)))
  * @author Junpeng Zhu
  * @numberA the parameter of the first number
  * @numberB the parameter of the second number
*/
int gcd3(int numberA, int numberB){
    static int count = 0;
    int greaterNumber = (numberA>=numberB)?numberA:numberB;
    int smallNumber = (numberA<numberB)?numberA:numberB;
    if (greaterNumber % smallNumber == 0){
        int gcd = smallNumber;
        return gcd;
    }else{
        int gcd = gcd3(greaterNumber,greaterNumber%smallNumber);
        count++;
        cout << "The number of gcd3 comparision is count:" << count << endl;
        return gcd;
    }
}

int main()
{
    int i = 169;
    int j = 14;
    int gcdA = gcd1(i,j);
    cout <<"gcd1:"<< gcdA << endl;
    int gcdB = gcd2(i,j);
    cout << "gcd2:"<< gcdB << endl;
    int gcdC = gcd3(i,j);
    cout << "gcd3:"<< gcdC << endl;
    return 0;
}

