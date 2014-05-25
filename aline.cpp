#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <fstream>
#define maxLine 1000
using namespace std;
int main() {
    int cnt = 0;            //a counter which count the number of line
    char aline[maxLine];
    memset(aline, 0 , maxLine);
 
    fstream ifs("test.in"); //standard file input is test.in
    if(!ifs){cout << "can not open file..." << endl;}
 
    while(ifs){
        ifs.getline(aline, maxLine);
        cout <<"line "<< cnt+1 << ":" << aline << endl;
        cnt++;
        memset(aline, 0 , maxLine);
    }
    ifs.close();            //close file
    return 0;
}