/*
1.(a)

Declaring a pointer is done in the same way we declare any variable with the addition of adding
a '*', specifying that it's a pointer type, between the type and variable name.

    int* pointer; //example of "pointer" being declared as an integer pointer

Assigning a pointer, similar to assigning any other variable, is done by by assigning 
the pointer to some other variable, whehter it's to the variables memory address or 
variable itself

    pointer=&num //pointer has been assigned to the address of num
    
(b) 

Declaration of float pointer: 
    float* pointer;

Assignment of float pointer:
    float weight = 5.9;
    pointer=&weight
    
Initialization of float pointer
    float weight = 5.9;
    float* pointer=5.9;

Declaration of char pointer 
    char * pointer;
    
Assignment of char pointer 
    char middleInitial = 'B';
    pointer=&middleInitial

Initialization of char pointer 
    char middleInitial = 'B';
    char* pointer='B';
    
(c) The integer pointer only stores the address of the integer

(d) Pointers are used to store information and to seemlessly iterate over elements in array.
Since pointers store memory addresses, pointers also make the run time more efficient. The use of
pointers also replaces the 'syntactical sugar' that isn't very necessary, again, making the run-time
more efficient.

2.(i)  char firstName[6]={'H','A','R','O','O','N'};

(ii) for(int i=0;i<6;i++){
        cout<<*(firstName + i)<<endl;
    }

(iii) When the compiler reads 'firstName[i]', as is the traditional way to iterate through a pointer, 
it is actually chaning it into a pointer of the format '*([variable] + [value entered])'.

For syntactical breakdown: firstName is the address of the first element
                            + i moves it to the next elements address
                            * dereferences the address to provide the value within the array index

3.
        #include <iostream>
        using std::cout;
        using std::endl;
        int main(){
        
            float myValue = 10.0; //initializing of float variable and assigning it to a value
            float* maybeFirst, maybeSecond = 5.0, *maybeThird; //initialing two float pointers and 
                                                                //initializing and assigning another 
                                                                //float variable
            maybeFirst = &myValue; //assigning pointer to address of float variable
            for(int i = 0; i < 4; i++){
                if(i % 2 == 0){ //will iterate on 0 and 2 only
                maybeThird = &maybeSecond; //will assign pointer to variables address
                }
                else{
                maybeThird = &myValue; //will assign pointer to diff variables address
                }               
                *maybeFirst += *maybeThird; //adding each time either 5.0 or 10.0
                    }
        cout << "My value is: " << myValue << endl; //will print 30.0
        
return 0;
}

*/















