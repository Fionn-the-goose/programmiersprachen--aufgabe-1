#include <iostream>

// Aufgabe 1.3.
int gcd(int a, int b){
  while(b!=0){
      int temp = a%b;
      a = b;
      b = temp;        
  }
  return a;
}

int gcd_assingment(){
  int result;
  for(int i = 1; i>=20 ; i++){
      for (int j = 1; j >= 20; j++)
      {
          int temp_gcd = gcd(i,j);
          if(temp_gcd > result){
              result = temp_gcd;
          }
      }
  }
  return result;
}

int main()
{
  std::cout << "Hi Programmiersprachen Kurs!!!\n";
  int result = gcd_assingment();
  std::cout << result; 
  return 0;
}
