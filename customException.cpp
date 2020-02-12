#include <iostream>
using namespace std;

class MyException : public exception{
public:
	virtual const char* what() const throw(){
		return "Something went wrong";
	}
};
class Test{
	public:
		void goseWrong(){
			throw MyException();
		}
};
int main(){
	Test test;
    try{
     test.goseWrong();
    }
    catch(MyException  &e)
    {
    cout<<"MyException: "<<e.what()<<endl;
}
	return 0;
}