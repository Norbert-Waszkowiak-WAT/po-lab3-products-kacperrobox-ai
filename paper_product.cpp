#ifndef PAPER_PRODUCT
#define PAPER_PRODUCT
#include <string>
using namespace std;
class Product {
    public:
    virtual string getProductType ()=0;
    virtual string getName ()=0;
};
#endif
}
