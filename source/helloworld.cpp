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
  int result = 1000000000;
  for(int i = 1; i<=20 ; i++){
      for (int j = 1; j <= 20; j++)
      {
          int temp_gcd = gcd(i,j);
          if(temp_gcd > result){
              result = temp_gcd;
          }
      }
  }
  std::cout << result; 
  return result;
}

//assingment 1.4.
void pythagi(){
  for(int a = 1; a>=999; a++){
    for(int b = 1; b>=999; b++){
      for(int c = 1; c>=999; c++){
        if((a+b+c)== 1000){
          if(a^2*b^2==c^2){
            std::cout << "a: " << a << " ,b: " << b << ",c: " << c;
          }
        }
      }
    }
  }
  
}

int main(){
  std::cout << "Hi Programmiersprachen Kurs!!!\n";
  int result = gcd_assingment();
  pythagi();
  return 0;
}
