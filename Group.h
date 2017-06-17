#ifndef GROUP_H_
#define GROUP_H_

#include <iostream>
#include <fstream>
#include <string>
#include <list>
using namespace std;

class Group {
private:
    string name;
    string info;
    string MANAGER;
    // list<string> MEMBER;
    
public:
    Group();
    ~Group();
    
    void show_Group();
    void join_Group();
    void make_Group(string nm, string in, string id);
    void info_Group(string curr);
    void drop_Group();
};

#endif
