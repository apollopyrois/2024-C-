#include <iostream>
#include <memory>

struct Player {
    std::string name;
    std::shared_ptr<Player> player;
    ~Player() {
        std::cout << "in ~Player" << name << std::endl;
        // std::cout << "in ~Player \n";
    }
};

int main() {

    std::cout << "Test" << std::endl;

    //unique pointers
    std::unique_ptr<int> intPtr(new int);
    *intPtr = 10;
    int id = *intPtr;
    std::cout << "ID is: " << id << std::endl;
    std::cout << "Address is: " << &id << std::endl;

    //shared pointer
    std::shared_ptr<Player> liam = std::make_shared<Player>();
    std::shared_ptr<Player> emily = std::make_shared<Player>();

    liam->name = "Liam";
    liam->player = emily;

    emily->name = "Emily";
    emily->player = liam;

    //when main terminates, WE HAVE A MEMORY LEAK!!!
    //classic example of a memory leak situation:
    //when 'liam' goes out of scope, the memory can't
    //be freed because emily's player references it.
    //likewise, when 'emily' goes out of scope,
    //liam's player which didn't delete still points
    //to it

    //clean up memory leak
    liam->player = NULL;
    emily->player = NULL;

    //weak pointers
    std::weak_ptr<Player> pWeakLiam(liam);
    std::weak_ptr<Player> pWeakEmily(emily);
    std::weak_ptr<Player> pWeak2(liam);

    //**************TEST STUFF*********************** */
    //if liam or emily goes out of scope or is
    //freed before the 3 weak pointers are nullified,
    //then you have a "dangling pointer" which is a
    //pointer that points to a memory resource that
    //is no longer reserved
    /************************************************ */





    return 0;
}