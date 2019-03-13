/*
Author      : Delanika Olympiani Trieswari Caesarini
NPM         : 140810180026
Deskripsi   : Program ini menampilkan panjang, lebar, keliling, luas, diagonal segi empat
Tahun       : 2019
*/

#include <iostream>
#include <math.h>
using namespace std;


typedef struct{
    float panjang;
    float lebar;
} segiempat;

void input(segiempat *s);
float keliling(segiempat s);
float luas(segiempat s);
float diagonal(segiempat s);
void print(segiempat s);

int main()
{
   segiempat* s;
   s = new segiempat;
   input(s);
   print (*s);
    return 0;
}

void input(segiempat *s){
    s->panjang=3;
    s->lebar=4;
    cout<<"Input panjang : "<< s->panjang<<endl;
    cout<<"Input lebar   : "<< s->lebar<<endl;
}

float keliling(segiempat s){
    return (2*(s.panjang+s.lebar));
}

float luas(segiempat s){
    return (s.panjang*s.lebar);
}

float diagonal(segiempat s){
    return sqrt((s.panjang*s.panjang)+(s.lebar*s.lebar));
}

void print(segiempat s){
    cout<<endl<<"Keliling : "<<keliling(s)<<endl;
    cout<<"Luas     : "<<luas(s)<<endl;
    cout<<"Diagonal : "<<diagonal(s)<<endl;
}
