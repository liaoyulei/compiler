index3.l	词法分析源程序
index3.y	语法分析&语义分析源程序
lex.yy.c	flex index3.l生成
index3.tab.c	bison -d index3.y生成
index3.tab.h	bison -d index3.y生成，在lex.yy.c中引用
index3.h	定义指令常量，指令数组等，在index3.tab.h、interpret.c中引用
interpret.c	处理pcode代码
compiler.exe	编译链接上述.c .h文件得到的可执行文件