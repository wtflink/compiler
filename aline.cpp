#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <fstream>
using namespace std;

int main() {
    int cnt = 0;
    char aline[100];
    memset(aline, 0 , 100);
 
    fstream ifs("test.in");
    if(!ifs)
    {
        cout << "can not open file..." << endl;
    }
 
    while(ifs)
    {
        ifs.getline(aline, 100);
        cout <<"line "<< cnt+1 << ":" << aline << endl;
        cnt++;
        memset(aline, 0 , 100);
    }
    ifs.close();
    return 0;
}