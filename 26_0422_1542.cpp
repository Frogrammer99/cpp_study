#include <vector>
#include <numeric> // std::gcd, std::lcm 사용을 위해 필요

using namespace std;

class Solution {
public:
    int solution(vector<vector<int>> signals) {
        int n = signals.size();

        // 1. 전체 시스템의 주기를 구함 (최소공배수)
        // 주의: 주기가 너무 커지면 int 범위를 넘을 수 있으니 실무에선 long long을 고려해야 해.
        long long maxTime = 1;
        for (int i = 0; i < n; i++) {
            int cycle = signals[i][0] + signals[i][1] + signals[i][2];
            maxTime = std::lcm(maxTime, (long long)cycle);
        }

        // 2. 1초부터 전체 주기(maxTime)까지 완전탐색
        for (long long t = 1; t <= maxTime; t++) {
            bool isAllYellow = true;

            for (int i = 0; i < n; i++) {
                int g = signals[i][0];
                int y = signals[i][1];
                int r = signals[i][2];
                int C = g + y + r;

                // t초 시점의 위치 계산 (0-based index로 변환하기 위해 t-1)
                int remain = (t - 1) % C;

                // 노란불 구간인지 확인 (초록불 시간 이후 ~ 초록불+노란불 시간 이전)
                if (!(g <= remain && remain < g + y)) {
                    isAllYellow = false;
                    break;
                }
            }

            // 모든 신호등이 노란불이면 현재 시간 t 반환
            if (isAllYellow) {
                return (int)t;
            }
        }

        return -1;
    }
};