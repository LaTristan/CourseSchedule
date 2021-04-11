#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;
enum Day {
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
};
enum Distribution{
    First,
    Second,
    Third,
    Fourth,
    Fifth,
    Sixth
};

class Course{
private:
    string name;
    vector<int>weeks;
    vector<pair<Day,Distribution>> day_in_week;
    string teacher;
    float points;
public:
    bool searchByName(string nameStr){
        if(name.find(nameStr)!=string::npos)return true;
        return false;
    }
    bool searchByTeacher(string tName){
        if(teacher.find(tName)!=string::npos)return true;
        return false;
    }
    Course(string name,string teacher,float pts):name(name),teacher(teacher),points(pts){}
};

#endif