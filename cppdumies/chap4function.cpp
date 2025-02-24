#include <iostream>
#include <math.h>
#include <stdlib.h>

int addOne(int start)
{
    int newNumber = start + 1;
    return newNumber;
}

std::string userName()
{
    return "Theik Chan";
}

std::string fullName(std::string firstName, std::string lastName)
{
    return firstName + " - " + lastName;
}

void updateName(std::string name)
{
    std::cout << name << std::endl;
}

void displayUserName(std::string firstName, std::string lastName)
{
    std::string fullName = firstName + "-" + lastName;
    std::cout << fullName << std::endl;
}

// forward reference / function prototypes - function declaration
void printName(std::string frist, std::string last);

// overloading function - function with same name but difference parameter or difference order
void displayName(std::string first, std::string second)
{
}

void displayName(std::string name, int age)
{
}

// Function Object/Functos
class BlogPost
{
public:
    BlogPost(const std::string &title) : title(title) {}
    std::string getTitle() const { return title; }

private:
    std::string title;
};

class CompareBlogPosts
{
public:
    // Function object or Functor using operator ()
    bool operator()(const BlogPost &a, const BlogPost &b) const
    {
        return a.getTitle() < b.getTitle();
    }
};

// int argc - how many arguments appear on command line
// char *argv[] - provide list of command line argments in array

// int main()
int main(int argc, char *argv[])
{
    for (int index = 1; index < argc; index++)
    {
        std::cout << argv[index] << std::endl;
    }

    // fabs - floating point absolute value
    double start = -10.5;
    double finish = fabs(start);

    std::cout << finish << std::endl;

    double number = 10.0;
    double exponent = 3.0;
    double result = pow(number, exponent);
    std::cout << result << std::endl;

    std::cout << addOne(5) << std::endl;
    std::cout << fullName("Theik", "Chan") << std::endl;

    updateName("Theik Chan");

    std::string fullName = "Theik Chan";
    displayUserName("Theik", "Chan");
    std::cout << fullName << std::endl;

    displayName("hello", "c++");
    displayName("hello", 123);

    // calling string functions
    // insert()

    std::string words = "something interesting and bizarre";

    // inserting into a string
    words.insert(10, "seriously"); // insert seriously at index 10 of words string

    // removing from a string
    words.erase(10, 12);

    // replace from a string
    words.replace(4, 5, "body"); // replace start index, replace max length, replace characters

    // calling STL sort algorith using functor as parameter
    std::vector<BlogPost> posts = {BlogPost("post 2"), BlogPost("post 1")};
    std::sort(posts.begin(), posts.end(), CompareBlogPosts());
}

// function implementation
void printName(std::string first, std::string last)
{
    std::cout << first + "-" + last << std::endl;
}