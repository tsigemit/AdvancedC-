#include <iostream>
#include <fstream>
using namespace std;
int main(){
	ofstream outFile;
	string outFileName = "file1.txt";
	outFile.open(outFileName);
	if(outFile.is_open()){
		outFile <<"This is written to the test file"<<endl;
		outFile << "This will be saved in file1.txt"<<endl;
		outFile.close();
	}
    else{
    	cout <<"file"<<outFileName<<"can't be opened"<<endl;
    }
	return 0;
}