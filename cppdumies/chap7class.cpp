#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

class Oven
{
private:
    void turnOnHeatingElement();
    void turnOffHeatingElement();

public:
    void bake(int temperature);
};

void Oven::turnOnHeatingElement()
{
    std::cout << "heating element is now On! be careful" << std::endl;
}

void Oven::turnOffHeatingElement()
{
    std::cout << "heating element is now off. relax" << std::endl;
}

void Oven::bake(int temperature)
{
    turnOnHeatingElement();
    std::cout << "baking" << std::endl;
    turnOffHeatingElement();
}

void displayVar(const int value)
{
    // value += 1;
    std::cout << value << std::endl;
}

void cheeseGone(Oven *oven)
{
}

class Cheese
{
public:
    std::string status;
    void eat();
    void rot();
};

// global variable
int cheeseCount;

void OneMoreCheeseGone(Cheese *block)
{
    cheeseCount--;

    // update status
    block->status = "gone";
}

void Cheese::eat()
{
    std::cout << "eaten up! Yummy" << std::endl;

    // this pointer variable exist on point current object
    OneMoreCheeseGone(this);
}

void Cheese::rot()
{
    std::cout << "rotted away! yuck" << std::endl;
    OneMoreCheeseGone(this);
}

class Walnut
{
public:
    int size;
};

class Squirrel
{
private:
    Walnut *myDinner;
    std::string myName;

public:
    Squirrel();                     // default constructor declaration
    Squirrel(std::string startNme); // overloaded constructor with parameter
    ~Squirrel();                    // destructor declaration
    void whatIsMyName();
};

// default constructor implementation
Squirrel::Squirrel()
{
    std::cout << "starting" << std::endl;
    myDinner = new Walnut;
    myDinner->size = 30;
}

// argument constructor
Squirrel::Squirrel(std::string startNme)
{
    std::cout << "starting" << std::endl;
    myName = startNme;
}

// special syntax constructor which initialize myName parameter value
Squirrel::Squirrel(std::string startName) : myName(startName)
{
    std::cout << "starting " << std::endl;
}

// descructor implementation
Squirrel::~Squirrel()
{
    std::cout << "clean up my nest" << std::endl;
    delete myDinner;
}

void Squirrel::whatIsMyName()
{
    std::cout << "my name is " << myName << std::endl;
}

// inheritance
class Vehicle
{
public:
    int numberOfWheels;

    void drive()
    {
        std::cout << "driving, driving, driving" << std::endl;
    }
};

class Toyota : public Vehicle
{
public:
    void meAndMyToyota()
    {
        std::cout << "just me and my toyota" << std::endl;
    }
};

// Member functon

class Item
{
public:
    // virtual destructor when class have virtual function
    virtual ~Item() {}

    // virtual fuction sub class can override it
    virtual void printCost(double price, int quantity)
    {
        std::cout << "regular cost =" << price * quantity << std::endl;
    }
};

class DiscountItem : public Item
{
public:
    DiscountItem(double discountPrice) : discount(discountPrice) {}

    virtual ~DiscountItem() {}

    // override member function from Item class
    void printCost(double price, int quantity) override
    {
        std::cout << "discount cost = " << price * quantity * (1 - discount) << std::endl;
    }

private:
    double discount;
};

class DonatedItem : public Item
{
public:
    virtual ~DonatedItem() {}

    void printCost(double price, int quantity) override
    {
        std::cout << "donated cost = " << 0 << std::endl;
    }
};

// Overloading member functions
class Shape
{
public:
    double area(double radius)
    {
        return M_PI * radius * radius;
    }

    // overloading member function with same name difference parameters
    double area(double width, double height)
    {
        return width * height;
    }

    double area(double length, double width, double height)
    {
        return 2 * (width * length + height * length + height * width);
    }
};

int main()
{
    Oven fred;
    fred.bake(875);

    const int myVar = 3;
    displayVar(myVar);

    Oven *philip = new Oven;
    cheeseGone(philip);

    Cheese *asiago = new Cheese();
    Cheese *limburger = new Cheese();

    cheeseCount = 2;
    asiago->eat();
    limburger->rot();

    std::cout << std::endl;
    std::cout << "cheese count" << cheeseCount << std::endl;
    std::cout << "asiago " << asiago->status << std::endl;
    std::cout << "limburger " << limburger->status << std::endl;

    // call constructor
    Squirrel *sam = new Squirrel("Sam");
    Squirrel *sally = new Squirrel("Sally");

    sam->whatIsMyName();
    sally->whatIsMyName();

    // call destructor
    delete sam;
    delete sally;

    // inheritance
    Toyota myCar;
    myCar.meAndMyToyota();
    myCar.drive();

    // inheritance with virtual function and virtual descructor
    Item regularItem;
    DiscountItem discounteItem(0.25);
    DonatedItem donatedItem;

    regularItem.printCost(2.99, 3);
    discounteItem.printCost(2.99, 2);
    donatedItem.printCost(2.99, 3);

    // Generate random number rand() same random value , srand() difference rand sequence, time(0) current time in seconds

    srand(time(0));

    for (int i = 0; i < 4; i++)
    {
        std::cout << " " << rand();
    }

    std::cout << std::endl;

    for (int i = 0; i < 4; i++)
    {
        std::cout << " " << rand() % 3;
    }

    std::cout << std::endl;

    // Polymorphism
    Item *regularPtr = new Item;
    DiscountItem *discountPtr = new DiscountItem(0.25);
    DonatedItem *donatedPtr = new DonatedItem;

    srand(time(0));

    for (int i = 0; i < 10; i++)
    {
        int r = rand() % 3; // Random number from 0, 1, 2
        std::cout << r << "";
        Item *itemPtr;

        switch (r)
        {
        case 0:
            itemPtr = regularPtr;
            break;
        case 1:
            itemPtr = discountPtr;
            break;
        case 2:
            itemPtr = donatedPtr;
            break;
        }

        // use polymorphism runtime to determine which class's member function to call based on pointer currently pointing to
        // print cost member function must be virtual in superclass and override in each subclass to support polymorphism
        itemPtr->printCost(2.99, 3);
    }

    // overloading member function call
    Shape circle;
    std::cout << "ared of circle with radius 2" << circle.area(2) << std::endl;

    Shape rectangle;
    std::cout << "area of rectangle with widght 3"
              << std::endl;
    std::cout << "  and length 4 ="
              << rectangle.area(3, 4) << std::endl;

    Shape prism;
    std::cout << "area of prism with length 3"
              << std::endl;
    std::cout << " and width 4"
              << std::endl;
    std::cout << " and height 5 = "
              << prism.area(3, 4, 4) << std::endl;
}