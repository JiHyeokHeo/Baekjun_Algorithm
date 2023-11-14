#include <iostream>
#include <vector>
#include <queue>
#include <deque>
using namespace std;

const int MAXSIZE = 100001;


template<typename T>
class Queue
{
private:
    int _size;
    deque<T> _dqArr;

public:
    Queue()
        : _size(0)
        , _dqArr() // 꽉 채워지기 전이 꽉 찬걸로 간주하기 때문에 +1로 생성
    {
    };
    ~Queue() 
    {
        
    };

    void Push(const T& value)
    {
        _dqArr.push_back(value);
    }

    T Pop()
    {
        if (_dqArr.size() == 0)
            return -1;
        
        T value = _dqArr.front();
        _dqArr.pop_front();
        return value;
    }

    int Size()
    {
        return _dqArr.size();
    }

    int Empty()
    {
        if (_dqArr.size() == 0)
            return 1;
        else
            return 0;
    }

    T Front()
    {
        if (_dqArr.size() == 0)
            return -1;
        return _dqArr.front();
    }

    T Back()
    {
        if (_dqArr.size() == 0)
            return -1;
        return _dqArr.back();
    }
};

int main()
{
    int N;
    cin >> N;

    Queue<int> queueTest;

    string temp;
    
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        if (temp == "push")
        {
            int valTemp;
            cin >> valTemp;
            queueTest.Push(valTemp);
        }
        else if (temp == "front")
            cout << queueTest.Front() << '\n';
        else if (temp == "pop")
            cout << queueTest.Pop() << '\n';
        else if (temp == "empty")
            cout << queueTest.Empty() << '\n';
        else if (temp == "size")
            cout << queueTest.Size() << '\n';
        else if (temp == "back")
            cout << queueTest.Back() << '\n';
    }
    
    return 0;
}