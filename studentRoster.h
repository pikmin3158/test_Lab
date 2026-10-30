#pragma once
#include <array>
#include "student.h"
const int max(30);

namespace YooDaeun2693185{
    class studentRoster{
        std::string courseName;
        std::array<studnet, max> studentArray;
        int n;
        studentRoster(const std::string& c= "no course name yet"):coureName{c}, n{0}{};
        void addstudent(const student& c)
        {
            if(n>=max){
                std::cout<<"오류났다";
                std::exit(1);
            }

            studentArray[n]=s; n+=1;
        }
        voide print() const{
            std::cout<<courseName;
            for(int i=0; i<n; ++i){
                std::cout<< studentArray[n];
            }
        }
        std::string gerCourseName() const {return courseName;}
        void setCourseName(const std::string& c){}
    };
}