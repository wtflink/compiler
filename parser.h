//
//  parser.h
//  compiler
//

#ifndef __compiler__parser__
#define __compiler__parser__
#define maxLine 1000

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <list>
#include <set>
#include <stack>
#include <ctype.h>
#include <vector>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <cstdio>

using namespace std;

class Parser{
    public:
    Parser(char* path);
    void readGrammar(char* path);
    void Parse();
    string head_symbol;
    string terminal;
    vector<list<string>> body;
        
};

#endif /* defined(__compiler__parser__) */
