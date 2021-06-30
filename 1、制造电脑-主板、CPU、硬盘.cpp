#include <iostream>
using namespace std;
class Hardware
{

};





//StudybarCommentBegin
int main()
{
	HardWare *p1 = new CPU("Intel", 4.5); //CPU品牌Intel，主频4.5GHz
	HardWare *p2 = new MainBoard("ASUS", "ATX"); //主板品牌ASUS，板型ATX
	HardWare *p3 = new HardDisk("Seagate", 500); //硬盘品牌Seagate，容量500G
	p1->Work(); //输出CPU的信息
	p2->Work();//输出主板的信息
	p3->Work();//输出硬盘的信息
}

//StudybarCommentEnd