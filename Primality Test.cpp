#include <iostream>
#include <cmath>

using namespace std;

//Checking Primer number
bool prime(int n)
{
    if(n<2)    return false;
    if(n<=3)    return true;
    if(n%2==0)    return false;

    for(int i=3; i<=sqrt(n); i+=2)
    {
        if(n%i==0)  return false;
    }
    return true;
}
//Driver code
int main()
{
    int N;
    cin >> N;

    if(prime(N)==true){
        cout << "Prime" << endl;
    }else{
        cout << "Not Prime" << endl;
    }

    //Print prime numbers from 1 to N
    /*
    for(int i=1; i<=N; i++){
        if(isPrime(i))
            cout << i << " ";
    }
    */

    return 0;
}
