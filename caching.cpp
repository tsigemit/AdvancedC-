#include <iostream>
#include <exception>
using namespace std;
void goesWrong(){
	bool err1=true;
	bool err2=false;
	if(err2){
		throw exception();
	}
	if(err1){
		throw bad_alloc();
	}
}
int main(){
   try{
   	goesWrong();
   }
   catch(bad_alloc &e){
   	cout<<"went wrong on bad_alloc: "<<e.what()<<endl;
   }

   catch(exception &e){
   	cout<<"went wrong on exception: "<<e.what()<<endl;
   }
	return 0;
}