//
//  parser.cpp
//  compiler
//

#include "parser.h"

Parser:: Parser(char* path){
	readGrammar(path);
}


void Parser:: readGrammar(char* path){
    string head_symbol;
    string terminal;
    vector<list<string> > body;
    
    string aline;
    fstream ifs(path);
    if(!ifs){
        cout << "grammar file stream error" << endl;
        exit(1);
    }
    
    while(ifs){
        getline(ifs, aline);
        aline.substr(0, aline.length()-1);
        
        if(isalpha(aline[0])){
            cout << aline << " is nonterminal " << endl;
        }
        else{
            cout << aline << " ===is terminal===" << endl;
        }
    }
    
}

void Parser:: Parse(){
    
    
    
}

int main(){
    Parser test("/Users/link515/grammar.txt");
    
}