#include <iostream>
#include <fstream>
using namespace std;

int main(){
	string filename="file1.txt";
	ifstream infile;
	infile.open(filename);
	if(infile.is_open()){
		string line;
		while(!infile.eof()){
		getline(infile, line);
		cout<<line<<endl;
	}
	infile.close();

	}
	else{
		cout <<"the file"<<filename<<"can't be opened"<<endl;
	}
	return 0;
}