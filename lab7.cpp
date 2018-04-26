#include<iostream>
#include<string.h>
using namespace std;

class student{
private:
    char name[20];
    char studentid[12];
    float GPA;
    int Tuvshin;
private:
    void medeeleloruulah();
    void ner();
    void dugaaravah();
    void golch();
    void tuvshin();
    void Studentprint();
};

class teacher{
private:
    char name[20];
    char tenhimner[15];
    char bolovsroltuvshin[10];
    float tsalin;
private:
    void medeeleloruulah();
    void ner();
    void tenhimneravah();
    void bolovsroltuvshinavah();
    void tsalinavah();
    void teacherprint();
};

class hicheel{
private:
    char hicheelner[20];
    char hicheeldugaar[8];
    char hicheelsedev[15];
private:
    void medeeleloruulah();
    void hicheeliinner();
    void hicheeldugaaravah();
    void hicheelsedevavah();
    void hicheelprint();
};

class burtgel{
private:
    char hicheelsedev[15];
    char bagshner[20];
    char studentid[12];

private:
    void medeeleloruulah();
    void hicheelzaahsedev();
    void getbagshname();
    void getstudentid();
    void burtgelprint();
};

class irts{
private:
    char irsen[20];
    char tasalsan[20];
    char uvchtei[20];
    char chuluutei[20];
    char hotsorson[20];
private:
    void medeeleloruulah();
    void medeelelavah();
    void irtspritn();
};

int main(){

}
