/*************************************************************************
	> File Name: 3.cpp
	> Author:yang 
	> Mail:yanglongfei@xiyoulinux.org
	> Created Time: 2015年12月04日 星期五 09时57分50秒
 ************************************************************************/

#include<iostream>
#include <string>
#include <vector>
using namespace std;
class Screen;
class Window_mgr{
public:
    using ScreenIndex = vector<Screen>::size_type;
    void clear(ScreenIndex i);
    Window_mgr& push_Screen(Screen);
    ScreenIndex addScreen(const Screen &s);
private:
      vector<Screen> screens;
};
class Screen{
public:
    friend void Window_mgr::clear(ScreenIndex);
    typedef std::string::size_type pos; //等价于using pos=std::string::size_type;
    Screen()=default;
    Screen(pos ht,pos wh):height(ht),width(wh),contents(ht*wh,' '){};
    Screen(pos ht,pos wh,char c):height(ht),width(wh),contents(ht*wh,c){};
    char get(pos ht,pos wd) const;
    Screen &move(pos r,pos c);
    Screen &set(char);
    Screen &set(pos,pos,char);
    Screen &display(ostream &os);
    const Screen &display(ostream &os) const;
    pos size()const;
private:
    pos cursor = 0;
    pos height= 0,width = 0;
    string contents;
    void do_display(ostream &os)const 
    {
        os << contents;
    }

    //typedef std::string::size_type pos; //等价于using pos=std::string::size_type;
};
void Window_mgr::clear(ScreenIndex i)
{
    Screen &s = screens[i];
    s.contents = string(s.height * s.width,' ');
}
Window_mgr& Window_mgr::push_Screen(Screen i)
{
    (*this).screens.push_back(i);
    return *this;
}
Window_mgr::ScreenIndex
Window_mgr::addScreen(const Screen &s){
    screens.push_back(s);
    return screens.size()-1;
}
Screen::pos 
Screen::size()const{
    return height*width;
}
inline Screen& Screen::display(ostream &os){
    do_display(os);
    return *this;
}
inline const Screen& Screen::display(ostream &os) const
{
    do_display(os);
    return *this;
}
inline char Screen::get(pos r,pos c) const
{
    pos row = r*width;
    return contents[row+c];
}
inline Screen& Screen::move(pos r,pos c)
{
    pos row = r*width;
    cursor=row+c;
    return *this;
}
inline Screen& Screen::Screen::set(char c)
{
    contents[cursor]=c;
    return *this;
}
inline Screen& Screen::set(pos r,pos col,char ch)
{
    contents[r*width+col]=ch;
    return *this;
}
int main(int argc,char *argv[])
{
    Screen myScreen(5,3);
    const Screen blank(5,3,'$');
    myScreen.set('#').display(cout);
    cout <<endl;
    blank.display(cout);
    cout << endl;
    myScreen.move(4,2).set('&').display(cout);
    cout<<endl;
    Window_mgr window;
    window.push_Screen(Screen(12,3,'%'));
    return 0;
}
