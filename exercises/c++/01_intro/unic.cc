#include <iostream>

int main(){

std::string line;
std::string line1;
int counter=1;

std::getline(std::cin,line1);
while(std::getline(std::cin,line)){
  if(line==line1){
    counter++;
  }
  else{
    std::cout<< counter << " " << line1 << std::endl;
    line1=line;
    counter=1;
  }
}
std::cout<< counter << " " << line1 << std::endl;
}
