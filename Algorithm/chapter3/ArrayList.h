#ifndef __ARRAY_LIST_H__
#define __ARRAY_LIST_H__

#define True 1
#define False 0

#define LIST_LEN 100
typedef int LData;

typedef struct __ARRAY_LIST
{
    LData arr[LIST_LEN];
    int numOfData;
    int curPosition;
} ArrayList;

typedef ArrayList List;

void ListInit(List * plist);
void LInsert(List * plist, LData data);

int LFirst(List * plist, LData pdata);
int LNext(List * plist, LData pdata);

LData LRemove(List * plist);
int LCount(List * plist);

#endif
