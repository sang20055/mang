#include <iostream>
#include <vector>
#include <numeric> // Để sử dụng hàm accumulate
#include <algorithm> // Để sử dụng hàm sort

using namespace std;

// Hàm quay lui để phân chia mảng thành các mảng con
bool backtrack(const vector<int>& A, vector<int>& subset_sums, vector<vector<int>>& subsets, int index, int target_sum, int B) {
    if (index == A.size()) { // Khi đã duyệt hết các phần tử
        for (int i = 0; i < B; ++i) {
            if (subset_sums[i] != target_sum) return false; // Nếu có mảng nào không đạt tổng, trả về false
        }
        return true;
    }
    
    for (int i = 0; i < B; ++i) {
        // Nếu mảng con hiện tại có tổng nhỏ hơn hoặc bằng tổng mục tiêu
        if (subset_sums[i] + A[index] <= target_sum) {
            subset_sums[i] += A[index]; // Cộng phần tử hiện tại vào tổng của mảng con
            subsets[i].push_back(A[index]); // Thêm phần tử vào mảng con
            
            // Gọi đệ quy để tiếp tục phân chia phần tử tiếp theo
            if (backtrack(A, subset_sums, subsets, index + 1, target_sum, B)) {
                return true; // Nếu tìm được cách chia hợp lệ
            }
            
            // Quay lui nếu không thành công
            subset_sums[i] -= A[index];
            subsets[i].pop_back();
        }
    }
    
    return false;
}

// Hàm chính để chia mảng A thành B mảng con có tổng bằng nhau
string can_partition_equal_subsets(vector<int>& A, int B) {
    int total_sum = accumulate(A.begin(), A.end(), 0); // Tính tổng các phần tử của mảng A
    
    // Nếu tổng không chia hết cho B, không thể chia mảng
    if (total_sum % B != 0) {
        return "Không thể chia được";
    }
    
    int target_sum = total_sum / B; // Mỗi mảng con cần đạt tổng này
    sort(A.rbegin(), A.rend()); // Sắp xếp mảng theo thứ tự giảm dần
    
    vector<int> subset_sums(B, 0); // Mảng lưu tổng của từng mảng con
    vector<vector<int>> subsets(B); // Lưu các phần tử của từng mảng con
    
    // Gọi hàm quay lui để phân chia mảng
    if (backtrack(A, subset_sums, subsets, 0, target_sum, B)) {
        string result = "";
        for (int i = 0; i < B; ++i) {
            result += "{";
            for (int j = 0; j < subsets[i].size(); ++j) {
                result += to_string(subsets[i][j]);
                if (j != subsets[i].size() - 1) result += ", ";
            }
            result += "} ";
        }
        return result;
    } else {
        return "Không thể chia được";
    }
}

int main() {
    vector<int> A; // Khai báo mảng A
    int n, value, B; // Khai báo số phần tử, giá trị, và số mảng con B

    cout << "Nhập số phần tử của mảng: ";
    cin >> n; // Nhập số lượng phần tử
    for (int i = 0; i < n; ++i) {
        cout << "Nhập phần tử thứ " << i + 1 << ": ";
        cin >> value;
        A.push_back(value); // Thêm từng giá trị vào mảng A
    }

    cout << "Nhập số mảng con cần chia: ";
    cin >> B; // Nhập số lượng mảng con

    string result = can_partition_equal_subsets(A, B);
    cout << result << endl; // In ra kết quả
    
    return 0;
}






