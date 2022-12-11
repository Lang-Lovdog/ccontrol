#include <iostream>
#include "ccontrol.hpp"

int main (){
    int c=0;
    cpos a;
    while(c<7){
        a.putxy();
        std::cout<<c<<"\n"<<a<<"\n";
        ++c;
        std::cin.get();
    }
}
