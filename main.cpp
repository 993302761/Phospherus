#include <iostream>
#include "Message.pb.h"

using namespace std;

#include "R_Tree.h"


class Account;

int main() {
    R_Tree *s=newTree();
    update_data(s);

    showAll(s);
    printf("\n");

    DataList *dataList=newDataList();
    Data *d=newData(39.144121,117.20529, 0);
    geoRadius(dataList,s,d->x,d->y,1000);
    show(dataList);

    RTree::Replay replay;
    dataList=dataList->next;
    for (int i = 0; i<10 ; ++i) {
        if (dataList== nullptr){
            break;
        }
        replay.add_data(dataList->data->data);
        dataList=dataList->next;
    }

    string serializeToStr;
    replay.SerializeToString(&serializeToStr);
    cout <<"序列化后的字节："<< serializeToStr << endl;


    _free(s);

}
