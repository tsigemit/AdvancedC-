// CPP program to illustrate 
// push_back() function 
#include <bits/stdc++.h> 
using namespace std; 

void func_by_Value(vector<int> vect) 
{ 
   vect.push_back(30); 
} 
void func_by_reference(vector<int> & vect) 
{ 
   vect.push_back(30); 
}

int main() 
{ 
	vector<int> myvector{ 10, 2, 32, 4, 5,19}; 
	myvector.push_back(6); 
	myvector.pop_back();
    func_by_Value(myvector);
    func_by_reference(myvector);
    myvector.insert(myvector.begin(), 20); // 20 is inserted in the first position
    myvector.insert(myvector.begin()+2, 50); // 50 is inserted before the element at position 2
	for (auto it = myvector.begin(); it != myvector.end(); ++it) 
		cout << ' ' << *it; 
	cout<<endl;
	cout << myvector.front()<<endl; //prints the first element
	cout << myvector.back()<<endl; //prints the last element
	cout << "Size of our vector: " << myvector.size()<<endl; 
    cout << "Capacity of our vector: " << myvector.capacity()<<endl; 
    cout << "Max_Size of our vector: " << myvector.max_size()<<endl;
    myvector.resize(4);
    cout << "Size of our vector after resize = " << myvector.size()<<endl;
    for (auto i = 0; i < myvector.size(); ++i)
     {
     	cout << ' ' <<myvector[i];
        //cout <<"Tyep Id of i is "<<typeid(i).name()<<endl;
     } 
	 cout<<endl;   
	if (myvector.empty()) { 
        cout << "True"<<endl; 
    } 
    else { 
        cout << "False"<<endl; 
    } 
    vector<int> v;  
    v.assign(2,7); // this is the same as vector<int> v{2,7}
    cout << "Elements are\n"; 
    for (auto i = 0; i < v.size(); i++)
        cout << v[i] << endl; 

    vector<int> myvector1{ 1, 2, 3, 4 }; 
    vector<int> myvector2{ 3, 5, 7, 9 }; 
  
    // using swap() function to swap elements of vector 
    myvector1.swap(myvector2); 
    for (int i = 0; i < myvector2.size(); i++)
         cout << myvector2[i] << endl;
     if (equal(myvector1.begin(), myvector1.end(), myvector2.begin())) // better comparsion
     	cout <<"They are equal"<<endl;
     else if(myvector1!=myvector2)  // not good  comparison
     	cout<< "They are not equal"<<endl;
    cout << count(myvector.begin(), myvector.end(), 10);
    cout<<endl;
    //vector<int>::iterator it;
    auto it=find(myvector.begin(), myvector.end(),15);
            if(it!=myvector.end())
     cout << "Element found at position " <<it-myvector.begin()<<endl;    
     vector<int> vect1{1,2,3};    
     vector<int> vect2{4,5}; 
      auto vect3= vect1.insert(vect1.end(),vect2.begin(),vect2.end());  
      cout<<typeid(vect3).name() <<endl;    
return 0;
} 



