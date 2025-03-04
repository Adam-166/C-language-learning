//#include <stdio.h>
//struct sun//结构体
//{
//	char name[20];
//	char sex[20];
//	int age;
//	char tele[12];
//};
//void print(struct sun *ps)
//{
//	printf("%s %s %d %s\n", (*ps).name, (*ps).sex, (*ps).age, (*ps).tele);
//	printf("%s %s %d %s\n", ps->name, ps->sex, ps->age, ps->tele);
//}
//int main()
//{
//	struct sun s={"王政寒","男",20,"1663061809"};
//	printf("%s %s %d %s\n", s.name, s.sex, s.age, s.tele);
//	print(&s);
//	return 0;
//}
//#include <stdio.h>
//#define MaxSize 10
////结构体
//typedef struct {
//    int data[MaxSize];
//    int length;
//} SqList;
//
//void InitList(SqList* L) {
//    L->length = 0;
//}
//
//int main() {
//    SqList L;
//    InitList(&L);  // 传递L的地址
//    for (int i = 0; i < MaxSize; i++) {
//        printf("data[%d] = %d\n", i, L.data[i]);  // 格式化输出data[i]
//    }
//    return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#define InitSize 10//默认最大长度
////定义结构体
//typedef struct {
//	int* data;
//	int MaxSize;
//	int length;
//}SeqList;
//void InitList(SeqList& L) {
//	//用malloc函数申请一片连续的存储空间
//	L.data = (int*)malloc(InitSize * sizeof(int));
//	L.length = 0;
//	L.MaxSize = InintSize;
//}
//void IncreaseSize(SeqList& L, int len) {
//	int* p = L.data;
//	L.data = (int*)malloc((L.MaxSize + length) * sizeof(int));
//	for (int i = 0; i < L.length; i++) {
//		L.data[i] = p[i];//将数据复制到新的区域
//	}
//	L.MaxSize = L.MaxSize + length;
//	free(p);
//}
//
//int main()
//{
//	SeqList L;//声明顺序表
//	InitLize(L);//初始化顺序表
//	IncreaseSize(L, 5);
//
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//
//#define InitSize 10 // 默认最大长度
//
//// 定义结构体
//typedef struct {
//    int* data;
//    int MaxSize;
//    int length;
//} SeqList;
//
//// 初始化顺序表
//void InitList(SeqList* L) {
//    // 用 malloc 函数申请一片连续的存储空间
//    L->data = (int*)malloc(InitSize * sizeof(int));
//    if (L->data == NULL) {  // 检查内存分配是否成功
//        printf("Memory allocation failed!\n");
//        exit(1); // 如果分配失败，退出程序
//    }
//    L->length = 0;
//    L->MaxSize = InitSize;
//}
//
//// 扩展顺序表空间
//void IncreaseSize(SeqList* L, int len) {
//    int* p = L->data; // 保存原来的数据区域
//    L->data = (int*)malloc((L->MaxSize + len) * sizeof(int)); // 申请新的内存
//    if (L->data == NULL) {  // 检查内存分配是否成功
//        printf("Memory allocation failed!\n");
//        free(p);  // 释放原来的内存
//        exit(1); // 如果分配失败，退出程序
//    }
//    for (int i = 0; i < L->length; i++) {
//        L->data[i] = p[i]; // 将数据复制到新的区域
//    }
//    L->MaxSize = L->MaxSize + len; // 更新最大容量
//    free(p); // 释放原内存
//}
//
//int main() {
//    SeqList L; // 声明顺序表
//    InitList(&L); // 初始化顺序表
//    IncreaseSize(&L, 5); // 扩展顺序表空间
//
//    // 可根据需要继续使用 L，如添加数据等操作
//    printf("MaxSize: %d\n", L.MaxSize);
//    printf("Length: %d\n", L.length);
//
//    // 释放分配的内存
//    free(L.data);
//
//    return 0;
//}
//#include <stdio.h>
//
//void swap(int* a, int* b) {
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//}
//
//int main() {
//    
//    int arr[] = { 26,53,17,76,93,57,86,22,47 }; 
//    int n = sizeof(arr) / sizeof(arr[0]); // 数组的元素个数
//
//    // 使用指针查找最大值和最小值的元素
//    int* max = arr, * min = arr;
//
//    for (int i = 1; i < n; i++) {
//        if (*(arr + i) > *max) {
//            max = arr + i;
//        }
//        if (*(arr + i) < *min) {
//            min = arr + i;
//        }
//    }
//
//    // 输出原始数组
//    printf("原始数组:\n");
//    for (int i = 0; i < n; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//
//    // 交换最大值与第一个元素，最小值与最后一个元素
//    swap(arr, max);      // 交换第一个元素与最大元素
//    swap(arr + n - 1, min); // 交换最后一个元素与最小元素
//
//    // 输出修改后的数组
//    printf("修改后的数组:\n");
//    for (int i = 0; i < n; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//
//    return 0;
//}
//#include <stdio.h>
//void arr(char a, char b) {
//	char c;
//	c = a;
//	a = b;
//	b = c;
//}
//int main()
//{
//	char a[] = "Hao are you";
//	printf("字符串A:%s\n", a);
//	char b[50];
//	arr(b, a);//将a的值复给b
//	printf("字符串B:%s", b);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a[] = { 1, 7, 9, 11, 13, 15, 17, 19 };
//	int b[]= { 2, 4, 6, 8, 10 };
//	//标记数组长度
//	int n_a = sizeof(a) / sizeof(a[0]);
//	int n_b = sizeof(b) / sizeof(b[0]);
//	int n_c = n_a + n_b;
//	//定义合并后的数组
//	int c[n_c] = {};
//	// 打印排序前的数组 c
//	printf("排序前的数组 c: ");
//	for (int i = 0; i < n_c; i++) {
//		c[i] = 0;  // 初始化数组 c 为 0（可以选择其他初始化方式）
//	}
//	for (int i = 0; i < n_c; i++) {
//		printf("%d ", c[i]);  // 输出初始化后的数组 c
//	}
//	printf("\n");
//	int* pa = a;
//	int* pb = b;
//	int* pc = c;
//	//双指针法合并数组
//	while (pa < a + n_a && pb < b + n_b) {
//		if (*pa < *pb) {
//			*pc = *pa;
//			pa++;
//		}
//		else {
//			*pc = *pb;
//			pb++;
//		}
//		pc++;
//	}
//	while (pa < a + n_a) {
//		*pc = *pa;
//		pa++;
//		pc++;
//	}
//	while (pb < b + n_b) {
//		*pc = *pb;
//		pb++;
//		pc++;
//	}
//	//合并后数组输出
//	printf("合并且排序后的数组C：");
//
//		return 0;
//}
//
//#include<stdio.h>
//void merge(int* a, int* b, int* c, int n1, int n2)
//{
//	int i = 0, j = 0, k = 0;
//	while (i < n1 && i < n2)
//	{
//		if (a[i] < b[j])
//		{
//			c[k++] = a[i++];
//		}
//		else {
//			c[k++] = b[j++];
//		}
//	}
//	while (i < n1)
//	{
//		c[k++] = a[i++];
//	}
//	while (j < n2)
//	{
//		c[k++] = b[j++];
//	}
//}
//int main()
//{
//	int a[] = { 1,7,9,11,13,15,17,19 };
//	int b[] = { 2,4,6,8,10 };
//	int c[13];
//	int n1 = sizeof(a) / sizeof(a[0]);
//	int n2 = sizeof(b) / sizeof(b[0]);
//	merge(a, b, c, n1, n2);
//	for (int i = 0; i < n1 + n2; i++)
//	{
//		printf("%d", c[i]);
//	}
//	printf("\n");
//	return 0;
//}
#include<stdio.h>

void merge(int* a, int* b, int* c, int n1, int n2) {
    int i = 0, j = 0, k = 0;

    // 合并两个数组到c数组
    while (i < n1 && j < n2) {
        if (a[i] < b[j]) {
            c[k++] = a[i++];
        }
        else {
            c[k++] = b[j++];
        }
    }

    // 复制剩余元素（如果有的话）
    while (i < n1) {
        c[k++] = a[i++];
    }
    while (j < n2) {
        c[k++] = b[j++];
    }
}

int main() {
    int a[] = { 1, 7, 9, 11, 13, 15, 17, 19 };
    int b[] = { 2, 4, 6, 8, 10 };
    int c[13];
    int n1 = sizeof(a) / sizeof(a[0]);
    int n2 = sizeof(b) / sizeof(b[0]);

    // 调用合并函数
    merge(a, b, c, n1, n2);

    // 打印合并后的数组，元素间加空格
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");

    return 0;
}
//#include<iostream>
//
//using namespace std;
//int main() {
//
//	/*cout << "Hello C++" << endl;*/
//	int a = 10;
//	cout << "a=" << a << endl;
//	system("pause");
//
//	return 0;
//}
//变量
//#include<iostream>
//using namespace std;
//#define Day 7//宏常量
//int main() {
//
//	cout << "一周有" << Day  <<"天" << endl;
//	const int num = 365;//修饰变量
//	/*int num = 100;*/
//	cout << "一年有" << num << "天" << endl;
//
//	return 0;
//}
//整形
//#include <iostream>
//using namespace std;
//int main() {
//	//短整形（-32768~~32767）
//	short num1 = 32768;//超出存储空间从最后一位开始
//	cout << "num1=" << num1 << endl;
//	//整形
//	int num2 = 32768;
//	cout << "num2=" << num2 << endl;
//	//长整型
//	long num3 = 666666;
//	//长长整形
//	long long num4 = 9999999;
//	
//	cout << "num3=" << num3 << endl;
//	cout << "num4=" << num4 << endl;
//	return 0;
//}
//sizeof求出数据类型占用内存空间大小
//#include <iostream>
//using namespace std;
//int main() {
//	//short(2)  int(4)  long(4)   long long(8)
//	short num1 = 10;
//	cout << "short占用内存空间大小为：" << sizeof(short) << endl;
//	cout << "short占用内存空间大小为：" << sizeof(num1) << endl;
//	int num2 = 10;
//	cout << "int占用内存空间大小为：" << sizeof(num2) << endl;
//	system("pause");// 暂停程序，等待用户按键
//	return 0;
//}
#include <iostream>
using namespace std;
int main() {
	float num1 = 3.1415926f;//默认情况保留6位有效数字
	double num2 = 3.1415926;
	cout << num1 << endl;
	cout << num2 << endl;
	//数据类型占用内存空间大小
	cout << "float占用内存空间大小为：" << sizeof(float) << endl;//4
	cout << "double占用内存空间大小为：" << sizeof(double) << endl;//8
	//科学计数法
	float f1 = 3e2f;//3*10^2
	cout << "f1=" << f1 << endl;
	double d1 = 3e-2;//3*0.1^2
	cout << "d1=" << d1 << endl;
	return 0;
}
//#include <iostream>
//using namespace std;
//int main() {
//	//字符型变量用于显示单个字符
//	char num1= 'a';
//	char num2 = 'A';
//	cout << num1 << endl;
//	cout << "num1=" << sizeof(num1) << endl;//占用1个字节；
//	cout << (int)num1 << endl;//97
//	cout << (int)num2 << endl;//65
//	system("pause");
//	return 0;
//}
//转义字符
//#include <iostream>
//using namespace std;
//int main() {
//	
//	cout<< "aa\thello" << endl;//8字符
//	cout<< "aaaaa\thello" << endl;
//	cout<< "aaaaaaaaa\thello" << endl;
//	/*cout << "aaaaaaaaa\thello"
//
//		"aaaaaaaaa" 占 9 个字符。
//
//		制表符会填充 7 个空格（总长度到 16，因为 9 超过了第一个制表位 8），使 hello 从第 16 列开始。
//
//		输出：aaaaaaaaa.......hello*/
//	cout << "hello\nC++" << endl;//\n换行
//	
//	return 0;
//}
//字符串型
//#include <iostream>
//#include <string>
//using namespace std;
//int main() {
//	//法1  C风格字符串
//	char str1[] = "hello world";
//	cout << str1 << endl;
//	//法2
//	string str = "hello world";
//	cout << str << endl;
//	//注意：C++风格字符串，需要加入头文件==#include\<string>==
//	return 0;
//}
//2.7 布尔类型 bool
//
//** 作用： * *布尔数据类型代表真或假的值
//
//bool类型只有两个值：
//
//* true  -- - 真（本质是1）
//* false -- - 假（本质是0）
//
//* *bool类型占 == 1个字节 == 大小 * *
//#include <iostream>
//using namespace std;
//int main() {
//	bool sum = true;
//	cout << sum << endl;//1
//	sum = false;
//	cout << sum << endl;//0
//	cout << "sum=" << sizeof(sum) << endl;//1
//	return 0;
//}
//2.8 数据的输入
//
//* *作用：用于从键盘获取数据 * *
//
//**关键字： * *cin
//
//* *语法： * *`cin >> 变量 `
//
//示例：
//#include <iostream>
//using namespace std;
//int main() {
//	//整型输入
//	int a = 0;
//	cout << "请输入整数变量：" << endl;
//	cin >> a;
//	cout << "输出：" << a << endl;
//
//	//浮点型输入
//	double d = 0;
//	cout << "请输入浮点型变量：" << endl;
//	cin >> d;
//	cout << d << endl;
//
//	//字符型输入
//	char ch = 0;
//	cout << "请输入字符型变量：" << endl;
//	cin >> ch;
//	cout << ch << endl;
//
//	//字符串型输入
//	string str;
//	cout << "请输入字符串型变量：" << endl;
//	cin >> str;
//	cout << str << endl;
//
//	//布尔类型输入
//	bool flag = true;
//	cout << "请输入布尔型变量：" << endl;
//	cin >> flag;
//	cout << flag << endl;
//	return 0;
//}
//#include <iostream>
//using namespace std;
//
//int main() {
//    int score;
//    cout << "请输入电影评分（1-10）：";
//    cin >> score;
//
//    switch (score) {
//    case 1:
//    case 2:
//    case 3:
//    case 4:
//    case 5:
//        cout << "烂片" << endl;
//        break;
//    case 6:
//    case 7:
//    case 8:
//    case 9:
//        cout << "正常" << endl;
//        break;
//    case 10:
//        cout << "强烈推荐" << endl;
//        break;
//    default:
//        cout << "无效的评分！请输入1-10之间的整数。" << endl;
//    }
//
//    return 0;
//}
//#include <iostream>
//using namespace std;
//int main() {
//	int num = 0;
//	cout << "你喜欢我吗";
//	cin >> num;
//	switch (num) {
//	case 1:
//		cout << "yes" << endl;
//		break;
//	case 2:
//		cout << "no" << endl;
//	}
//
//
//	return 0;
//}
#include <iostream>
using namespace std;
int main() {
	int num = 0;
	int sum = 76;
	cout << "请输入一个数字：";
	cin >> num;
	while (num!=sum) {
		if (num > sum) {
			cout << "大了" << endl;
		}
		else {
			cout << "小了" << endl;
		}
		cout << "请再输入：";
		cin >> num;
	}
	cout << "胜利！！！";
	return 0;
}
