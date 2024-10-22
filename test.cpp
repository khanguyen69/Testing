#include <iostream>
#include <vector>

class ArrayHandler {
public:
    ArrayHandler(int size) : arr(size) {}

    void setValue(int index, int value) {
        arr[index] = value;
    }

    int getValue(int index) {
        return arr[index];
    }

private:
    std::vector<int> arr;
};

int main() {
    ArrayHandler handler(5);
    
    handler.setValue(10, 100);
    std::cout << "Value at index 10: " << handler.getValue(10) << std::endl;

    return 0;
}
