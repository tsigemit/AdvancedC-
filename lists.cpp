// C++ code to demonstrate the working of 
// emplace(), emplace_front() and emplace_back() 
#include<iostream> 
#include<list> // for list functions 
using namespace std; 
int main() 
{ 
	// Declaring a list 
	list<int> mylist; 
	
	// Initialising list iterator 
	list<int>::iterator it= mylist.begin(); 
	
	// Entering list element using emplace_back() 
	for (int i=1; i<=5; i++) 
	mylist.emplace_back(i); 
    // for (int i=0; i<5; i++) 
    // 	cout<<mylist[i]<<endl;
	
	// Displaying list elements 
	cout << "List after emplace_back operation is : "; 
	for (int &x : mylist)
	 cout << x << " "; 
	 cout << endl; 
	
	// Entering list element using emplace_front() 
	for (int i=10; i<=50; i+=10) 
	mylist.emplace_front(i); 
	
	// Displaying list elements 
	cout << "List after emplace_front operation is : "; 
	for (int &x : mylist) 
		cout << x << " "; 
	cout << endl; 
	
	// using advance() to advance iterator position 
	advance(it,2); 
	
	// inserting element at 2nd position using emplace() 
	//mylist.emplace(100); 
	
	// Displaying list elements 
	cout << "List after emplace operation is : "; 
	//mylist.emplace(3,);
	for (int &x : mylist) 
		cout << x << " "; 
	cout << endl; 
	 // Initializing list1 
     mylist = {1, 2, 3}; 
      
    // Initializing list2 
    list<int> mylist2 = {2, 4, 6}; 
      
    // using merge() to merge list1 with list2 
    mylist.merge(mylist2); 
      
    // Displaying list elements  
    cout << "list1 after merge operation is : "; 
    for (int &x : mylist) cout << x << " "; 
    cout << endl; 
      
    // using remove_if() to remove odd elements 
    // removes 1 and 3 
    mylist.remove_if([](int x){
    	return x%2!=0;
    	}); 
      
    // Displaying list elements  
    cout << "list1 after remove_if operation is : "; 
    for (int &x : mylist) 
	    cout << x << " "; 
    cout << endl; 
    mylist.unique();
    cout<<"after unique operation"<<endl;
    for (auto it = mylist.begin(); it != mylist.end(); ++it) 
        cout << ' ' << *it;
	
	 
    cout << endl;
	return 0; 
	
} 
