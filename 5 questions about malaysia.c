#include <stdio.h>
#include <string.h>
#include <ctype.h>

int welcome(void)
    {char answer[15];
    
    while (1)
        {printf("You will be participating on a short 5 questions quiz about the general knowledge of Malaysia . You will only have 2 chances per question . After 2 chances , the program will exit automatically and you may try again after. Please say the word 'yes' or 'no' in order to continue.");fgets(answer, sizeof(answer), stdin);
        if (answer[0] == '\n')
            {printf("Invalid response.");
            printf("\n");
            continue;}
            break;}

        answer[strcspn(answer, "\n")] = '\0';

        for (int i = 0; answer[i] != '\0'; i = i + 1)
            {answer[i] = tolower(answer[i]);}

    if (strcmp(answer, "yes") == 0)
            {printf("Let's go!");
            printf("\n");
            return 1;}
    else if (strcmp(answer, "no") == 0)
            {printf("Alright");
            printf("\n");
            return 0;}
    else   
            {printf("Invalid response");
            printf("\n");
            return welcome();}}
    
int question_1(void)
    {char answer[15];
        
    while (1)
        {printf("What is the capital city of Malaysia?");fgets(answer, sizeof(answer), stdin);
        if (answer[0] == '\n')
            {printf("Invalid response.");
            printf("\n");
            continue;}
            break;}
    
        answer[strcspn(answer, "\n")] = '\0';

        for (int i = 0; answer[i] != '\0'; i = i + 1)
            {answer[i] = tolower(answer[i]);}
        
    if (strcmp(answer, "kuala lumpur") == 0)
        {printf("Good job!");
        printf("\n");
        return 1;}
    else
        {printf("Let's try again.");
        printf("\n");

        while (1)
            {printf("What is the capital city of Malaysia?");fgets(answer, sizeof(answer), stdin);
            if (answer[0] == '\n')
                {printf("Invalid response");
                printf("\n");
                continue;}
                break;}
            
            answer[strcspn(answer, "\n")] = '\0';

            for (int i = 0; answer[i] != '\0'; i = i + 1)
                {answer[i] = tolower(answer[i]);}
        
        if (strcmp(answer, "kuala lumpur") == 0)
            {printf("Good job!");
            printf("\n");
            return 1;}
        else
            {printf("Too bad");
            return 0;}}}

int question_2(void)
    {char answer[15];
    
    while (1)
        {printf("What is the national food in Malaysia?");fgets(answer, sizeof(answer), stdin);
        if (answer[0] == '\n')
            {printf("Invalid response");
            printf("\n");
            continue;}
            break;}

        answer[strcspn(answer, "\n")] = '\0';

        for (int i = 0; answer[i] != '\0'; i = i + 1)
            {answer[i] = tolower(answer[i]);}
        
    if (strcmp(answer, "nasi lemak") == 0)
        {printf("Good job!");
        printf("\n");
        return 1;}
    else
        {printf("Let's try again.");
        printf("\n");

        while (1)
            {printf("What is the national food in Malaysia?");fgets(answer, sizeof(answer), stdin);
            if (answer[0] == '\n')
                {printf("Invalid response");
                printf("\n");
                continue;}
                break;}
            
            answer[strcspn(answer, "\n")] = '\0';

            for (int i = 0; answer[i] != '\0'; i = i + 1)
                {answer[i] = tolower(answer[i]);}
        
        if (strcmp(answer, "nasi lemak") == 0)
            {printf("Good job!");
            printf("\n");
            return 1;}
        else
            {printf("Too bad");
            return 0;}}}

int question_3(void)
    {char answer[15];

    while (1)
        {printf("What is the name of the national anthem in Malaysia?");fgets(answer, sizeof(answer), stdin);
        if (answer[0] == '\n')
            {printf("Invalid response");
            printf("\n");
            continue;}
            break;}

        answer[strcspn(answer, "\n")] = '\0';

        for (int i = 0; answer[i] != '\0'; i = i + 1)
            {answer[i] = tolower(answer[i]);}
    
    if (strcmp(answer, "negaraku") == 0)
        {printf("Good job!");
        printf("\n");
        return 1;}
    else
        {printf("Let's try again.");
        printf("\n");
        
        while (1)
            {printf("What is the name of the national anthem in Malaysia?");fgets(answer, sizeof(answer), stdin);
            if (answer[0] == '\n')
                {printf("Invalid response.");
                printf("\n");
                continue;}
                break;}
            
            answer[strcspn(answer, "\n")] = '\0';

            for (int i = 0; answer[i] != '\0'; i = i + 1)
                {answer[i] = tolower(answer[i]);}

        
        if (strcmp(answer,"negaraku") == 0)
            {printf("Good job!");
            printf("\n");
            return 1;}
        else
            {printf("Too bad");
            return 0;}}}
            
int question_4(void)
    {char answer[100];
    
    while (1)
        {printf("Since 2013, the minimum requirement to get a SPM(Malaysian high school exit examination) certificate is to pass two mandatory subjects. Name the two subjects fully.");fgets(answer, sizeof(answer), stdin);
        if (answer[0] == '\n')
            {printf("Invalid response");
            printf("\n");
            continue;}
            break;}
            
        answer[strcspn(answer, "\n")] = '\0';

        for (int i = 0; answer[i] != '\0'; i = i + 1)
            {answer[i] = tolower(answer[i]);}

    if (strstr(answer, "bahasa melayu") != NULL && strstr(answer, "sejarah") != NULL)
        {printf("Good job!");
        printf("\n");
        return 1;}
    else
        {printf("Let's try again.");
        printf("\n");
        
        while (1)
            {printf("Since 2013, the minimum requirement to get a SPM(Malaysian high school exit examination) certificate is to pass two mandatory subjects. Name the two subjects fully");fgets(answer, sizeof(answer), stdin);
            if (answer[0] == '\n')
                {printf("Invalid response");
                printf("\n");
                continue;}
                break;}
            
            answer[strcspn(answer, "\n")] = '\0';

            for (int i = 0; answer[i] != '\0'; i = i + 1)
                {answer[i] = tolower(answer[i]);}

        if (strstr(answer, "bahasa melayu") != NULL && strstr(answer, "sejarah") != NULL)
            {printf("Good job!");
            printf("\n");
            return 1;}
        else
            {printf("Too bad");
            return 0;}}}
    
int question_5(void)
    {char answer[100];

    while (1)
        {printf("In the Klang Valley , there are 2 main airports that are active . List the administrative districts located for the 2 airports.");fgets(answer, sizeof(answer), stdin);
        if (answer[0] == '\n')
            {printf("Invalid response");
            printf("\n");
            continue;}
            break;}

        answer[strcspn(answer, "\n")] = '\0';

        for (int i = 0; answer[i] != '\0'; i = i + 1)
            {answer[i] = tolower(answer[i]);}
        
    if (strstr(answer, "sepang") != NULL && strstr(answer, "petaling") != NULL)
        {printf("Good job!");
        printf("\n");
        return 1;}
    else
        {printf("Let's try again.");
        printf("\n");
        
        while (1)
            {printf("In the Klang Valley , there are 2 main airports that are active . List the administrative districts located for the 2 airports");fgets(answer, sizeof(answer), stdin);
            if (answer[0] == '\n')
                {printf("Invalid response");
                continue;}
                break;}
            
            answer[strcspn(answer, "\n")] = '\0';

            for (int i = 0; answer[i] != '\0'; i = i + 1)
                {answer[i] = tolower(answer[i]);}

        if (strstr(answer, "sepang") != NULL && strstr(answer, "petaling") != NULL)
            {printf("Good job!");
            printf("\n");
            return 1;}
        else
            {printf("Too bad");
            return 0;}}}
    
int end_sequence(void)
    {char answer[15];
    
    while (1)
        {printf("Congrats, you really have the knowledge to do this!");
        printf("Do you want to try again? Please say the word 'yes' or 'no' to continue.");fgets(answer, sizeof(answer), stdin);
        if (answer[0] == '\n')
            {printf("Invalid response");
            printf("\n");
            continue;}
            break;}

        answer[strcspn(answer, "\n")] = '\0';

        for (int i = 0; answer[i] != '\0'; i = i + 1)
            {answer[i] = tolower(answer[i]);}
            
        
    if (strcmp(answer, "yes") == 0)
        {return 1;}
    else if (strcmp(answer, "no") == 0)
        {printf("Byebye!");
        return 0;}
    else
        {printf("Invalid response");
        printf("\n");
        return end_sequence();}}

int main(void)
    {if (welcome() == 0)
        return 0;
    
    while (1)
        {if (question_1() == 0)
            return 0;

        if (question_2() == 0)
            return 0;

        if (question_3() == 0)
            return 0;

        if (question_4() == 0)
            return 0;

        if (question_5() == 0)
            return 0;

        if (end_sequence() == 0)
            return 0;}

    return 0;}
    


    