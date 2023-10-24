#include <stdio.h>

enum situation{ 
    pending,
    running,
    completed,
    failed
};

int main() {
    enum situation jobSituation = running;

    if(jobSituation == pending) {
        printf("Job is pending.");
    }else if(jobSituation == running) {
        printf("Job is unning.");
    }else if(jobSituation == completed) {
        printf("Job is completed.");
    }else if(jobSituation == failed) {
        printf("Job is failed.");
    }else {
        printf("Invalid value");
    }
    return 0;
}