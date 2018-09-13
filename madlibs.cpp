//Authors: Serina Garcia 
#include <iostream>
#include <string>

int main()
{
        std::string group;
        std::string item1;
        std::string item2; 
        std::string verb;
        int number;
        std::string name;

        std::cout<<"Please identify a group of objects(plural):";
        std::cin>>group;
        std::cout<<"Please choose 2 items in that group:"<<std::endl;
        
        std::cout<<"1 -";
        std::cin>>item1;
        std::cout<<"2 -";
        std::cin>>item2;

        std::cout<<"Now choose a past tense verb: ";
        std::cin>>verb;
        std::cout<<"Choose a whole number: ";
        std::cin>>number;
        std::cout<<"now choose any name you'd like: ";
        std::cin>>name;
        std::cout<<"Long ago, the four nations lived together in harmony."<<std::endl;
        std::cout<<"Then everything changed when the ";
        std::cout<<item1;
        std::cout<<" nation attacked."<<std::endl;
        std::cout<<"Only the avatar, master of all 4 ";
        std::cout<<group;
        std::cout<<" could stop them, but when the world needed him most, he ";
        std::cout<<verb;
        std::cout<<". "<<std::endl;
        
        std::cout<<number;
        std::cout<<" years have passed, and my brother and I have discovered a new avatar,"<<std::endl;
        
        std::cout<<" a ";
        std::cout<<item2; 
        std::cout<<" named ";
        std::cout<<name;
        std::cout<<", and although his ";
        std::cout<<item2;
        std::cout<<"ing skills are great, he has a lot to learn before he's ready to save anyone."<<std::endl;
        std::cout<<" But I believe ";
        std::cout<<name;
        std::cout<<" can save the world.";

        return 0;
}
