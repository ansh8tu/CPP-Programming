//The link for using different namespaces is below;
//https://ide.geeksforgeeks.org/CD2mSZ4JXJ

//The code for using different namespaces is;

#include<iostream>
namespace devops
{
    int the_solution= 42;
}

int main()
{
    std::cout<<devops::the_solution<<std::endl;
    return 0;
}
