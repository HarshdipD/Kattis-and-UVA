// https://open.kattis.com/problems/bookingaroom
// 94% completion rate

#include <iostream>

using namespace std;

int main()
{
    int total, booked;
    int booked_room;
    bool available = false;
    cin >> total >> booked;
    bool* rooms = new bool[total+1];
    for(int i = 0; i < booked; i++){
        cin >> booked_room;
        rooms[booked_room] = true;
    }
    
    for(int i = 1; i < total+1; i++){
        if(rooms[i] == false){
            cout << i << endl;
            available = true;
            break;
        }
    }
    if(available == false){
        cout << "too late" << endl;
    }
    return 0;
}
