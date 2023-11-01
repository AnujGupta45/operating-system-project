#include <stdio.h>

int main() {
    // Constants
    int MAT = 100;  // Memory Access Time in nanoseconds
    int PFS_not_modified = 8 * 1000000;  // Page Fault Service Time for unmodified page in nanoseconds
    int PFS_modified = 20 * 1000000;  // Page Fault Service Time for modified page in nanoseconds
    double pm = 0.7;  // Page Modification Rate
    int max_access_time = 200;  // Maximum acceptable access time in nanoseconds

    // Calculate the maximum acceptable page-fault rate
    double page_fault_rate = (max_access_time - MAT) / ((1 - pm) * PFS_not_modified + pm * PFS_modified);

    // Convert the result to a percentage
    double page_fault_rate_percentage = page_fault_rate * 100;

    printf("Maximum acceptable page-fault rate: %.4f%%\n", page_fault_rate_percentage);

    return 0;
}

