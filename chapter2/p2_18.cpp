#include <iostream>

int main(){
    //p2_18
    int i = 0, j = 2, *p1 = &i;
    std::cout << i << *p1 << std::endl;
    p1 = &j;
    std::cout << i << *p1 << std::endl;
    //p2_19 指针是对象，引用不是，指针不用初始化，引用必须；指针可以换指向地址，引用不行
    //p2_20 i = i*i;
    //p2_21 a的指针类型与变量不一致， b右侧没加引用符号&会导致指向未知地址造成野指针，c正常
    //p2_22 如果指针p有效， 如果指针指向的值不为0
    //p2_23 不行，野指针没法判断，只能观察写的是否有问题。空指针可以判断
    //p2_24 void* 可以指向任何类型变量，但其他的必须类型一致
    int *p;
    int *&m = p; //指向指针的引用 ； 有点晕了，为什么*要写在&前面， 从右往左读，离变量最近的有最直接影响
    //p2_25 (a)整型指针、变量、引用 (b)整型变量、指针 (c) 整型指针、变量
    // const 只是不能改变值，初始化等操作是可以的
    //p2_26 最后一个不合法，const变量值不能改变
    i = 42;
    int &r1 = i;
    const int &r2 = i; //虽然r2这条引用没法用，但是r1 和i本身都是可以被改变的，所以通过其他手段还是会造成const值发生变化
    std::cout << r2 << std::endl;
    r1 = 5;
    std::cout << r2 << std::endl;
    //指向常量的指针， 指向地址对应的值为常量
    //常量指针 ,感觉类似于引用，就是把指针指向的地址固定，没法再更改指向其他地址
    //p2_27 b d(e) 因为没写i2啥类型，所以d,e里面肯定有一个对一个错，或许两个都错。 g
    //p2_28  (c) 引用的初始化变量没有初始化, (d) p3常量指针未初始化
    const int i2 = i, &rr = i;
    const int ic=0, &rrr = ic;
    const int *const p3 = &ic;
    //p1 = &ic; //不合法
    //p2_29 c不合法，p1需要强制转换为指向常量的指针才合法；d也不合法，e也不合法,f也不合法，后三个都是试图给常量const赋值，这是不被允许的
    
    return 0;
}