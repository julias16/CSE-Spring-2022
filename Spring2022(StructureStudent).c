#include <stdio.h>

// Structure to store student information
struct Student
{
    int ID;
    char gender;
    float classTestScore;
    float midtermScore;
    float finalExamScore;
    float totalScore;
};

// Function to count the number of students who failed (total score < 40)
int countFailures(struct Student students[], int N)
{
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        if (students[i].totalScore < 40)
            count++;
    }
    return count;
}

// Function to find the ID of the student with the highest total score
int findHighestScorer(struct Student students[], int N)
{
    float maxScore = -1;
    int highestScorerID = -1;
    for (int i = 0; i < N; i++)
    {
        if (students[i].totalScore > maxScore)
        {
            maxScore = students[i].totalScore;
            highestScorerID = students[i].ID;
        }
    }
    return highestScorerID;
}

int main()
{
    int N;
    printf("Enter the number of students: ");
    scanf("%d", &N);
    struct Student students[N];

// Input student information
    for (int i = 0; i < N; i++)
    {
        printf("\nStudent %d:\n", i + 1);
        printf("Enter ID: ");
        scanf("%d", &students[i].ID);
        printf("Enter gender (M/F): ");
        scanf(" %c", &students[i].gender);
        printf("Enter class test score: ");
        scanf("%f", &students[i].classTestScore);
        printf("Enter mid-term score: ");
        scanf("%f", &students[i].midtermScore);
        printf("Enter final exam score: ");
        scanf("%f", &students[i].finalExamScore);

// Calculate total score
        students[i].totalScore = students[i].classTestScore + students[i].midtermScore +
                                 students[i].finalExamScore;
    }

// Function calls
    int failures = countFailures(students, N);
    printf("\nNumber of students who failed: %d\n", failures);
    int highestScorerID = findHighestScorer(students, N);
    printf("ID of the student with the highest score: %d\n", highestScorerID);
    return 0;
}
