#include <stdio.h>//预处理指令，符号，标识符，注释
#define Definition 1//宏定义
/**
 * @author Ltabsyy
 * 多行块注释内带@的单词
 */
struct Class//struct关键字，类
{
	int Variable;//类型关键字，变量
}GlobalVariable;//全局变量
					    //空白(格)字符
int main()//函数
{
	int LocalVariable[2] = {01, 0x1};//局部变量，整数，八进制整数，十六进制数
	float Float = 1.0;//浮点数
	char Character = '1';//字符
	char* String = "1\n";//字符串，转义序列

	GlobalVariable.Variable -= (&GlobalVariable)->Variable;//. ->符号
    LocalVariable[0] = Float;
    LocalVariable[1] = Character;
    String[0] = Character;
    if(LocalVariable[0] && LocalVariable[1] || String[0])
        printf("%s", String);//&& || , ;符号
	{{{{}}}}//3412级括号
	{{{{{{}}}}}}//345612级括号
	return 0;//非struct非类型关键字
}//2级括号
\
//非法字符，下划线为警告，将注释移入同一行后下划线为错误
