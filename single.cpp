#include<iostream>
using namespace std;
class student
{
int rno;
public:
void rno_read()
{
cout<<"\n enter roll no";
cin>>rno;
}
void disp_rno()
{
cout<<"\n roll no:"<<rno;
}
};
class test: private student
{
int test1,test2;
public:
void test_read()
{
rno_read();
cout<<"\n enter mark of test 1:";
cin>>test1;
cout<<"\n enter mark of test 2:";
cin>>test2;
}
void total ()
{
disp_rno();
cout<<"\n total mark:"<<test1+test2;
}
}
int main()
{
test stud;
stud.test_read();
stud.total();
return 0;
}

