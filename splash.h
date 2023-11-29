#include<iostream>
#include <string>
using namespace std;
void title() 
 {
       string splassh[] =
{
 "   **     ** ********    " ,
 "  //**   ** /**/////     " ,
 "   //** **  /**          " ,
 "    //***   /*******     " ,
 "     **/**  /**////      " ,
 "    ** //** /**          " ,
 "   **   //**/********    " ,
 "  //     // ////////     " , 
 "   SIMPLE ENCRYPTOR       " 
 "           BY:-xarbon4486  ",

};
    for (const string& line : splassh) {
        std::cout << line << std::endl;
    } 
}