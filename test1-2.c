#include<stdio.h>
#include<stdlib.h>

//readline函数返回一个指向char类型的指针
//功能读取一行输入数据
char * readline()
{
	//malloc返回一个指针，指向分配的STEP长度的未初始化的存储空间
	size_t STEP=10;
	//首先申请十个字节的空间
	char * str=( char * ) malloc( STEP ), * temp = str;
	int ch;
	int len = STEP;
	//如果申请失败
	if(str == NULL)
	{
		return NULL;
	}
	//读取字符，如果未遇见换行符，说明读取的字符均在一行
	while( ( ch = getchar() ) != EOF && ch != '\n')
	{
		//如果已经读取了十个字节,则再申请空间
		if(--len == 0)
		{
			len = STEP;
			//realloc申请空间，并将原来的内容拷贝到新的内存空间（如果是新的内存块）
			char * lineNew = realloc ( temp , STEP *= 2);
			//如果申请失败，temp原来指向的地址的字节还在，并未回收	
			if( lineNew == NULL )
			{
				//释放temp
				free( temp );
				return NULL;
			}
			//如果申请成功
			str = lineNew + ( str -temp);
			temp = lineNew;
		}

		*str++ = ch;
	}
	*str = '\0';
	return temp;
}
int main( void )
{
	char *input;
	int line=0;
	while( (input = readline()) != NULL )
	{
		line++ ;
		printf("%d:%s\n",line,input);
	}
	return EXIT_SUCCESS;
}
