#include <stdio.h>
#include <string.h>

bool isBigger(char* arr1, char* arr2) {
    if (strlen(arr1) == strlen(arr2)){
        for (int i = 0; i < strlen(arr1); i++) {
            if (arr1[i] > arr2[i]) {
                return true;
            }
            else if (arr1[i] < arr2[i]) {
                return false;
            }
        }
    }

    if (strlen(arr1) > strlen(arr2)) {
        return true;
    }
    return false;
}


void selection_sort(char** arr, int n) {

    for (int i = 0; i < n - 1; i++) {
        char* min = arr[i];
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (isBigger(arr[j], min)) {
                min = arr[j];
                min_index = j;
            }
        }
        arr[min_index] = arr[i];
        arr[i] = min;
    }
}

int main()
{
    char str1[1200];
    char** newString = new char*[100];
    int ctr = 0;
    int j = 0;
    printf(" \n Introduceti propozitia : ");
    fgets(str1, sizeof str1, stdin);

    char buffer[260];
    for (int i = 0; i <= (strlen(str1)); i++)
    {

        // if space or NULL found, assign NULL into newString[ctr]
        if (str1[i] == ' ' || str1[i] == '\0' || str1[i]== '\n')
        {
            while (str1[++i] == ' ');
            i--;
            buffer[j] = '\0';

            //alocal fix cati octeti avem nevoie
            int buffer_current_size = strlen(buffer) + 1;
            newString[ctr] = new char[buffer_current_size];
            strcpy_s(newString[ctr], buffer_current_size, buffer);

            ctr++;  
            j = 0;    
        }
        else
        {
            buffer[j] = str1[i];
            j++;
        }
    }
    printf("\n Cuvintele separate :\n");
    selection_sort(newString, ctr);
    for (int i = 0; i < ctr; i++)
        printf(" %s\n", newString[i]);
    return 0;
}