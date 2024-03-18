#include <stdio.h>
#include <math.h>
int convertBinaryToDecimal(long long);
long long convertDecimalToBinary(int);
int convertDecimalToOctal(int);
long long convertOctalToDecimal(int);
int convertBinaryToHexadecimal(long long);

int main() {
  int n;
  printf("Enter a decimal number: ");
  scanf("%d", &n);
  printf("%d in decimal =  %lld in binary\n", n,convertDecimalToBinary(n));
  long long num =convertDecimalToBinary(n);
  printf("%lld in binary = %d in decimal\n",num,convertBinaryToDecimal(num));
  printf("%d in decimal = %d in octal\n",n, convertDecimalToOctal(n));
  int oct=convertDecimalToOctal(n);
  printf("%d in octal = %lld in decimal\n", oct, convertOctalToDecimal(oct));
  printf("%lld in binary =  %X in hexadecimal\n",num,convertBinaryToHexadecimal(num));
  
  return 0;
}

int convertBinaryToDecimal(long long num) {
  int dec = 0, i = 0, rem;
  while (num != 0) {
    rem = num % 10;
    num /= 10;
    dec += rem * pow(2, i);
    ++i;
  }
  return dec;
}

long long convertDecimalToBinary(int n) {
  long long bin = 0;
  int rem, i = 1;
  while (n != 0) {
    rem = n % 2;
    n /= 2;
    bin += rem * i;
    i *= 10;
  }
  return bin;
}

int convertDecimalToOctal(int n) {
    int octalNumber = 0, i = 1;
    while (n != 0) {
        octalNumber += (n % 8) * i;
        n /= 8;
        i *= 10;
    }
    return octalNumber;
}

   long long convertOctalToDecimal(int oct) {
    int decimalNumber = 0, i = 0;
    while(oct != 0) {
        decimalNumber += (oct%10) * pow(8,i);
        ++i;
        oct/=10;
    }
    i = 1;
    return decimalNumber;
}

int convertBinaryToHexadecimal(long long num){
    int hexadecimalval = 0, i = 1, rem;
    while (num != 0)
    {
        rem = num % 10;
        hexadecimalval = hexadecimalval + rem* i;
        i = i * 2;
        num = num / 10;
    }
    return hexadecimalval;
}
