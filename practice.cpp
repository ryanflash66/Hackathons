#include <iostream>
#include <vector>

using namespace std;

class Box {
    private:
        double weight;
    
    public:
        // constructor
        Box(double w) : weight(w) {}

        // getter
        double getWeight() const {
            return weight;
        }

        // setter
        void setWeight(double w) {
            weight = w;
        }
};

int main() {
    size_t n;
    cout << "How many boxes? ";
    cin >> n;

    vector<Box> boxes;

    for (size_t i = 0; i < n; ++i) {
        double w;
        cout << "Weight of box " << i + 1 << ": ";
        cin >> w;
        boxes.emplace_back(w);       // construct Box in place
    }

    // TODO: loop to sum all weights and print the total
    auto total = 0.0;

    for (const Box& box : boxes)
        total += box.getWeight();
    
    cout << "Total Weight = " << total << endl;
}