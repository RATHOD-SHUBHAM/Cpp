#include <iostream>
#include <string>
#include <memory>
using namespace std;

class User{
public:
    User(){
        cout << "User created\n";
    }
    ~User(){
        cout << "User destroyed\n";
    }
    
    void testFunc(){
        cout << "I am a test function\n";
    }
};


int main()
{
    // Todo: Empty scope
    {
//        unique_ptr<User> sam(new User()); // non fav. way of developers
        
        unique_ptr<User> sam = make_unique<User>(); // okaish way of developers
        sam->testFunc();

        //        Todo: Not allowed
//        unique_ptr<User> samm = sam;  NOT ALLOWED
        
    }

    // Todo: Shared Pointer
    {
//        shared_ptr<User> tim(new User());
        shared_ptr<User> tim = make_shared<User>();
        shared_ptr<User> timm = tim;
    }
    
    
    cout << "outside code\n";
    
    return 0;
    
}
