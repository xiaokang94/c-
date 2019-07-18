//  链表的基本操作
// Created by Administrator on 2019/7/15 0015.
//


#ifndef UNTITLED_BASIC_OPERATION_H

#define UNTITLED_BASIC_OPERATION_H
#include "link_struct.h"
#include <stdlib.h>
// 创建一个空的链表
SingleList createList();
// 根据第几个位置找到该位置上的节点
int findNode( SingleList  *list,int pos);
// 插入一个节点
int insert(SingleList *list);
// 删除一个节点
int deleteNode(SingleList *list);
// 根据位置删除一个节点
int deleteNodeByLocation(int pos);
// 清空单链表
int emptySingleList();
// 销毁单链表
int destroy();
#endif //UNTITLED_BASIC_OPERATION_H
