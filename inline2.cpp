# include <iostream>
using namespace std;
class cube {
    int s;
    public:
    void get();
    void volume();

};
inline void cube::get()
{
    cout<<"Enter the side of cube:";
    cin>>s;
}
inline void cube::volume()
{
    cout<<"Volume of cube is:"<<s*s*s;
}
int main()
{
    cube c;
    c.get();
    c.volume();
    return 0;
}

    