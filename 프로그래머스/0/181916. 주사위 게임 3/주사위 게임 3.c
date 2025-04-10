#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b, int c, int d) {
    int counts[7] = {0};
    
    counts[a]++; counts[b]++; counts[c]++; counts[d]++;
    
    int kind = 0;
    for (int i = 1; i <= 6; i++) {
        if (counts[i] > 0) kind++;
    }
    
    if (kind == 1) {
        return 1111 * a;
        
    } else if (kind == 2) {
        for (int i = 1; i <= 6; i++) {
            if (counts[i] == 3) {
                int p = i;
                
                for (int j = 1; j <= 6; j++) {
                    if (counts[j] == 1) {
                        int q = j;
                        
                        return (10 * p + q) * (10 * p + q);
                    }
                }
            } else if (counts[i] == 2) {
                int p = i;
                
                for (int j = i + 1; j <= 6; j++) {
                    if (counts[j] == 2) {
                        int q = j;
                        
                        return (p + q) * abs(p - q);
                    }
                }
            }
        }
    } else if (kind == 3) {
        for (int i = 1; i <= 6; i++) {
            if (counts[i] == 2) {
                int p = i, q = 0, r = 0;
                
                for (int j = 1; j <= 6; j++) {
                    if (counts[j] == 1) {
                        if (q == 0) q = j;
                        else r = j;
                    }
                }
                return q * r;
            }
        }
    } else {
        int min = 7;
        if (a < min) min = a;
        if (b < min) min = b;
        if (c < min) min = c;
        if (d < min) min = d;
        
        return min;
    }
}