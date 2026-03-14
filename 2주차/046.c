// Analyzing the Scores of 5 Students

#include <stdio.h>

int main() {
    int scores[5][3],sum_class[3], sum_student[5];
    float average_student[5],average_class[3];
    char grade[5];
    char *subjects[] = {"Korean", "English", "Math"};

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &scores[i][j]);

    for (int j = 0; j < 3; j++) {
        sum_class[j] = 0;
        for (int i = 0; i < 5; i++)
            sum_class[j] += scores[i][j];
        average_class[j] = (float)sum_class[j] / 5;
    }

    
    for (int i = 0; i < 5; i++) {
        sum_student[i] = 0;
        for (int j = 0; j < 3; j++)
            sum_student[i] += scores[i][j];
        average_student[i] = (float)sum_student[i] / 3;
        if      (average_student[i] >= 90) grade[i] = 'A';
        else if (average_student[i] >= 80) grade[i] = 'B';
        else if (average_student[i] >= 70) grade[i] = 'C';
        else if (average_student[i] >= 60) grade[i] = 'D';
        else                               grade[i] = 'F';
    }

    printf("1) The total and average scores for each subject.\n");
    for (int j = 0; j < 3; j++)
        printf("%s - Total %d, Average %.1f\n",
               subjects[j], sum_class[j], average_class[j]);

    printf("\n2) The total and average scores for each student, ");
    printf("along with the grade based on their average score.\n");
    
    for (int i = 0; i < 5; i++)
        printf("Student %d - Total %d, Average %.1f (Grade %c)\n", 
            i+1, sum_student[i], average_student[i], grade[i]);

    return 0;
}


// 코드 가독성을 위하여 AI 도구(Gemini)를 활용하여 깔끔하게 정돈하였음을 알려드립니다.
