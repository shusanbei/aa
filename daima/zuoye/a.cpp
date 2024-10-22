#include <iostream>
#include <vector>

using namespace std;

int best_value = 0; // 保存最大价值
vector<int> best_items; // 保存最优解的货物个数

void backtrack(int current_index, int capacity_ship1, int capacity_ship2, int total_value, int total_items, vector<int>& weights, vector<int>& values, int C1, int C2) {
    if (current_index == weights.size()) { // 到达物品的最后一个
        if (total_value > best_value) { // 更新最优解
            best_value = total_value;
            best_items = vector<int>(total_items);
            for (int i = 0; i < total_items; ++i) {
                best_items[i] = i;
            }
        }
        return;
    }

    // 尝试不放入当前物品
    backtrack(current_index + 1, capacity_ship1, capacity_ship2, total_value, total_items, weights, values, C1, C2);

    // 尝试放入第一艘船
    if (capacity_ship1 >= weights[current_index]) {
        backtrack(current_index + 1, capacity_ship1 - weights[current_index], capacity_ship2, total_value + values[current_index], total_items + 1, weights, values, C1, C2);
    }

    // 尝试放入第二艘船
    if (capacity_ship2 >= weights[current_index]) {
        backtrack(current_index + 1, capacity_ship1, capacity_ship2 - weights[current_index], total_value + values[current_index], total_items + 1, weights, values, C1, C2);
    }
}

int main() {
    int C1 = 10; // 第一艘船的容量
    int C2 = 15; // 第二艘船的容量
    vector<int> weights = {2, 3, 5}; // 物品重量列表
    vector<int> values = {3, 4, 6}; // 物品价值列表

    backtrack(0, C1, C2, 0, 0, weights, values, C1, C2);

    cout << "最大价值: " << best_value << endl;
    cout << "最优解的货物个数: " << best_items.size() << endl;
    cout << "最优解的货物索引: ";
    for (int i = 0; i < best_items.size(); ++i) {
        cout << best_items[i] << " ";
    }
    cout << endl;

    return 0;
}
