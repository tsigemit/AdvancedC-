#include <iostream>
#include <iterator>
#include<map>
using namespace std; 

map<int, int> coutElements(int array[]){
        map<int, int> numberOfElements;
        //iterator::Map<int, int> it = numberOfElements.begin();
        for(int i=0; i<10; i++){
        if(numberOfElements.find(array[i]) != numberOfElements.end()){
        numberOfElements[array[i]]=numberOfElements[array[i]]+1;
        }
        else
           numberOfElements.emplace(array[i],1);
        //it++;
        }
  return numberOfElements;
}
int main()
{
        map<int, int> Edureka1;
        Edureka1.emplace(1, 40);
        Edureka1.emplace(2, 30);
        Edureka1.emplace(3, 60);
        Edureka1.emplace(4, 20);
        Edureka1.emplace(5, 50);
        Edureka1.emplace(6, 50);
        Edureka1.emplace(7, 10);
        cout << "\nThe map Edureka1 is : \n";
        cout << "\tKEY\tELEMENT\n";
        for (auto &value : Edureka1)
        {
                cout << '\t' << value.first << '\t' << value.second << '\n';
        }
        cout << endl;
        map<int, int> Edureka2(Edureka1.begin(), Edureka1.end());
        cout << "\nThe map Edureka2 after"<< " assign from Edureka1 is : \n";
        cout << "\tKEY\tELEMENT\n";
        for (auto & value : Edureka1)
        {
                cout << '\t' << value.first << '\t' << value.second << '\n';
        }
        cout << endl;
        cout << "\nEdureka2 after removal of" " elements less than key=3 : \n";
        cout << "\tKEY\tELEMENT\n";
        Edureka2.erase(Edureka2.begin(), Edureka2.find(50));
        for (auto & value : Edureka1)
        {
                cout << '\t' << value.first << '\t' << value.second << '\n';
        }
        int num;
        num = Edureka2.erase(4);
        cout << "\nEdureka2.erase(4) : \n";
        cout << '\t' <<num <<"removed \n";
        cout << "\tKEY\tELEMENT\n";
        for (auto & value : Edureka1)
        {
                cout << '\t' << value.first << '\t' << value.second << '\n';
        }
        cout << endl;
        cout << "Edureka1.lower_bound(5) : "<< "\tKEY = ";
        cout << Edureka1.lower_bound(5)->first << '\t';
        cout << "\tELEMENT = "<< Edureka1.lower_bound(5)->second << endl;
        cout << "Edureka1.upper_bound(5) : "<< "\tKEY = ";
        cout << Edureka1.upper_bound(5)->first << '\t';
        cout << "\tELEMENT = "<< Edureka1.upper_bound(5)->second << endl;

        int arr[]={3,4,5,6,7,8,3,6,5,3};
        map<int, int> coutElement;
        coutElement=coutElements(arr);
        for( pair<int, int > value : coutElement )
                cout <<value.first <<" "<<value.second<<endl;
        return 0;
}
