#include "ConnectEvent.h"

ConnectEvent::ConnectEvent()
{
    cout << "ConnectEvent" << endl;
    setTestList();//생성자에서 호출해서 객체가 만들어 지자마자 데이터를 vector에 담는다.
}

ConnectEvent::~ConnectEvent()
{
}

void ConnectEvent::setWindow(QQuickWindow* Window)
{
    mMainView = Window;//connection을 해주기 위해 윈도우를 등록
}

void ConnectEvent::setTestList()
{
    TestStruct testStruct;
    for(int i = 0; i < 10; i++){
        testStruct.title = "JungWoo" + QString::number(i);//int형 변수를 QString 형으로 형변환
        testStruct.ButtonText = "Button" + QString::number(i);
        testStruct.Infomation = "Infomation" + QString::number(i);
        mTestList.push_back(testStruct);
    }

}

int ConnectEvent::getListSize()//리스트의 크기를 가져오기 위함 함수
{
    return mTestList.size();
}

QString ConnectEvent::getListTitle(int index)//리스트 인덱스의 제목을 가져오기 위한 함수
{
    return mTestList.at(index).title;
}

QString ConnectEvent::getListButtonText(int index)//리스트 인덱스의 버튼 텍스트를 가져오기 위한 함수
{
    return mTestList.at(index).ButtonText;
}

QString ConnectEvent::getListInfomation(int index)//리스트 인덱스의 내부 정보를 가져오기 위한 함수
{
    return mTestList.at(index).Infomation;
}

void ConnectEvent::deleteListItem(int index)//c++ 리스트의 데이터를 삭제
{
    int count = 0;
    std::cout << "deleteListItem index:" << index << std::endl;
    std::cout << "deleteListItem ListInfomation:" << getListInfomation(index).toStdString() << std::endl;
    for(std::vector<TestStruct>::iterator it = mTestList.begin(); it != mTestList.end(); it++){
        if(count == index){
            it = mTestList.erase(it);
            break;
        }else{
            count++;
        }
    }
}
