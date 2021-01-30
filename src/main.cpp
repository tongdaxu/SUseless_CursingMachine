#include <iostream>
#include <signal.h>

void my_handler(int sig){
    std::cout<<"还他妈想跑" <<std::endl;
}


int main()
{
    std::string command;
    int curse_count = 0;
    signal (SIGINT, my_handler);

    while (1){
        std::cout << "来骂我啊> ";
        std::getline(std::cin, command);
        int hash = command.size() + curse_count;
        if (hash % 3 == 0){
            std::cout<<"我操你妈的" <<std::endl;
        } else if (hash % 3 == 1){
            std::cout<<"你妈了个逼" <<std::endl;
        } else {
            std::cout<<"你他妈傻逼" <<std::endl;
        }

        curse_count ++;
    }

    return 0;
}