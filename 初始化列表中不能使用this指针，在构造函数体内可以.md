```c++
struct h
{
	int a;
	h(int x = 0): this->a(x){
	cout << this << endl;
	cout << this->a << endl;
	}
}; 
int main()
{ 
	h n;
	cout << &n << endl;
	getchar();
	return 0;
}
```

在这种情况下报错，提示语法错误“this”

在初始化列表中去掉this可以正常运行，结果如下

可见，在初始化列表中不可以调用this指针，但在构造函数体内可以使用。

解释如下：

this指针属于对象，只有对象完成构造、分配了相应的存储空间后才可以使用，而初始化列表发生在构造之前，所以不能使用。

那为什么在构造函数体内可以使用呢？

因为构造函数中的内容并不是初始化，而是赋值。