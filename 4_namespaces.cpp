#include <iostream>

namespace one{
    int x = 1;
} 

namespace two{
    int x = 2;
}

int main(){
    //Namespace - It provides a solution for preventing name conflicts in large projects. Each entity needs a unique name. A namespace allows for identically named entities as long as the namespaces are different.
    //When accessing a namespace, if you don't define the specific namespace, you will get the local version of an entity.
    using namespace one;// now the plain entity will point to the one namespace
    using namespace std; // This saves a little bit of typing coz with this, you don't need to prefix things with std e.g. std::cout << x; tot cout << x; its alternative: coz that std has hundreds of different entities, hence a high likelihood of a naming conflict.:
    using std::cout;
    using std::string;

    int x = 0;

    std::cout << x;
    std::cout << one::x;
    std::cout << two::x;

    return 0;
}