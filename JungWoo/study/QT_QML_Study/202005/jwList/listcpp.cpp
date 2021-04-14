#include "listcpp.h"

listCpp::listCpp()
{
    cout << "listCpp" << endl;
    setList();
}

listCpp::~listCpp()
{

}

void listCpp::setWindow(QQuickWindow *Window)
{
    mMainView = Window;
}

void listCpp::setList()
{
    tempStructList tempStruct;
    for(int i = 0; i < 10; i++)
    {
        tempStruct.title = "JungWoo " + QString::number(i);
        tempStruct.infomation = QString::number(i) + " Model";
        mList.push_back(tempStruct);
    }
}

int listCpp::getListSize()
{
    return mList.size();
}

QString listCpp::getListTitle(int index)
{
    return mList[index].title;
}

QString listCpp::getListInfomation(int index)
{
    return mList[index].infomation;
}

void listCpp::deleteListModel(int index)
{
    int count = 0;
    for(vector<tempStructList>::iterator iter = mList.begin();
        iter != mList.end(); iter++)
    {
        if(count == index)
        {
            mList.erase(iter);
            break;
        }
        else {
            count++;
        }
    }
}

void listCpp::swapModel(int n1, int n2)
{
    tempStructList ttemp;
    ttemp = mList[n1];
    mList[n1] = mList[n2];
    mList[n2] = ttemp;
}

void listCpp::checkState(int index, bool checked)
{

}

