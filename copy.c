#include "invSearch.h"
static Wlist *read_datafile(Flist *file, Wlist *head[], char *filename)
{
    FILE *fptr = fopen(filename, "r");
    if (fptr == NULL)
    {
        // Handle file open error
        return head;
    }

    char word[WORD_SIZE];

    while (fscanf(fptr, "%s", word) != EOF)
    {
        int index = tolower(word[0]) % 97;

        Wlist *temp = head[index];
        int wordFound = 0;

        while (temp != NULL)
        {
            if (!strcmp(temp->word, word))
            {
                update_word_count(&temp, filename);
                wordFound = 1;
                break;
            }
            temp = temp->link;
        }

        if (!wordFound)
        {
            head[index] = insert_at_last(&head[index], word);
        }
    }

    fclose(fptr);
    return head;
}
static Wlist *update_word_count(Wlist *head, char *file_name)
{
    Ltable *ltemp = head->Tlink;
    int fileFound = 0;

    while (ltemp != NULL)
    {
        if (!strcmp(ltemp->file_name, file_name))
        {
            ltemp->word_count++;
            fileFound = 1;
            break;
        }
        ltemp = ltemp->table_link;
    }

    if (!fileFound)
    {
        Ltable *new_ltable = malloc(sizeof(Ltable));
        if (new_ltable == NULL)
            return head;

        strcpy(new_ltable->file_name, file_name);
        new_ltable->word_count = 1;
        new_ltable->table_link = head->Tlink;
        head->Tlink = new_ltable;

        head->file_count++;
    }

    return head;
}

