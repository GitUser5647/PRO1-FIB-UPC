#include<iostream>
using namespace std;


int NombreDigits(int B){
     if (B == 0) return 1;
     else{
       int i=0;
       while (B > 0){
         B = B/10;
         ++i;
       }
       return i;
     }
}

bool CoincideixDigit(int A, int B){
     int a = NombreDigits(A);
     int b = NombreDigits(B);
     for (int i=1; i<=a/2; ++i){
         A = A/10;
     }
      for (int i=1; i<=b/2; ++i){
         B = B/10;
     }
     return (A%10 == B%10);    
}     

int main(){
    int n;
    cin >> n ;
    bool perdut = false;
    char qui = '=';
    n = 2*n-1;
    int A;
    cin >> A;
    if (NombreDigits(A)%2 == 0){
               perdut = true;
               qui = 'B';
    }
    while (n >= 1 and not perdut){
           --n;
           int B;
          cin >> B;    
          if ((NombreDigits(B)%2 == 0) or (not CoincideixDigit(A,B))){
              perdut = true;
              if (n%2 == 0) qui = 'A';
              else qui = 'B';
          }
          A=B;
    }
    cout << qui << endl;
}
            
          
          
