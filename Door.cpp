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

void Door::closeDoor(){
 	isOpen=false;
}

void Door::openDoor(){
	 isOpen=true;
}


bool Door::isDoorLocked()
{
    return isLocked;
}

bool Door::isDoorOpen()
{
    return isOpen;
}



int main()
{

return 0;
}


