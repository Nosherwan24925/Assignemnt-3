#include<iostream>
using namespace std;

class Door
{
private:
 bool isOpen;
 bool isLocked;

public:

void openDoor();
void closeDoor();
void lockDoor();
void unlook();
bool isDoorOpen();
bool isDoorLocked();
};


int main()
{

return 0;
}
void Door::unlock() {
    isLocked = false;
    cout << "Door is now unlocked.\n";
}