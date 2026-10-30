#pragma once
#include <string>
#include <iostream>

namespace YooDaeun2693185
{
    class student{
        int id{};
        int score{};
        char grade{};
        void testScore(){

        }
        void calGrade(){
            if(score>=90) grade='A';
            else if (score>=80) grade='B';
            else if (score>=70) grade='C';
            else if (score>=60) grade='D';
            else grade='F';
        }

        public:
        student(const std::string& n="no name yet", int d=1234567, int s=0)
        :name{n}, id{d}, score{s}{}
        void input(){}
        student operator++(int){
            student temp {*this};
            ++{*this};
            return temp;
        }
    }
}