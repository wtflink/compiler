#include <string>

class Reader(str){
	string data=str;
	int currPos=0;
	str dataLength = length(str);

	char nextChar(){
		if(currPos >= dataLength){
			return -1;         //endofstream
		}	
		return data[currPos++];
	}
	
	reTract(n){
		if( n == undefine){n=1;}
		currPos-=n;
		if(currPos<0){currPos=0;}
	}


}
