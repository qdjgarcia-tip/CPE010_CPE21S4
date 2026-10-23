#include <iostream>
#include <vector>
#include <unordered_set>
#include <chrono> // Required for time measurement

int main() {
    // Creating a mock dataset of 50,000 numbers to get a measurable time frame
    std::vector<int> A;
    for (int i = 0; i < 50000; ++i) {
        A.push_back(i);
    }

    // Define your lambda logic (allowed inside functions)
    auto areElementsDistinctFast = [](const std::vector<int>& arr) {
        std::unordered_set<int> seen;
        for (int element : arr) {
            if (seen.find(element) != seen.end()) return false;
            seen.insert(element);
        }
        return true;
    };

    // ================= START STOPWATCH =================
    auto start = std::chrono::high_resolution_clock::now();

    // Run the code you want to profile
    bool result = areElementsDistinctFast(A);

    // ================= STOP STOPWATCH =================
    auto stop = std::chrono::high_resolution_clock::now();

    // Calculate the duration (you can use microseconds or milliseconds)
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

    // Print the result
    std::cout << "Result: " << (result ? "Unique" : "Duplicates found") << "\n";
    std::cout << "Execution time: " << duration.count() << " microseconds\n";

    return 0;
}