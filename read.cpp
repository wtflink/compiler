#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main() {
    int num;      
    int cnt = 0;  
    freopen("test.in" , "r" , stdin); 
    freopen("test.out" , "w" , stdout) ;    
    while(cin>>num){
        int rst =  0;
        for(int i =  0; i < num; i++){
            char tmp;
            cin >> tmp;
            rst += tmp;
        }
        
        printf("Test Case line %d : %c\n" , cnt+1 , rst);//输出结果
        cnt++;
    }
    return 0;
}