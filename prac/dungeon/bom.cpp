#include <iostream>
#include <random>
using namespace std;
#define rep(i,N) for(int i = 0; i<(int)(N); i++)

int main(){
        const int Msize = 20;
        char m[Msize][Msize+1];
        rep(y,Msize){
                rep(x,Msize){
                        m[y][x] = '#';
                }
                m[y][Msize] = '\0';
        }
        m[1][1] =  'S';
        m[Msize-1][Msize-1] = 'G';


        random_device rnd;
        mt19937 mt(rnd());
        int px = 1,py = 1;
        rep(i,30000){

                int r = mt()%4;
                switch(r) {
                case 0:
                        if(py-2 > 0 && m[px][py-2] == '#' && m[px][py-1] == '#') {
                                rep(i,2){
                                        py--;
                                        m[py][px] = ' ';
                                }
                        }
                        break;
                case 1:
                        if(py+2 < Msize-1 && m[px][py+2] == '#'&& m[px][py+1] == '#') {
                                rep(i,2){
                                        py++;
                                        m[py][px] = ' ';
                                }
                        }
                        break;
                case 2:
                        if(px-2 > 0 && m[px-2][py] == '#'&& m[px-1][py] == '#') {
                                rep(i,2){
                                        px--;
                                        m[py][px] = ' ';
                                }
                        }
                        break;
                case 3:
                        if(px+2 < Msize-1 && m[px+2][py] == '#'&& m[px+1][py] == '#') {
                                rep(i,2){
                                        px++;
                                        m[py][px] = ' ';
                                }
                        }
                        break;
                }
        }



        m[1][1] =  'S';


        rep(y,Msize){
                cout << m[y] << endl;
        }

        return 0;
}
