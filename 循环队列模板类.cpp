//StudybarCommentBegin
#include <iostream>
template <typename T>
class CircularQueue
{
private:
    T *_pQueue;
    size_t _front, _rear, _size;
    static const size_t _MAX_QUEUE_SIZE = 100;   //本质上相当于一个常量

public:
    CircularQueue(const size_t size = _MAX_QUEUE_SIZE);
    ~CircularQueue(void);
    size_t getSize(void) const;     //得到可以存放元素的最大个数，注意和分配空间的个数未必相等。
    bool getFront(T &val) const;  //查看队首，但不出队，如果是空队，则返回false;
    bool isEmpty(void) const;    //是否为空，为空true
    bool isFull(void) const;        //是否满了，为满true
    bool enQueue(const T &val);    //入队，如果队满，入队失败返回false, 成功返回true
    bool deQueue(T &val);    //出队，如果队空，出队失败返回false,成功返回true
};
//StudybarCommentEnd



//StudybarCommentBegin
int main(void)
{
    size_t  size, i;
    int x;
    std::cin >> size;
    CircularQueue<int> queue(size);

    const size_t QUEUE_SIZE = queue.getSize();

    queue.enQueue(-100);
    for (i = 0; i < 300 * QUEUE_SIZE + 3; ++i)
    {   queue.enQueue(i);
        queue.deQueue(x);
    }
    queue.getFront(x);
    std::cout << "\n" << x << "\n";
    do
    {   std::cin >> x;
        if (!queue.enQueue(x)) {
            std::cout << "\nenQueue " << x << " failed";
        }
    } while (x != 0);

    if (queue.isFull()) { std::cout << "\nis Full";}

    std::cout << "\n";
    while (queue.deQueue(x))
    {   std::cout << x << " ";
        if (x < 0) break;
    }

    if (queue.isEmpty()) { std::cout << "\nis Empty";}

    return 0;
}
//StudybarCommentEnd