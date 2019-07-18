//
// Created by Administrator on 2019/7/15 0015.
//  链表定义
#ifndef UNTITLED_LINK_STRUCT_H
#define UNTITLED_LINK_STRUCT_H

// 链表数据域的类型
typedef struct{
    int data;
}NodeData;

// 单链表的结构定义
typedef struct Node{
    struct Node *next;
    NodeData data;
}Node;
// 定义一个单链表
typedef struct Node *SingleList;
#endif //UNTITLED_LINK_STRUCT_H
