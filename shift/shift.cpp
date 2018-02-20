#include <iostream>

int main(){

int szoHossz = 0 ;
int bitSzam = 1;
do
++szoHossz;
while(bitSzam <<= 1);	

std::cout << "A szóhossz: " << szoHossz << " bites\n";
return 0;
}

