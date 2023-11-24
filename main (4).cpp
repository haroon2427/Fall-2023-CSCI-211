/* 
1.  In our project, we will be storing user inputted data into classes divided up by each user.
Classes will carry user's username, password and full name. Because all of this information will
need to be accessed by the user, we will be using public contructors to recall information.


int main() {
    // Instantiating an object using static memory
    MyClass staticObject;
    staticObject.display();

    // Instantiating an object using dynamic memory
    MyClass* dynamicObject = new MyClass();
    dynamicObject->display();

    // Don't forget to free the memory allocated with 'new'
    delete dynamicObject;

    return 0;
}

2. Arrays offer less functionality than vectors. Arrays can only hold a fixed amount of data, initiated from the
outset, versus vectors that have adjustable sizes. In addition, the methods of finding data size are also different.
In arrays, you have the function sizeof() in which the array size will be recalled in bytes, whereas in
vectors, you have functions size() and capacity() you can recall number of elements and total storage size.

3. 

#include <iostream>
#include <vector>
using namespace std;

class MyClass {
private:
    int data;

public:
    //constructor
    MyClass() : data(0) {
        cout<<"No-parameter constructor called!"<<endl;
    }

    //constructor
    MyClass(int value) : data(value) {
        cout<<"Parameterized constructor called with value: "<<value<<endl;
    }

    //return data
    int getData() const {
        return data;
    }

    //display data
    void display() const {
        cout<<"Data: "<<data<<endl;
    }
};

int main() {
    vector<MyClass> myVec;

    //constructor
    MyClass obj1;
    myVec.push_back(obj1);

    //constructor
    MyClass obj2(42);
    myVec.push_back(obj2);

    //constructor
    MyClass obj3;
    myVec.push_back(obj3);

    for (size_t i = 0; i < myVec.size(); ++i) {
        cout<<"Object "<<i+1<<" details:\n;
        myVec.back().display(); //accessing the last element
        myVec.pop_back();       //removing the last element
    }

    return 0;
}

*/