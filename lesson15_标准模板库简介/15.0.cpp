//
// Created by biezhihua on 2018/11/8.
//
#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <list>
#include <forward_list>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <stack>
#include <queue>

using namespace std;

int main() {

    // 顺序容器

    // 与动态数组一样，在最后插入数据，允许随机存储
    vector<int> vector;

    // 允许在开头插入和删除数据
    deque<int> deque1;

    // 双向链表
    list<int> list;

    // 单向链表
    forward_list<int> forward_list;

    // 关联容器


    // 存储各不相同的值， 插入时进行排序；
    set<int, int> set;

    // 存储各不相同的值，在插入时进行排序。
    unordered_set<int, int> unordered_set1;

    // 键值对存储，并根据唯一的键排序
    map<int, int> map;

    // 存储键值对，并根据唯一的键排序
    unordered_map<int, int> unordered_map1;

    // 与set类似，单允许存储多个相同的项，项不是唯一的
    multiset<int, int> multiset1;

    unordered_multiset<int, int> unordered_multiset1;

    multimap<int, int> multimap1;

    unordered_multimap<int, int> unordered_multimap1;

    stack<int> stack1;

    queue<int> queue1;

    priority_queue<int> queue2;

    return 0;
}