#include <iostream>
using namespace std;
class CanGoWrong{
public:
	CanGoWrong(){
		char *pMemory= new char[99999999999999999];
		delete [] pMemory;
	}
};
void handleException(){
	bool error1 = false;
	bool error2 = false;
	bool error3 = true;
	if(error1){
		throw 8;
	}
	if(error2){
		throw "Something went wrong char in int";
	}

	if(error3){
		throw string("Something went wrong in string");
	}
}
void firstFunction(){
	handleException();
}
int main(){
	try{
   //firstFunction();
   CanGoWrong pMemory;
}
catch(bad_alloc &e){
	cout <<"Error Message="<<e.what()<<endl;
}
catch(int e){
	cout <<"Error Message="<<e<<endl;
}
catch(char const* e){
	cout <<"Error Message="<<e<<endl;
}
catch(string &e){
	cout <<"Error Message="<<e<<endl;
}

	return 0;
}