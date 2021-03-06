/**************************************
*文件说明:面试题05:从尾到头打印链表
*作者:高小调
*创建时间:Sat 22 Apr 2017 03:48:19 PM CST
*开发环境:Kali Linux/g++ v6.3.0
****************************************/
#include<cassert>
//链表节点定义
typedef struct LinkNode{
	int _value;
	LinkNode *_next;

	LinkNode(const int value)
		:_value(value)
		,_next(NULL){}
}Node;

//将链表逆序
void PrintR(Node *head){
	if(head==NULL){
		//当前节点为空,直接返回
		return ;
	}
	//继续向后走
	PrintR(head->_next);
	std::cout<<head->_value<<" ";
}
