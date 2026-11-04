#include <stdio.h>
#include <string.h>

typedef struct {
    int info;
    int warning;
    int error;
    int other;
} LogCounts;

void analyze_line(const char *line, LogCounts *counts) {
    if (strstr(line, "[INFO]") != NULL) {
        counts->info++;
    } else if (strstr(line, "[WARNING]") != NULL) {
        counts->warning++;
    } else if (strstr(line, "[ERROR]") != NULL) {
        counts->error++;
    } else {
        counts->other++;
    }
}

int main(int argc, char *argv[]) {
    const char *filename = "sample.log";

    if (argc > 1) {
        filename = argv[1];
    }

    FILE *file = fopen(filename, "r");

    if (file == NULL) {
        fprintf(stderr, "Could not open file: %s\n", filename);
        return 1;
    }

    LogCounts counts = {0, 0, 0, 0};
    char line[512];
    int total_lines = 0;

    while (fgets(line, sizeof(line), file) != NULL) {
        total_lines++;
        analyze_line(line, &counts);
    }

    fclose(file);

    printf("Log summary for: %s\n", filename);
    printf("-----------------------------\n");
    printf("Total lines : %d\n", total_lines);
    printf("INFO        : %d\n", counts.info);
    printf("WARNING     : %d\n", counts.warning);
    printf("ERROR       : %d\n", counts.error);
    printf("Other       : %d\n", counts.other);

    return 0;
}
