#include <stdio.h>

int main() {
    float final_exam, quiz, attendance, tugas, total;
    int lulus = 0;
    while (!lulus) {
        printf("Masukkan nilai Final Exam : "); scanf("%f", &final_exam);
        printf("Masukkan nilai Quiz       : "); scanf("%f", &quiz);
        printf("Masukkan nilai Attendance : "); scanf("%f", &attendance);
        printf("Masukkan nilai Tugas      : "); scanf("%f", &tugas);

        total = (0.4 * final_exam) + (0.2 * quiz) + (0.1 * attendance) + (0.3 * tugas);

        if (total >= 60) {
            printf("Lulus MK dengan nilai total: %.2f\n", total);
            lulus = 1;
        } else {
            printf("Belum Lulus (nilai = %.2f), ikuti Kelas Semester Pendek!\n\n", total);
        }
    }
    return 0;
}

