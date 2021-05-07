Vim�UnDo� �L� �v7�&��{Ad��O��R�[=P'��Y��                                     `���    _�                      �       ����                                                                                                                                                                                                                                                                                                                                                             `���    �              �                      continue;�              =        printf("Syntax error. Could not parse statement.\n");�                     case PREPARE_SYNTAX_ERROR:�                      continue;�              7        printf("String for column `b` is too long.\n");�              #      case PREPARE_STRING_TOO_LONG:�                      continue;�              1        printf("Column `a` must be positive.\n");�              "      case PREPARE_NEGATIVE_VALUE:�                      continue;�              #      case PREPARE_EMPTY_STATEMENT:�                      break;�                    case PREPARE_SUCCESS:�              "    switch (prepare_statement()) {�               �                  }�  
                  }�  	                      continue;�    
          F          printf("Unrecognized command '%s'.\n", input_buffer.buffer);�    	          /        case META_COMMAND_UNRECOGNIZED_COMMAND:�                        continue;�              "        case META_COMMAND_SUCCESS:�              "      switch (do_meta_command()) {�              (    if (input_buffer.buffer[0] == '.') {�               �                  }�                       continue;�   �            '        printf("Input is too long.\n");�   �                   case INPUT_TOO_LONG:�   �   �                  break;�   �   �                case INPUT_SUCCESS:�   �   �              switch (read_input()) {�   �   �              print_prompt();�   �   �            while (1) {�   �   �           �   �   �            open_file(argv[1]);�   �   �           �   �   �          "  signal(SIGINT, &sigint_handler);�   �   �            atexit(&exit_success);�   �   �           �   �   �            }�   �   �              exit(EXIT_FAILURE);�   �   �          1    printf("Must supply a database filename.\n");�   �   �            if (argc < 2) {�   �   �          "int main(int argc, char* argv[]) {�   �   �           �   �   �          }�   �   �            exit(EXIT_SUCCESS);�   �   �            printf("\n");�   �   �          !void sigint_handler(int signum) {�   �   �           �   �   �          }�   �   �            }�   �   �                return EXECUTE_SUCCESS;�   �   �                b_tree_delete();�   �   �              case STATEMENT_DELETE:�   �   �                return execute_select();�   �   �              case STATEMENT_SELECT:�   �   �                return EXECUTE_SUCCESS;�   �   �                b_tree_insert();�   �   �              case STATEMENT_INSERT:�   �   �            switch (statement.type) {�   �   �          #ExecuteResult execute_statement() {�   �   �           �   �   �          }�   �   �            return EXECUTE_SUCCESS;�   �   �            }�   �   �              b_tree_search();�   �   �          
  } else {�   �   �              b_tree_traverse();�   �   �            if (statement.flag == 0) {�   �   �            printf("\n");�   �   �           ExecuteResult execute_select() {�   �   �           �   �   �          }�   �   �          (  return PREPARE_UNRECOGNIZED_STATEMENT;�   �   �            }�   �   �              return prepare_delete();�   �   �          >  } else if (strncmp(input_buffer.buffer, "delete", 6) == 0) {�   �   �              return prepare_select();�   �   �          >  } else if (strncmp(input_buffer.buffer, "select", 6) == 0) {�   �   �              return prepare_insert();�   �   �          >  } else if (strncmp(input_buffer.buffer, "insert", 6) == 0) {�   �   �          #    return PREPARE_EMPTY_STATEMENT;�   �   �          )  if (strlen(input_buffer.buffer) == 0) {�   �   �          #PrepareResult prepare_statement() {�   �   �           �   �   �          }�   �   �            return result;�   �   �               return PREPARE_SYNTAX_ERROR;�   �   �          7  if (result == PREPARE_SUCCESS && statement.flag == 0)�   �   �          -  PrepareResult result = prepare_condition();�   �   �          $  statement.type = STATEMENT_DELETE;�   �   �           PrepareResult prepare_delete() {�   �   �           �   �   �          }�   �   �            return prepare_condition();�   �   �          $  statement.type = STATEMENT_SELECT;�   �   �           PrepareResult prepare_select() {�   �   �           �   �   �          }�   �   �            return PREPARE_SUCCESS;�   �   �           �   �   �            statement.flag |= 2;�   �   �            strcpy(statement.row.b, b);�   �   �           �   �   �          #    return PREPARE_STRING_TOO_LONG;�   �   �             if (strlen(b) > COLUMN_B_SIZE)�   �   �           �   �   �          -  if (c != NULL) return PREPARE_SYNTAX_ERROR;�   �   �          (  if (b == NULL) return PREPARE_SUCCESS;�   �   �           �   �   �            char* c = strtok(NULL, " ");�   �   �            char* b = strtok(NULL, " ");�   �   �          3  char* keyword = strtok(input_buffer.buffer, " ");�   �   �           �   �   �            statement.flag = 0;�   �   �          #PrepareResult prepare_condition() {�   �   �           �   �   �          }�   �   �            return PREPARE_SUCCESS;�   �   �           �   �   �            strcpy(statement.row.b, b);�   �   �            statement.row.a = x;�   �   �           �   �   �          #    return PREPARE_STRING_TOO_LONG;�   �   �             if (strlen(b) > COLUMN_B_SIZE)�   �   �          "    return PREPARE_NEGATIVE_VALUE;�   �   �            if (x < 0)�   �   �            x = atoi(a);�   �   �           �   �   �               return PREPARE_SYNTAX_ERROR;�   �   �            if (a == NULL || b == NULL)�   �   �           �   �   �          - [ ] ce.fudan.edu.cn�   �   �            int x;�   �   �            char* b = strtok(NULL, " ");�   �   �            char* a = strtok(NULL, " ");�   �   �          3  char* keyword = strtok(input_buffer.buffer, " ");�   �   �           �   �   �          $  statement.type = STATEMENT_INSERT;�   �   �           PrepareResult prepare_insert() {�   �   �           �   �   �          }�   �   �            }�   �   �          -    return META_COMMAND_UNRECOGNIZED_COMMAND;�   �   �          
  } else {�   �   �              exit(EXIT_SUCCESS);�   �   �          2  if (strcmp(input_buffer.buffer, ".exit") == 0) {�   �   �          %MetaCommandResult do_meta_command() {�   �   �           �   �   �          } PrepareResult;�   �   �            PREPARE_EMPTY_STATEMENT�   �   �          !  PREPARE_UNRECOGNIZED_STATEMENT,�   �   �            PREPARE_SYNTAX_ERROR,�      �            PREPARE_STRING_TOO_LONG,�   ~   �            PREPARE_NEGATIVE_VALUE,�   }               PREPARE_SUCCESS,�   |   ~          typedef enum {�   {   }           �   z   |          } MetaCommandResult;�   y   {          #  META_COMMAND_UNRECOGNIZED_COMMAND�   x   z            META_COMMAND_SUCCESS,�   w   y          typedef enum {�   v   x           �   u   w          } ExecuteResult;�   t   v            EXECUTE_SUCCESS�   s   u          typedef enum {�   r   t           �   q   s          /* logic starts */�   p   r           �   o   q          }�   n   p            printf("[INFO] traverse\n");�   m   o            /* print all rows */�   l   n          void b_tree_traverse() {�   k   m           �   j   l          }�   i   k          1  printf("[INFO] delete: %s\n", statement.row.b);�   h   j            /* delete row(s) */�   g   i          void b_tree_delete() {�   f   h          6/* the key to delete is stored in `statement.row.b` */�   e   g           �   d   f          }�   c   e            print_row(&statement.row);�   b   d            printf("[INFO] insert: ");�   a   c            /* insert a row */�   `   b          void b_tree_insert() {�   _   a          4/* the row to insert is stored in `statement.row` */�   ^   `           �   ]   _          }�   \   ^          1  printf("[INFO] select: %s\n", statement.row.b);�   [   ]            /* print selected rows */�   Z   \          void b_tree_search() {�   Y   [          6/* the key to select is stored in `statement.row.b` */�   X   Z           �   W   Y          /* B-Tree operations */�   V   X           �   U   W          } statement;�   T   V          <  uint8_t flag; /* whether row.a, row.b have valid values */�   S   U          
  Row row;�   R   T            StatementType type;�   Q   S          struct {�   P   R           �   O   Q          } StatementType;�   N   P            STATEMENT_DELETE�   M   O            STATEMENT_SELECT,�   L   N            STATEMENT_INSERT,�   K   M          typedef enum {�   J   L           �   I   K          /* statement */�   H   J           �   G   I          }�   F   H          '  printf("(%d, %s)\n", row->a, row->b);�   E   G          void print_row(Row* row) {�   D   F           �   C   E          } Row;�   B   D            char b[COLUMN_B_SIZE + 1];�   A   C            uint32_t a;�   @   B          typedef struct {�   ?   A           �   >   @          #define COLUMN_B_SIZE 11�   =   ?           �   <   >          &/* specialization of data structure */�   ;   =           �   :   <          }�   9   ;            exit_nicely(EXIT_SUCCESS);�   8   :            printf("bye~\n");�   7   9          void exit_success() {�   6   8           �   5   7          }�   4   6            exit(code);�   3   5            /* do clean work */�   2   4          void exit_nicely(int code) {�   1   3           �   0   2          }�   /   1            /* open file */�   .   0          &void open_file(const char* filename) {�   -   /           �   ,   .          }�   +   -            return INPUT_SUCCESS;�   *   ,          /  input_buffer.buffer[input_buffer.length] = 0;�   )   +            }�   (   *              return INPUT_TOO_LONG;�   '   )              while (getchar() != '\n');�   &   (          :    && input_buffer.buffer[input_buffer.length] != '\n') {�   %   '          .  if (input_buffer.length == INPUT_BUFFER_SIZE�   $   &          .     the remaining characters are discarded */�   #   %          M  /* if the last character is not new-line, the input is considered too long,�   "   $            input_buffer.length--;�   !   #              exit(EXIT_SUCCESS);�       "          :  if (input_buffer.buffer[input_buffer.length - 1] == EOF)�      !          <    && input_buffer.buffer[input_buffer.length - 1] != EOF);�                 G    && (input_buffer.buffer[input_buffer.length++] = getchar()) != '\n'�                1  while (input_buffer.length <= INPUT_BUFFER_SIZE�                  input_buffer.length = 0;�                ,  /* we read the entire line as the input */�                InputResult read_input() {�                 �                *void print_prompt() { printf("myjql> "); }�                 �                } InputResult;�                  INPUT_TOO_LONG�                  INPUT_SUCCESS,�                typedef enum {�                 �                } input_buffer;�                  size_t length;�                %  char buffer[INPUT_BUFFER_SIZE + 1];�                struct {�                #define INPUT_BUFFER_SIZE 31�                 �                /* shell IO */�   
              �   	             #include <signal.h>�      
          #include <string.h>�      	          #include <stdlib.h>�                #include <stdio.h>�                #include <stdint.h>�                 �                #/* Compare: diff out.txt ans.txt */�                @/* Test: /usr/bin/time -v ./myjql myjql.db < in.txt > out.txt */�                '/* Compile: gcc -o myjql myjql.c -O3 */�                 =/* You may refer to: https://cstack.github.io/db_tutorial/ */�              *      case PREPARE_UNRECOGNIZED_STATEMENT:   :        printf("Unrecognized keyword at start of '%s'.\n",   $               input_buffer.buffer);           continue;       }       "    switch (execute_statement()) {         case EXECUTE_SUCCESS:   "        printf("\nExecuted.\n\n");           break;       }     }   }�   �   �  '    �   �   �  '    5��