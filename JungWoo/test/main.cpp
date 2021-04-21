#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stdlib.h>
#include <sstream>
#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <functional>

#include "PhoneBook.h"
#include "Person.h"
#include "Student.h"
#include "Salaryman.h"

using namespace std;

//int main(int argc, char *argv[])
//{
//    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

//    QGuiApplication app(argc, argv);

//    QQmlApplicationEngine engine;
//    const QUrl url(QStringLiteral("qrc:/main.qml"));
//    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
//                     &app, [url](QObject *obj, const QUrl &objUrl) {
//        if (!obj && url == objUrl)
//            QCoreApplication::exit(-1);
//    }, Qt::QueuedConnection);
//    engine.load(url);

//    if(engine.rootObjects().isEmpty()) {
//        return -1;
//    }
//}

//int main() {
//    int n, dp[1001];
//    cin >> n;
//    dp[1] = 1;
//    dp[2] = 2;

//    for (int i = 3; i <= n; i++) {
//        dp[i] = (dp[i - 1] + dp[i - 2]) % 10007;
//    }

//    cout << dp[n] << '\n';
//    return 0;
//}

//int min(int a, int b) {
//    return a > b ? b : a;
//}

//int main()
//{
//    int arr[10001] = {0, };
//    int i, N;

//    cin >> N;

//    arr[1] = 0;
//    for(i = 2; i <= N; i++)
//    {
//        arr[i] = arr[i-1] + 1;
//        if(i % 2 == 0)
//        {
//            arr[i] = min(arr[i], arr[i / 2] + 1);
//        }
//        if(i % 3 == 0)
//        {
//            arr[i] = min(arr[i], arr[i / 3] + 1);
//        }
//    }

//    cout << arr[N] << endl;
//    return 0;
//}

//int main(void)
//{
//    int a, b, c, d, result, sum = 0;
//    int dp[1000] = {0, };

//    for(int i = 1; i < 1000; i++)
//    {
//        a = i / 1000;
//        b = (i / 100) % 10;
//        c = (i / 10) % 10;
//        d = i % 10;
//        result = a + b + c + d + i;

//        if(result < 1000)
//        {
//            dp[result] = 1;
//        }

//        if(dp[i] == 0)
//        {
////            cout << i << endl;
//            sum += i;
//        }
//    }
//    cout << "Real" << sum << endl;
//}


//int d[10001];

//int dn(int i) {
//    int res = i;
//    if (i >= 10000) { res += i / 10000; i %= 10000; }
//    if (i >= 1000) { res += i / 1000; i %= 1000; }
//    if (i >= 100) { res += i / 100; i %= 100; }
//    if (i >= 10) { res += i / 10; i %= 10; }
//    return res += i;
//}

//int main() {
//    for (int i = 1; i <= 10000; i++) {

//        d[dn(i)] = 1;

//        if (!d[i])
//        {
//            cout << i << endl;
//        }
//    }
//}

//int main(void)
//{
////    vector<int> arr = {15, 143, 167};

////    cout <<
//    char buf[256] = "";
//    int len = sprintf(buf, "Hello,\n");;


//    for (int i=0; i<5; i++)
//        len += sprintf(buf + len, "%d ",i);

//    puts(buf);
//}

//int solution(int n)
//{
//    int sum = n;    // 자기 자신 더하기

//    while (1) {
//        if(n == 0)
//            break;
//        sum += n % 10;  // 1
//        n = n / 10;     // 1
//    }
//    return sum;
//}

//int checkNumber(int number)        // number = 101
//{
//    int sum = number;               // sum 101
//    int mod = 0;
//    while (number != 0) {
//        mod = number % 10;      // mod = 1         , mod = 0       , mod = 1
//        number /= 10;               // 101 /= 10 = 10  , number = 1    , number = 0
//                        // 101 + 1         , 101 + 0       , 101 + 1        , 생성자 다음 수열 요소
//    }
//    return mod;
//}

//int main(void)
//{
//    int count = 0;
//    int tempCheck = 0;
//    int num = 141;

//    for(int i = 1; i < 1001; i++)
//    {
//        tempCheck = checkNumber(i); // i는 생성자   count 12
////        cout << tempCheck << endl;
//        if(tempCheck == num)
//        {
//            count++;
//        }
//    }
//    num /= 10;
//    cout << 141 % 10 << endl;           // 1
//    cout << num << endl;                // 14


//    return 0;
//}


//int main(void)
//{
//    vector<int> arr {168, 411, 543, 396, 973};
//    vector<int> ttemp;
//    int temparr[5] = {0, };
//    char buff[256];
//    char s;

//    sort(arr.begin(), arr.end());

//    for(int i = 0; i < arr.size(); i++)
//    {
//        cout << arr[i] << endl;
//    }

//    cout << "----------" << endl;

//    for(int i = 0; i < arr.size(); i++)
//    {
//        sprintf(buff, "%d", arr.at(i));
//        cout << buff[0] << ", " << buff[1] << ", " << buff[2] << endl;

//        s = buff[1];
//        temparr[i] = s - '0';
//        ttemp.push_back(temparr[i]);
//    }

//    cout << "----------" << endl;

//    sort(ttemp.begin(), ttemp.end());

//    for(int i = 0; i < arr.size(); i++)
//    {
//        cout << "------------------------------------------->" << ttemp[i] << endl;
//    }

//    cout << "----------" << endl;
//    ttemp.clear();

//    for(int i = 0; i < arr.size(); i++)
//    {
//        sprintf(buff, "%d", arr.at(i));
//        cout << buff[0] << ", " << buff[1] << ", " << buff[2] << endl;

//        s = buff[2];
//        temparr[i] = s - '0';
//        ttemp.push_back(temparr[i]);
//    }

//    cout << "----------" << endl;

//    sort(ttemp.begin(), ttemp.end());

//    for(int i = 0; i < arr.size(); i++)
//    {
//        cout << "------------------------------------------->" << ttemp[i] << endl;
//    }
//}


//int main(void)
//{
//    vector<int> arr {15, 143, 167};
//    vector<string> str(arr.size(), "");

//    for(int i = 0; i < arr.size(); i++)
//    {
//        str.at(i) = to_string(arr.at(i));           // string에 int 값들 넣고,
//    }
//    sort(str.begin(), str.end());               // string으로 정렬 후


//    for(int i = 0; i < arr.size(); i++)
//    {
//        arr.at(i) = atoi(str.at(i).c_str());        // int에 string의 값을 넣는다.
//        cout << arr.at(i) << endl;
//    }
//    return 0;
//}


//int main(void)
//{
//    vector <string> cmds { "PUSH 1", "PUSH 2", "PUSH 3", "POP", "POP", "PUSH 4", "POP", "PUSH 5"};
//    vector <int> ret;
//    string strTemp;

//    for(int i = 0; i < cmds.size(); i++)
//    {
//        if(cmds[i] == "POP")
//        {
//            if(!ret.empty())
//            {
//                ret.pop_back();
//            }
//        }

//        else
//        {
//            strTemp = cmds.at(i);
//            strTemp = strTemp.substr(5, strTemp.size());
//            ret.push_back(stoi(strTemp));
//        }
//    }
//    for(int i = 0; i < ret.size(); i++)
//    {
//        cout << ret[i] << endl;
//    }
//    return 0;
//}


//int main(void)
//{
//    string str = "OnCoder";
//    int l, count = 0;

//    //    l = str.size() / 3;     // 12

//    for(int i = 0; i < str.size(); i++)
//    {
//        count++;
//        if(count > 3)
//        {
//            count = 0;
//            i--;
//        }
//        else if (count == 3)
//        {
//            if(str[i] >= 'a' && str[i] <= 'z')
//            {
//                str[i] = str[i] - 32;
//            }
//            else
//            {
//                str[i] = '!';
//            }
//        }
//    }

//    for(int i = 0; i < str.size(); i++)
//    {
//        cout << str[i];
//    }
//    cout << endl;
//}


//int main(void)
//{
//    int a = 23659, b = 24065;
//    int result = 0;

//    for(int i = a; i <= b; i++)
//    {
//        bool realNumber = true;

//        for(int j = i - 10; j <= i + 10; j++)
//        {
//            bool Unique = true;
//            for(int k = 2; k < j; k++)
//            {
//                if(j % k == 0)
//                {
//                    Unique = false;
//                    break;
//                }
//            }

//            if(Unique)
//            {
//                realNumber = false;
//                break;
//            }
//        }
//        if(realNumber)
//        {
//            result++;
//        }
//    }
//    cout << result << endl;


//    return 0;
//}


//int main(void)
//{
//    string k = "thinkspace", w = "ckep";

//    for(int i = 0; i < k.size(); i++)
//    {

//    }
//}

//int main(void)
//{
//    int balance = 53874;
//    vector <string> transactions { "D 1234","C 987","D 2345","C 654","D 6789","D 34567" };
//    string strTempC, strTempD;

//    for(int i = 0; i < transactions.size(); i++)
//    {
//        if(transactions[i].substr(0, 1) == "C")     // 입금
//        {
//            strTempC = transactions[i].substr(2);
//            balance += atoi(strTempC.c_str());
//        }
//        else {      // 출금
//            strTempD = transactions[i].substr(2);
//            balance -= atoi(strTempD.c_str());
//        }
//    }

//    cout << balance << endl;

//    return 0;
//}

//int serach(char *c, char x)
//{
//    int count = 0;
//    for(int i = 0; c[i] != NULL; i++)
//    {
//        if(c[i] == x)
//            count++;
//        else
//            continue;
//    }
//    return count;
//}

//int main(void)
//{
//    vector <string> stats = {"1122","1221","1212","2112","2121","2211"};
//    int j = 0, count = 0;
//    char cstr[50];
////    double *w = new double[stats.size()];
//    double w[stats.size()];
//    double min;

//    for(int i = 0; i < stats.size(); i++)
//    {
//        strcpy(cstr, stats[i].c_str());
//        j = serach(cstr, '1');
//        w[i] = (j * 100.0) / strlen(cstr);
//        min = w[0];
//        cout << j << ", " << i << " size : " << strlen(cstr) << ":::::" << w[i] << endl;
//    }

//    for(int k = 0; k < _msize(w) / sizeof(*w); k++)
//    {
//        if(min > w[k])
//        {
//            min = w[k];
//            count = k;
//        }
//    }

//    cout << "count : " << count << endl;
//}

//int main(void)
//{
//    vector <int> sequence = {100,100,100,99,99,99,100,100,100};
//    vector <int> result;

//    for(int i = 0; i < sequence.size(); i++)
//    {
//        for(int j = i + 1; j < sequence.size(); j++)
//        {
//            if(sequence[i] == sequence[j])
//            {
//                sequence[i] = 0;
//            }
//        }

//        if(sequence[i] != 0)
//        {
//            result.push_back(sequence[i]);
//        }
//    }

//    for(int k = 0; k < result.size(); k++)
//    {
//        cout << result[k] << endl;
//    }
//}


//int main(void)
//{
//    vector <int> numbers = {1, 4, 2, 5, 7};

//    if(numbers.size() % 2 == 0)
//        return -1;
//    sort(numbers.begin(), numbers.end());
//    cout << numbers[numbers.size() / 2] << endl;

//}


//int main(void)
//{
//    vector <int> hints = {9, 8, 7, 6, 5, 4, 3, 2, 1};

//    int n = hints.size();
//    int mx = 0;

//    for(int i = 0; i < n; i++)
//    {
//        for(int j = i + 1; j < n; j++)
//        {
//            if((hints[i] + hints[j]) % 2 == 0)
//            {
//                mx = max(mx, abs((hints[i] + hints[j]) * (hints[i] - hints[j]) / 4) );
//            }
//        }
//    }
//    cout << mx << endl;
//}


//int main(void)
//{
//    vector <string> swaps = { "2-3", "1-3", "2-3", "2-1", "3-1" };
//    bool ballGame[3] = {1, 0, 0};
//    int x, y = 0;

//    for(int i = 0; i < swaps.size(); i++)
//    {
//        bool temp = ballGame[swaps[i][0] - '1'];
//        ballGame[swaps[i][0]] = ballGame[swaps[i][2] - '1'];
//        ballGame[swaps[i][2] - '1'] = temp;
//    }

//    for(int i = 0; i < 3; i++)
//    {
//        if(ballGame[i])
//            return i + 1;
//    }

//}

//int main(void)
//{
//    vector <int> events = {1, 1, 1, 2, 2, 2, 3, 3, 3};
//    int count[15] = {0, };
//    int max = 0;

//    for(int i = 0; i < events.size(); i++)
//    {
//        for(int j = i + 1; j < events.size(); j++)
//        {
//            if(events[i] == events[j])
//            {
//                count[i] = events[i];
//            }
//        }
//    }

//    max = count[0];

//    for(int i = 0; i < sizeof(count) / (sizeof(int)); i++)
//    {
//        if(count[i] != 0)
//        {
//            if(count[i] < count[i + 1])
//            {
//                max = count[i + 1];
//            }
//            else if(max < count[i])
//            {
//                max = count[i];
//            }
//        }
//    }
//    if(max == 0)
//    {
//        cout << events[0] << endl;
//    }

//    cout << max << endl;
//}


//int main(void)
//{
//    vector<int> a = {5, 6, 3, 9, -1};
//    vector<int> temp = a;
//    int n = 4;

//    for(int i = 0; i < n; i++)
//    {
//        for(int j = temp.size() - 2; j >= 0; j--)
//        {
//            temp[j] = a[j + 1] - a[j];
//        }
//        temp.pop_back();
//        for(int k = 0; k < temp.size(); k++)
//        {
//            a[k] = temp[k];
//        }

//        for(int k = 0; k < temp.size(); k++)
//        {
//            cout << temp[k] << endl;
//        }
//        cout << endl;
//    }
//}


//int main(void)
//{
//    int n = 1001;
//    int temp = 0;
//    int count = 0;
//    string str1;

//    for(int i = 1; i < n; i++)
//    {
//        str1 = to_string(i);

//        if(str1.size() == 1)
//        {
//            count++;
//            continue;
//        }

//        for(int j = 0; j < str1.size(); j++)
//        {
//            for(int k = j + 1; k < str1.size(); k++)
//            {
//                if(str1[j] == str1[k])
//                {
//                    temp++;
//                }
//            }
//        }
//        if(temp > 0)
//        {
//            temp = 0;
//            continue;
//        }
//        count++;
//    }

//    cout << "count : " << count << endl;
//}


//int main(void)
//{
//    vector<int> prices = {80,90,80,90,80};

//    sort(prices.begin(), prices.end());
//    prices.erase(unique(prices.begin(), prices.end()), prices.end());

//    if(prices.size() < 3)
//    {
//        cout << "-1" << endl;
//    }

//    for(int i = 0; i < prices.size(); ++i)
//    {
//        cout << prices[i] << endl;
//    }
//}


//int main(void)
//{
//    string number = "2222";
//    vector<string> dictionary = {"ab","cd","ef","a","b","ab"};
//    string result = "";

//    vector<string>num1;
//    vector<string>num2;
//    vector<string>num3;
//    vector<string>num4;
//    vector<string>num5;
//    vector<string>num6;
//    vector<string>num7;
//    vector<string>num8;
//    vector<string>num9;

//    for(size_t i = 0; i < dictionary.size(); i++)
//    {
//        switch (dictionary.at(i).size()) {
//            case 1: num1.push_back(dictionary.at(i)); sort(num1.begin(), num1.end()); break;
//            case 2: num2.push_back(dictionary.at(i)); sort(num2.begin(), num2.end()); break;
//            case 3: num3.push_back(dictionary.at(i)); sort(num3.begin(), num3.end()); break;
//            case 4: num4.push_back(dictionary.at(i)); sort(num4.begin(), num4.end()); break;
//            case 5: num5.push_back(dictionary.at(i)); sort(num5.begin(), num5.end()); break;
//            case 6: num6.push_back(dictionary.at(i)); sort(num6.begin(), num6.end()); break;
//            case 7: num7.push_back(dictionary.at(i)); sort(num7.begin(), num7.end()); break;
//            case 8: num8.push_back(dictionary.at(i)); sort(num8.begin(), num8.end()); break;
//            case 9: num9.push_back(dictionary.at(i)); sort(num9.begin(), num9.end()); break;
//        }
//    }

//    for(size_t i = 0; i < number.size(); i++)
//    {
//        char c = number[i];
//        int temp = atoi(&c);
//        switch (temp) {
//            case 1: result += num1.front(); num1.erase(num1.begin()); break;
//            case 2: result += num2.front(); num2.erase(num2.begin()); break;
//            case 3: result += num3.front(); num3.erase(num3.begin()); break;
//            case 4: result += num4.front(); num4.erase(num4.begin()); break;
//            case 5: result += num5.front(); num5.erase(num5.begin()); break;
//            case 6: result += num6.front(); num6.erase(num6.begin()); break;
//            case 7: result += num7.front(); num7.erase(num7.begin()); break;
//            case 8: result += num8.front(); num8.erase(num8.begin()); break;
//            case 9: result += num9.front(); num9.erase(num9.begin()); break;
//        }
//        if(i < number.size() - 1)
//        {
//            result += " ";
//        }
//    }
//    cout << result << endl;
//}


//int main(void)
//{
//    vector<string> signs = {"default","70","default"};
//    int res = 0;
//    int cityCount = 0;

//    for(int i = 0; i < signs.size(); i++)
//    {

//        if(signs.at(i) == "default")
//        {
//            if(signs.at(i) != "city")
//            {
//                res = 60;
//            }
//        }

//        else if(signs.at(i) == "city")
//        {
//            cityCount++;
//            if(cityCount % 2 == 0)      // city가 짝수면 60 city가 홀수면 90
//            {
//                if(signs.back() == "default")
//                {
//                    res = 60;
//                }
//            }
//            else
//            {
//                res = 90;
//            }
//        }

//        else
//        {
//            if(signs.back() == "default") {
//                if(cityCount % 2 == 0) {
//                    res = 60;
//                }
//                else {
//                    res = 90;
//                }
//            }
//            res = atoi(signs.back().c_str());
//        }
//    }

//    cout << res << endl;
//}


//int main(void)
//{
//    vector<string> readParts = {"introduction","story","edification","introduction","story","edification"};
//    vector<string> temp;
//    int res = 0;
//    int i = 0;

//    for(int i = 0; i < readParts.size() - 2; i++)
//    {
//        temp.push_back(readParts.at(i));
//        temp.push_back(readParts.at(i + 1));
//        temp.push_back(readParts.at(i + 2));

//        if(temp.at(0) != temp.at(1) && temp.at(1) != temp.at(2) && temp.at(0) != temp.at(2))
//        {
//            res++;
//            i += 3;
//        }
//        temp.clear();
//    }

////    while (i < readParts.size() - 2) {
////        temp.push_back(readParts.at(i));
////        temp.push_back(readParts.at(i + 1));
////        temp.push_back(readParts.at(i + 2));
////        if(temp.at(0) != temp.at(1) && temp.at(1) != temp.at(2) && temp.at(0) != temp.at(2))
////        {
////            res++;
////            i += 3;
////        }
////        else
////        {
////            i++;
////        }
////        temp.clear();
////    }
//    cout << res << endl;
//}

//template <typename Iter>
//void print(Iter begin, Iter end) {
//    while (begin != end) {
//        std::cout << "[" << *begin << "] ";
//        begin++;
//    }
//    std::cout << std::endl;
//}
//int main() {
//    std::vector<int> vec;
//    vec.push_back(5);
//    vec.push_back(3);
//    vec.push_back(1);
//    vec.push_back(2);
//    vec.push_back(3);
//    vec.push_back(4);

//    std::cout << "before vec state ------" << std::endl;
//    print(vec.begin(), vec.end());

//    std::cout << "vector odd ---" << std::endl;
//    int num_erased = 0;
//    vec.erase(std::remove_if(vec.begin(), vec.end(),
//                             [&num_erased](int i)
//    {
//        if (num_erased >= 2)
//            return false;
//        else if (i % 2 == 1) {
//            num_erased++;
//            return true;
//        }
//        return false;
//    }),
//              vec.end());
//    print(vec.begin(), vec.end());
//}


//template <typename Iter>
//void print(Iter begin, Iter end)
//{
//    while (begin != end) {
//        cout << "[" << *begin << "] ";
//        begin++;
//    }
//    cout << endl;
//}

//int main(void)
//{
//    vector<int> vec;

//    vec.push_back(5);
//    vec.push_back(2);
//    vec.push_back(6);
//    vec.push_back(8);
//    vec.push_back(3);
//    vec.push_back(1);

//    vector<int> vec2(6, 0);

//    cout << "before vec, vec2 State" << endl;
//    print(vec.begin(), vec.end());
//    print(vec2.begin(), vec2.end());

//    cout << "vec + 1 -> vec2 Save" << endl;
//    transform(vec.begin(), vec.end(), vec2.begin(), [](int i) {return i + 1;});
//    print(vec.begin(), vec.end());
//    print(vec2.begin(), vec2.end());
//}

//int func(int c)
//{
//    if(c == 1)
//    {
//        throw 1;
//    } else if(c == 2)
//    {
//        throw "hi";
//    } else if(c == 3)
//    {
//        throw runtime_error("error");
//    }
//}


//int main(void)
//{
//    int c;
//    cin >> c;

//    try {
//        func(c);
//    } catch (int e) {
//        cout << "Catch int : " << e << endl;
//    } catch(...)
//    {
//        cout << "Default Catch !" << endl;
//    }
//}

// 1. 메뉴
// 2. 전화번호 추가
// 3. 전화번호 수정
// 4. 정보 삭제

//int menu()
//{
//    int choice = 0, count = 0, MAX = 0;
//    cout << "How many people would you like to enter?" << endl << ": ";
//    cin >> MAX;

//    PhoneBook mainTable;

//    while (1) {
//        cout << "-----MENU-----" << endl;
//        cout << "1. add Infomation" << endl;
//        cout << "2. ~~~~~~~" << endl;
//        cout << "3. ~~~~~~~" << endl;
//        cout << "4. show All Infomation" << endl;
//        cout << "(-1 : program EXIT !)" << endl;
//        cout << "input : "; cin >> choice;
//        if(choice == -1)
//        {
//            return 0;
//        }

//        switch (choice) {
//        case 1: {
//            //            mainTable.add(count);
//            count++;
//        }
//            break;
//        case 2:
//            break;
//        case 4: {
//            for(int i = 0; i < count; i++)
//            {
//                //                    mainTable.show(count);
//            }
//        }
//        }
//    }
//}

//char name[20];
//char number[20];

//void add()
//{
//    cout << "name : "; cin >> name;
//    cout << "number : "; cin >> number;
//}

//void show()
//{
//    cout << "-----show-----" << endl;
//    cout << name << endl;
//    cout << number << endl;
//}

//int tempMenu()
//{
//    int choice = 0;
//    while (1) {
//        cout << "-----MENU-----" << endl;
//        cout << "1. add Infomation" << endl;
//        cout << "2. ~~~~~~~" << endl;
//        cout << "3. ~~~~~~~" << endl;
//        cout << "4. show All Infomation" << endl;
//        cout << "(-1 : program EXIT !)" << endl;
//        cout << "input : "; cin >> choice;
//        if(choice == -1)
//            return 0;
//        switch (choice) {
//        case 1: add();
//            break;
//        case 4: show();
//            break;
//        }
//    }
//}
// ________________________________________________________
//int viewMenu()
//{
//    cout << "1. add" << endl;
//    cout << "2. edit" << endl;
//    cout << "3. delete" << endl;
//    cout << "4. save data view" << endl;
//    cout << "5. exit" << endl;
//    cout << "> ";

//    int n;
//    cin >> n;
//    return n;
//}

//int main(void)
//{
//    int choice = 0, count = 0, MAX = 0, editIndex = 0, deleteIndex = 0;

//    cout << "input max infomation ? : "; cin >> MAX;

//    PhoneBook *obj = new PhoneBook[MAX];

//    while (1) {
//        choice = viewMenu();
//        switch (choice) {
//        case 1: {
//            if(count == MAX)
//            {
//                cout << "out of MAX !!!" << endl;
//                return 0;
//            }
//            obj[count].addInfomation();
//            count++;
//        }
//            break;
//        case 2:
//        {
//            cout << "edit infomation index : ";
//            cin >> editIndex;
//            if(editIndex > MAX)
//            {
//                cout << "out of MAX !!!" << endl;
//                break;
//            }
//            obj[editIndex].editInfomation(obj[editIndex]);
//        }
//            break;
//        case 3:
//        {
//            cout << "delete infomation index : ";
//            cin >> deleteIndex;
//            if(deleteIndex > MAX)
//            {
//                cout << "out of MAX !!!" << endl;
//                break;
//            }
//            obj[deleteIndex].deleteInfomation(obj[deleteIndex]);
//            count--;
//        }
//            break;
//        case 4:
//        {
////            obj->showInfomation();
////            obj[1].showInfomation();
//            for(int i = 0; i < MAX; i++)
//            {
//                if(obj[i].checkInfomation())
//                {
//                    obj[i].showInfomation();
//                }
//            }
//        }
//            break;
//        case 5:
//            return 0;
//            break;
//        }
//    }
//}
// ________________________________________________________

//inline int Abs(int X)
//{
//    if(X > 0)
//        return X;
//    else
//        return -X;
//}

//int main(void)
//{
//    cout << "result : " << Abs((-4 + 2)) << endl;
//}

//class TV
//{
//private:
//    string brand, company, date;
//    int prices;
//public:
//    void powerOn();
//    void powerOff();
//    void chanelChange();
//    void volume();
//};

//int main(void)
//{
//    TV mainTV;
//}

//class SoccerTeam
//{
//    int PlayerNo[11];
//    bool bPossess;
//public:
//    int Score;

//    void KickBall()
//    {

//    }
//    void Pass()
//    {

//    }
//    void KickOff()
//    {
//        bPossess = true;
//    }
//    void Shoot()
//    {

//    }
//private:

//    char TeamName[20];

//};

//int main(void)
//{

//    SoccerTeam Red, Blue;
//    Red.Score = 0;
//    Blue.Score = 0;
//    Red.KickOff();
//    Red.Pass();
//    Red.Shoot();
//    return 0;
//}

//class Point
//{
//private:
//    int x, y;
//public:
//    void setXY(int a, int b)
//    {
//        x = a;
//        y = b;
//    }
//    void print()
//    {
//        cout << "(" << x << ", " << y << ")" << endl;
//    }
//    void move(int a, int b)
//    {
//        x += a;
//        y += b;
//    }
//};

//int main(void)
//{
//    Point a, b;

//    a.setXY(10, 5);
//    b.setXY(20, 8);

//    a.move(2, 5);
//    b.move(9, 3);

//    a.print();
//    b.print();
//}

//int main(void) {
//    vector<int> goods = { 50, 51, 49 };
//    vector<int> overItem;
//    vector<int> temp;
//    int result = 0;
//    int goodsSum = goods[0] + goods[1] + goods[2];
//    int tempcnt = 0;

//    if(goods[0] + goods[1] + goods[2] == 150) {
//                result = 120;
//                cout << result << endl;
//                return 0;
//            }

//    if (goods[0] >= 50 && goods[1] >= 50 && goods[2] >= 50) {
//        result += (goods[0] - 10);
//        result += (goods[1] - 10);
//        result += (goods[2] - 10);
//        cout << result << endl;
//        return 0;
//    }

//    if (goodsSum <= 50) {
//        cout << goodsSum << endl;
//        return 0;
//    }

//    if (goodsSum <= 100) {
//        cout << goodsSum - 10 << endl;
//    }

//    for (int i = 0; i < goods.size(); i++) {
//        if (goods[i] >= 50) {
//            overItem.push_back(goods[i]);
//        }
//    }

//    for (int i = 0; i < overItem.size(); i++) {
//        result += (overItem[i] - 10);
//    }

//    for (int i = 0; i < goods.size(); i++) {
//        if (goods[i] <= 50) {
//            temp.push_back(goods[i]);
//        }
//    }

//    if(temp.size() >= 1) {
//        if(temp.size() == 3) {
//            if(temp[0] + temp[1] >= 50) {
//                result += (temp[0] + temp[1] - 10);
//                result += temp[2];
//            }
//            else if(temp[0] + temp[2] >= 50) {
//                result += (temp[0] + temp[2] - 10);
//                result += temp[1];
//            }
//            else if(temp[1] + temp[2] >= 50) {
//                result += (temp[1] + temp[2] - 10);
//                result += temp[0];
//            }
//        }
//        else if(temp.size() == 2) {
//            if (temp[0] + temp[1] >= 50) {
//                result += (temp[0] + temp[1] - 10);
//            }
//        }
//        else {
//            result += temp[0];
//        }
//    }

//    cout << result << endl;
//}


//#include <string>
//#include <vector>
//using namespace std;

////핵심 소스코드의 설명을 주석으로 작성하면 평가에 큰 도움이 됩니다.
//class Solution{
//public:
//    int solution(vector<string> signs){
//        int res = 0;
//        int cityCount = 0;

//        for(int i = 0; i < signs.size(); i++) {
//            if(signs[i] == "city") {
//                cityCount++;
//                if(cityCount % 2 == 0) {
//                    res = 60;
//                } else {
//                    res = 90;
//                }
//            }
//            else if(signs[i] == "default") {
//                if(cityCount % 2 == 0) {
//                    res = 60;
//                } else {
//                    res = 90;
//                }
//            }
//            else {
//                res = atoi(signs.back().c_str());
//            }
//        }
//        return res;
//    }
//};


//int main(void) {
//    vector<int> tables = {4};     // 테이블 수
//    vector<int> groupSizes = {4, 8, 4, 2, 2, 4}; // 손님 수
//    vector<int> arrivals = {0, 10, 12, 16, 18, 26};   // 입장 시간
//    vector<int> departures = {10, 20, 18, 26, 36, 28}; // 퇴장 시간
//    // 테이블에 자리가 없어서 떠난 손님들의 수를 구하라.

//    int exitCustomer = 0;
//    int exitIndex = 0;
//    vector<int> tempGroupSizes;
//    vector<int> tempArrivals;
//    vector<int> tempDepartures;

//    for(size_t i = 0; i < groupSizes.size(); i++) {
//        for(size_t j = 0; j < tables.size(); j++) {
//            if(groupSizes[i] > tables[j]) {     // 테이블 정원보다 손님이 더 왔을 경우에
//                exitCustomer += groupSizes[i];  // exitCustomer에 groupSizes[i]를 더함.

//                // 다른 vector로 옮기고 원래의 각 vector 삭제
//                tempGroupSizes.push_back(groupSizes[i]);
//                tempArrivals.push_back(arrivals[i]);
//                tempDepartures.push_back(departures[i]);

//                groupSizes.erase(groupSizes.begin() + i);
//                arrivals.erase(arrivals.begin() + i);
//                departures.erase(departures.begin() + i);
//            }
//        }

//        cout << "asd : " << arrivals.size() << endl;
//        for(size_t k = 0; k < arrivals.size(); k++) {
//            if(arrivals[i] > arrivals[k]) {     // 0번째랑 0, 1, 2, 3, 4, 5번째 비교
//                cout << "qwe : " << i << endl;
//                tempGroupSizes.push_back(groupSizes[i]);
//                tempArrivals.push_back(arrivals[i]);
//                tempDepartures.push_back(departures[i]);

//                groupSizes.erase(groupSizes.begin() + i);
//                arrivals.erase(arrivals.begin() + i);
//                departures.erase(departures.begin() + i);
//            }
//        }
//    }

//    for(size_t i = 0; i < tempGroupSizes.size(); i++) {
//        cout << i << ". " << tempGroupSizes[i] << ", " << tempArrivals[i] << ", " << tempDepartures[i] << endl;
//    }

//    //    for(int i = 0; i < groupSizes.size(); i++) {
//    //        for(int j = 0; j < tables.size(); j++) {// 테이블 갯수 만큼
//    //            if(groupSizes[i] > tables[j]) {     // 가게의 테이블에 앉을수 있는 수보다 손님이 많이 왔을 경우
//    //                exitCustomer += groupSizes[i];  // 자리가 없어 떠난 손님의 수에 추가
//    //            }
//    //        }
//    //    }

//    //    for(int i = 0; i < groupSizes.size(); i++) {
//    //        if(departures[i] < arrivals[i + 1]) {   // 입장이 불가능 할때
//    //            exitCustomer += groupSizes[i + 1];
//    //        }
//    //        else {
//    //            for(int k = 0; k < tables.size(); k++) {
//    //                if(groupSizes[i] > tables[k])   // 손님이 테이블 정원을 초과할때
//    //                {
//    //                    exitCustomer += groupSizes[i];
//    //                }
//    //            }
//    //        }
//    //    }
////    if(groupSizes[0] > tables[0]) {
////        exitCustomer += groupSizes[0];
////        exitIndex = 0;
////    }
////    if(departures[0] < arrivals[1]) {   // 입장이 불가능 할때
////        exitCustomer += groupSizes[1];
////        exitIndex = 1;
////    } else

//        cout << exitCustomer << endl;
//}


//int main(void) {
//    vector<string> words = {"aaa", "aab", "aac"};
//    vector<string> tempVector = words;
//    vector<string> result;

//    int cnt = 0;

//    for(int i = 0; i < words.size(); i++) {
//        for(int j = 0; j < words.size(); j++) {
//            char temp = words[i].at(j);
//            cnt++;
//            if(cnt == 1) {
//                tempVector[i] = temp;
//            }
//        }
//        cnt = 0;
//    }

//    for(int i = 0; i < tempVector.size(); i++) {
//        for(int j = i + 1; j < tempVector.size(); j++) {
//            if(tempVector[i] == tempVector[j]) {
//                tempVector[i]
//            }
//        }

//        cout << tempVector[i] << endl;
//    }
//}


//int main(void) {
//    int iBefore = 0;
//        int iAfter = 0;
//        int iCheck = 0;
//        int apparentGain = 2984;

//        vector<int> result;

//        for(int i = 1; i < apparentGain; i++)
//        {
//            iBefore = i*i;
//            for(int j = 1; j < apparentGain; j++)
//            {
//                iAfter = j * j;
//                iCheck = iAfter - iBefore;
//                if(iCheck == apparentGain)
//                {
//                    result.push_back(j);
//                }

//            }
//            if(i>10000)
//            {
//            }
//        }
//        for(int j = 0; j < result.size(); j++) {
//            cout << result[j] << endl;
//        }
//}

class Child{
private:
    typedef std::function<void()> func1; //인수가 없는것
    typedef std::function<void(int, int)> func2; //인수가 있는것

    func1 onHandler1;
    func2 onHandler2;
public:

    void setHandler1(func1 f){
        onHandler1 = std::move(f);
        onHandler1();
    }

    void setHandler2(func2 f){
        onHandler2 = std::move(f);
        onHandler2(30, 20);
    }

    void test(){
    }
};

class Test{
public:
    void exec(){
        Child child;
        child.setHandler1(std::bind(&Test::callfunc1, this));
        child.setHandler2(std::bind(&Test::callfunc2, this, std::placeholders::_1, std::placeholders::_2)); //_1, _2는 인수
        child.test();
    }

    void callfunc1(){
        cout << "callfunc1" << endl;
    }

    void callfunc2(int n1, int n2){
        cout << "callfunc2: " << n1 << ", " << n2 << endl;
    }
};

class ABC {
    std::string m_name;
    std::shared_ptr<ABC> m_partner; // initially created empty

public:

    ABC(const std::string& name) : m_name(name)
    {
        std::cout << m_name << " created\n";
    }
    ~ABC()
    {
        std::cout << m_name << " destroyed\n";
    }

    bool SetParter(std::shared_ptr<ABC>& p)
    {
        if (!p)
            return false;

        this->m_partner = p;

        std::cout << m_name << " is now partnered with " << p->m_name << "\n";

        return true;
    }

};


int main(){

      auto pJungWoo = std::make_shared<ABC>("JungWoo");
      auto pSoo = std::make_shared<ABC>("soo");

      pJungWoo->SetParter(pSoo);
      pSoo->SetParter(pJungWoo);

    return 0;

}
