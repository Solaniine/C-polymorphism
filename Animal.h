
#include <iostream>
#include <vector>
using namespace std;

class Animal
{
public:
    virtual void speak(void) = 0;

};

class Sheep : public Animal
{
public:
    virtual void speak(void)
    {
        cout << "Sheep says: \t\tbaa!" << endl;
    }
    virtual  ~Sheep() {}
};
class Cow : public Animal
{
public:
    virtual void speak(void)
    {
        cout << "Cow says: \t\tmoo!" << endl;


    }

    virtual  ~Cow() {}
};
class Frisian : public Cow
{
    void speak(void)
    {

        cout << "Frisian Cow says: \tmoo (in black and white)!" << endl;

    }
};
