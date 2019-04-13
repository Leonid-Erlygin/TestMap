#include "level.h"
#include <fstream>
void addGid(){

    std::ifstream inFile;
    std::ofstream outFile;
    std::string s;
    outFile.open("/home/leonid/CLionProjects/TestMap/TestEdited.tmx");
    inFile.open("/home/leonid/CLionProjects/TestMap/Test2.tmx");
    while (getline(inFile,s)){
        if (s.find("<tile")!=-1){
            if(s.find("gid")==-1){
                s =  "<tile gid=\"0\"/>";
            }
        }
        s +="\n";
        outFile<<s;

    }
    inFile.close();
    outFile.close();
}

int main()
{
    addGid();

#if 1
    Level level;
    level.LoadFromFile("/home/leonid/CLionProjects/TestMap/TestEdited.tmx");

    sf::RenderWindow window;
    window.create(sf::VideoMode(1920, 1024), "Level.h test");

    while(window.isOpen())
    {
        sf::Event event;

        while(window.pollEvent(event))
        {
            if(event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        level.Draw(window);
        window.display();
    }
#endif
    return 0;
}