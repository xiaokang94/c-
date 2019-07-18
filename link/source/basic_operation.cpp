//
// Created by Administrator on 2019/7/15 0015.
// 链表的基本操作  初始化操作  插入节点， 删除节点  构造一个空的链表 获取链表的长度
#include "./../include/basic_operation.h"
// 创建一个空的链表
SingleList createList(){
   //  计算结构体的大小
   SingleList list;
   Node *node;
   //  声明一个节点指针
   int size = sizeof(Node);
   // 节点的数据域
   NodeData dataArea;
   dataArea.data = 0;
   list = (SingleList )malloc(size);
   node = (Node *)malloc(size);
   node->data = dataArea;
   node->next = NULL;
   // 节点的指针域
    list = node;
   return list;
}

// 插入一个节点
int insertNode(SingleList *list,Node *node){
    (*list)->next = node;
    return 0;
}
 // 发现一个节点
int findNode(SingleList &list ,int pos){
   return 0;
}

