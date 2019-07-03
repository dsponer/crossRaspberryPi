//
// Created by dsponer on 2019-07-03.
//

#include <iostream>
#include <sys/utsname.h>


int main(){
    struct utsname name;

    if(uname(&name)){
        exit(-1);
    }

    std::cout << "Test: " << name.sysname << " " << name.release << std::endl;

}