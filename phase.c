/* inverted the words of a phase
run: gcc -o phase.out phase.c && ./phase.out
e.g: 
Input: Hello darkness my old C
Output: olleH ssenkrad ym dlo C
 */
#include <stdio.h>
#include <stdlib.h>

int len(char* phase)
{
    int pos = 0;
    while (phase[pos] != '\0') {
        pos++;
    }
    return pos;
}


int get_word_end_index(char* phase, int start_index)
{
    int end_index = start_index + 1;

    while (phase[end_index] != ' ' && phase[end_index] != '\0') {
        end_index++;
    }

    return end_index - 1;
}

void invert_str_partial(char* phase, char* inverted_phase, int word_start, int word_end)
{
    int insert_idx = word_start;
    while (insert_idx <= word_end) {
        printf("insert_idx: %d \n", insert_idx);
        printf("word_start: %d \n", word_start);
        printf("word_end: %d \n", word_end);

        inverted_phase[insert_idx] = phase[word_end - insert_idx];
        insert_idx++;
    }
}

int main(void)
{
    // char phase[MAX_LIMIT];
    // printf("Enter a phase: \n");
    // scanf("%[^\n]s", phase);
    // printf("phase: %s \n", phase);

    // char* phase = "ab cd345 ef";
    char* phase = "hello coto";
    //             0123456789
    int phase_len = len(phase);
    printf("phase_len: %d \n", phase_len);


    char* inverted_phase = malloc(sizeof(char) * (phase_len + 1) );
    int start_word_index = 0;
    int end_word_index = get_word_end_index(phase, start_word_index);



    // Test get_word_end_index
    int word_end_index_1 = get_word_end_index(phase, 0);
    printf("word_end_index: %d \n", word_end_index_1);

    int word_end_index_2 = get_word_end_index(phase, 6);
    printf("word_end_index: %d \n", word_end_index_2);



    // Test invert_str_partial
    invert_str_partial(phase, inverted_phase, 0, word_end_index_1);
    printf("phase_inverted: %s\n", inverted_phase);
    invert_str_partial(phase, inverted_phase, 6, word_end_index_2);
    printf("phase_inverted: %s\n", inverted_phase);
    free(inverted_phase);




return 0; 
}
