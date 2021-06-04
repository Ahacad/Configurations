Vim�UnDo� �Q�w���ٌČ0Rkn�VR����hӻp�bh�   \           %                       `�*�    _�                           ����                                                                                                                                                                                                                                                                                                                                                             `�&�    �   T   V           �   S   U          &void leaf_node_delete(Cursor* cursor);�   R   T          -leaf_node_body* cursor_value(Cursor* cursor);�   Q   S           �   P   R          ,void internal_node_split(uint32_t page_num);�   O   Q          3void initialize_internal_node(internal_node* node);�   N   P          +void initialize_leaf_node(leaf_node* node);�   M   O          uint32_t get_unused_page_num();�   L   N          ?void deserialize_row(leaf_node_body* source, Row* destination);�   K   M          =void serialize_row(Row* source, leaf_node_body* destination);�   J   L          #NodeType get_node_type(void* node);�   I   K          Cursor* table_start();�   H   J          !Cursor* table_find(uint32_t key);�   G   I          void print_row(Row* row);�   F   H          &void pager_open(const char* filename);�   E   G          "void* get_page(uint32_t page_num);�   D   F           �   C   E          Euint32_t internal_node_find_child(internal_node* node, uint32_t key);�   B   D          <Cursor* internal_node_find(uint32_t page_num, uint32_t key);�   A   C          8Cursor* leaf_node_find(uint32_t page_num, uint32_t key);�   @   B           �   ?   A          } internal_node;�   >   @              uint32_t rightest_child;�   =   ?          5    internal_node_body body[INTERNAL_NODE_MAX_CELLS];�   <   >              uint32_t num_keys;�   ;   =              uint32_t parent;�   :   <              bool is_root;�   9   ;              NodeType node_type;�   8   :          typedef struct {�   7   9          } internal_node_body;�   6   8              uint32_t key;�   5   7              uint32_t child;�   4   6          typedef struct {�   3   5           �   2   4          } leaf_node;�   1   3          /    leaf_node_body values[LEAF_NODE_MAX_CELLS];�   0   2              uint32_t next_leaf;�   /   1              uint32_t num_cells;�   .   0              uint32_t parent;�   -   /              bool is_root;�   ,   .              NodeType node_type;�   +   -          typedef struct {�   *   ,          } leaf_node_body;�   )   +              char b[COLUMN_B_SIZE + 1];�   (   *              uint32_t a;�   '   )          typedef struct {�   &   (          } Row;�   %   '              char b[COLUMN_B_SIZE + 1];�   $   &              uint32_t a;�   #   %          typedef struct {�   "   $          '// the table struct specified in the PJ�   !   #          $// FIXME: test whether 500 is enough�       "          3typedef enum { NODE_INTERNAL, NODE_LEAF } NodeType;�      !          	} Cursor;�                     bool is_end_of_table;�                    uint32_t cell_num;�                    uint32_t page_num;�                    Table* table;�                typedef struct {�                } Table;�                    uint32_t root_page_num;�                    Pager pager;�                typedef struct {�                } Pager;�                !    void* pages[TABLE_MAX_PAGES];�                    uint32_t num_pages;�                    uint32_t file_length;�                    int file_descriptor;�                typedef struct {�                 �                4const uint32_t INTERNAL_NODE_RIGHT_SPLIT_SIZE = 250;�                3const uint32_t INTERNAL_NODE_LEFT_SPLIT_SIZE = 250;�                	// FIXME:�                0const uint32_t LEAF_NODE_LEFT_SPLIT_COUNT = 126;�   
             1const uint32_t LEAF_NODE_RIGHT_SPLIT_COUNT = 125;�   	             ##define INTERNAL_NODE_MAX_CELLS 500�      
          #define LEAF_NODE_MAX_CELLS 250�      	           �                 const uint32_t PAGE_SIZE = 4096;�                L#define size_of_attribute(Struct, Attribute) sizeof(((Struct*)0)->Attribute)�         U      #define TABLE_MAX_PAGES 500�                #define COLUMN_B_SIZE 11�                 �                #include <stdint.h>�                 #include <stdbool.h>5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `�')     �         V          �         U    5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             `�'J     �         V    5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             `�'K     �         W       5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `�'Q     �         W      typedef struct Page5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `�'Q     �         X    �         W      typedef struct Page {}5�_�      	                     ����                                                                                                                                                                                                                                                                                                                                                             `�'T     �         Y      typedef struct Page {5�_�      
           	          ����                                                                                                                                                                                                                                                                                                                                                             `�'U     �         Y      }5�_�   	              
          ����                                                                                                                                                                                                                                                                                                                                                             `�'W     �         Y      }Page;5�_�   
                         ����                                                                                                                                                                                                                                                                                                                                                             `�'X     �         Y       5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `�'j     �         Y          5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `�'q     �         Y          void* storgae;5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `�'s     �         Z          �         Y    5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `�'y     �         Z          int mod;5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `�'�     �         [      !    void* pages[TABLE_MAX_PAGES];5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `�'�    �   Y   [           �   X   Z          &void leaf_node_delete(Cursor* cursor);�   W   Y          -leaf_node_body* cursor_value(Cursor* cursor);�   V   X           �   U   W          ,void internal_node_split(uint32_t page_num);�   T   V          3void initialize_internal_node(internal_node* node);�   S   U          +void initialize_leaf_node(leaf_node* node);�   R   T          uint32_t get_unused_page_num();�   Q   S          ?void deserialize_row(leaf_node_body* source, Row* destination);�   P   R          =void serialize_row(Row* source, leaf_node_body* destination);�   O   Q          #NodeType get_node_type(void* node);�   N   P          Cursor* table_start();�   M   O          !Cursor* table_find(uint32_t key);�   L   N          void print_row(Row* row);�   K   M          &void pager_open(const char* filename);�   J   L          "void* get_page(uint32_t page_num);�   I   K           �   H   J          Euint32_t internal_node_find_child(internal_node* node, uint32_t key);�   G   I          <Cursor* internal_node_find(uint32_t page_num, uint32_t key);�   F   H          8Cursor* leaf_node_find(uint32_t page_num, uint32_t key);�   E   G           �   D   F          } internal_node;�   C   E              uint32_t rightest_child;�   B   D          5    internal_node_body body[INTERNAL_NODE_MAX_CELLS];�   A   C              uint32_t num_keys;�   @   B              uint32_t parent;�   ?   A              bool is_root;�   >   @              NodeType node_type;�   =   ?          typedef struct {�   <   >          } internal_node_body;�   ;   =              uint32_t key;�   :   <              uint32_t child;�   9   ;          typedef struct {�   8   :           �   7   9          } leaf_node;�   6   8          /    leaf_node_body values[LEAF_NODE_MAX_CELLS];�   5   7              uint32_t next_leaf;�   4   6              uint32_t num_cells;�   3   5              uint32_t parent;�   2   4              bool is_root;�   1   3              NodeType node_type;�   0   2          typedef struct {�   /   1          } leaf_node_body;�   .   0              char b[COLUMN_B_SIZE + 1];�   -   /              uint32_t a;�   ,   .          typedef struct {�   +   -          } Row;�   *   ,              char b[COLUMN_B_SIZE + 1];�   )   +              uint32_t a;�   (   *          typedef struct {�   '   )          '// the table struct specified in the PJ�   &   (          $// FIXME: test whether 500 is enough�   %   '          3typedef enum { NODE_INTERNAL, NODE_LEAF } NodeType;�   $   &          	} Cursor;�   #   %              bool is_end_of_table;�   "   $              uint32_t cell_num;�   !   #              uint32_t page_num;�       "              Table* table;�      !          typedef struct {�                 } Table;�                    uint32_t root_page_num;�                    Pager pager;�                typedef struct {�                } Pager;�                !    Page* pages[TABLE_MAX_PAGES];�                    uint32_t num_pages;�                    uint32_t file_length;�                    int file_descriptor;�                typedef struct {�                } Page;�                    void* storage;�                    bool written;�                    int mod;�                typedef struct  {�                 �                4const uint32_t INTERNAL_NODE_RIGHT_SPLIT_SIZE = 250;�                3const uint32_t INTERNAL_NODE_LEFT_SPLIT_SIZE = 250;�                	// FIXME:�                0const uint32_t LEAF_NODE_LEFT_SPLIT_COUNT = 126;�   
             1const uint32_t LEAF_NODE_RIGHT_SPLIT_COUNT = 125;�   	             ##define INTERNAL_NODE_MAX_CELLS 500�      
          #define LEAF_NODE_MAX_CELLS 250�      	           �                 const uint32_t PAGE_SIZE = 4096;�                L#define size_of_attribute(Struct, Attribute) sizeof(((Struct*)0)->Attribute)�                #define TABLE_MAX_PAGES 1000�                #define COLUMN_B_SIZE 11�                 �                #include <stdint.h>�                 #include <stdbool.h>�                    5�_�                           ����                                                                                                                                                                                                                                                                                                                                                    v        `�(    �   Z   \           �   Y   [          &void leaf_node_delete(Cursor* cursor);�   X   Z          -leaf_node_body* cursor_value(Cursor* cursor);�   W   Y           �   V   X          ,void internal_node_split(uint32_t page_num);�   U   W          3void initialize_internal_node(internal_node* node);�   T   V          +void initialize_leaf_node(leaf_node* node);�   S   U          uint32_t get_unused_page_num();�   R   T          ?void deserialize_row(leaf_node_body* source, Row* destination);�   Q   S          =void serialize_row(Row* source, leaf_node_body* destination);�   P   R          #NodeType get_node_type(void* node);�   O   Q          Cursor* table_start();�   N   P          !Cursor* table_find(uint32_t key);�   M   O          void print_row(Row* row);�   L   N          &void pager_open(const char* filename);�   K   M          "void* get_page(uint32_t page_num);�   J   L           �   I   K          Euint32_t internal_node_find_child(internal_node* node, uint32_t key);�   H   J          <Cursor* internal_node_find(uint32_t page_num, uint32_t key);�   G   I          8Cursor* leaf_node_find(uint32_t page_num, uint32_t key);�   F   H           �   E   G          } internal_node;�   D   F              uint32_t rightest_child;�   C   E          5    internal_node_body body[INTERNAL_NODE_MAX_CELLS];�   B   D              uint32_t num_keys;�   A   C              uint32_t parent;�   @   B              bool is_root;�   ?   A              NodeType node_type;�   >   @          typedef struct {�   =   ?          } internal_node_body;�   <   >              uint32_t key;�   ;   =              uint32_t child;�   :   <          typedef struct {�   9   ;           �   8   :          } leaf_node;�   7   9          /    leaf_node_body values[LEAF_NODE_MAX_CELLS];�   6   8              uint32_t next_leaf;�   5   7              uint32_t num_cells;�   4   6              uint32_t parent;�   3   5              bool is_root;�   2   4              NodeType node_type;�   1   3          typedef struct {�   0   2          } leaf_node_body;�   /   1              char b[COLUMN_B_SIZE + 1];�   .   0              uint32_t a;�   -   /          typedef struct {�   ,   .          } Row;�   +   -              char b[COLUMN_B_SIZE + 1];�   *   ,              uint32_t a;�   )   +          typedef struct {�   (   *          '// the table struct specified in the PJ�   '   )          $// FIXME: test whether 500 is enough�   &   (          3typedef enum { NODE_INTERNAL, NODE_LEAF } NodeType;�   %   '          	} Cursor;�   $   &              bool is_end_of_table;�   #   %              uint32_t cell_num;�   "   $              uint32_t page_num;�   !   #              Table* table;�       "          typedef struct {�      !          } Table;�                     uint32_t root_page_num;�                    Pager pager;�                typedef struct {�                } Pager;�                !    Page* pages[TABLE_MAX_PAGES];�                    uint32_t num_pages;�                    uint32_t file_length;�                    int file_descriptor;�                typedef struct {�                } Page;�                    void* storage;�                    bool written;�                    int mod;�                typedef struct {�                 �                4const uint32_t INTERNAL_NODE_RIGHT_SPLIT_SIZE = 250;�                3const uint32_t INTERNAL_NODE_LEFT_SPLIT_SIZE = 250;�                	// FIXME:�                0const uint32_t LEAF_NODE_LEFT_SPLIT_COUNT = 126;�                1const uint32_t LEAF_NODE_RIGHT_SPLIT_COUNT = 125;�   
             ##define INTERNAL_NODE_MAX_CELLS 500�   	             #define LEAF_NODE_MAX_CELLS 250�      
           �      	           const uint32_t PAGE_SIZE = 4096;�                L#define size_of_attribute(Struct, Attribute) sizeof(((Struct*)0)->Attribute)�         [       �                #define TABLE_MAX_PAGES 1000�                #define COLUMN_B_SIZE 11�                 �                #include <stdint.h>�                 #include <stdbool.h>�         Z    5�_�                           ����                                                                                                                                                                                                                                                                                                                                                    v        `�(�     �         [          int mod;5�_�                           ����                                                                                                                                                                                                                                                                                                                                                    v        `�(�    �   Z   \           �   Y   [          &void leaf_node_delete(Cursor* cursor);�   X   Z          -leaf_node_body* cursor_value(Cursor* cursor);�   W   Y           �   V   X          ,void internal_node_split(uint32_t page_num);�   U   W          3void initialize_internal_node(internal_node* node);�   T   V          +void initialize_leaf_node(leaf_node* node);�   S   U          uint32_t get_unused_page_num();�   R   T          ?void deserialize_row(leaf_node_body* source, Row* destination);�   Q   S          =void serialize_row(Row* source, leaf_node_body* destination);�   P   R          #NodeType get_node_type(void* node);�   O   Q          Cursor* table_start();�   N   P          !Cursor* table_find(uint32_t key);�   M   O          void print_row(Row* row);�   L   N          &void pager_open(const char* filename);�   K   M          "void* get_page(uint32_t page_num);�   J   L           �   I   K          Euint32_t internal_node_find_child(internal_node* node, uint32_t key);�   H   J          <Cursor* internal_node_find(uint32_t page_num, uint32_t key);�   G   I          8Cursor* leaf_node_find(uint32_t page_num, uint32_t key);�   F   H           �   E   G          } internal_node;�   D   F              uint32_t rightest_child;�   C   E          5    internal_node_body body[INTERNAL_NODE_MAX_CELLS];�   B   D              uint32_t num_keys;�   A   C              uint32_t parent;�   @   B              bool is_root;�   ?   A              NodeType node_type;�   >   @          typedef struct {�   =   ?          } internal_node_body;�   <   >              uint32_t key;�   ;   =              uint32_t child;�   :   <          typedef struct {�   9   ;           �   8   :          } leaf_node;�   7   9          /    leaf_node_body values[LEAF_NODE_MAX_CELLS];�   6   8              uint32_t next_leaf;�   5   7              uint32_t num_cells;�   4   6              uint32_t parent;�   3   5              bool is_root;�   2   4              NodeType node_type;�   1   3          typedef struct {�   0   2          } leaf_node_body;�   /   1              char b[COLUMN_B_SIZE + 1];�   .   0              uint32_t a;�   -   /          typedef struct {�   ,   .          } Row;�   +   -              char b[COLUMN_B_SIZE + 1];�   *   ,              uint32_t a;�   )   +          typedef struct {�   (   *          '// the table struct specified in the PJ�   '   )          $// FIXME: test whether 500 is enough�   &   (          3typedef enum { NODE_INTERNAL, NODE_LEAF } NodeType;�   %   '          	} Cursor;�   $   &              bool is_end_of_table;�   #   %              uint32_t cell_num;�   "   $              uint32_t page_num;�   !   #              Table* table;�       "          typedef struct {�      !          } Table;�                     uint32_t root_page_num;�                    Pager pager;�                typedef struct {�                } Pager;�                !    Page* pages[TABLE_MAX_PAGES];�                    uint32_t num_pages;�                    uint32_t file_length;�                    int file_descriptor;�                typedef struct {�                } Page;�                    void* storage;�                    bool written;�                    int page_num;�                typedef struct {�                 �                4const uint32_t INTERNAL_NODE_RIGHT_SPLIT_SIZE = 250;�                3const uint32_t INTERNAL_NODE_LEFT_SPLIT_SIZE = 250;�                	// FIXME:�                0const uint32_t LEAF_NODE_LEFT_SPLIT_COUNT = 126;�                1const uint32_t LEAF_NODE_RIGHT_SPLIT_COUNT = 125;�   
             ##define INTERNAL_NODE_MAX_CELLS 500�   	             #define LEAF_NODE_MAX_CELLS 250�      
           �      	           const uint32_t PAGE_SIZE = 4096;�                L#define size_of_attribute(Struct, Attribute) sizeof(((Struct*)0)->Attribute)�                #define PAGE_MOD 500�                #define TABLE_MAX_PAGES 1000�                #define COLUMN_B_SIZE 11�                 �                #include <stdint.h>�                 #include <stdbool.h>�         [          int page_nuum;5�_�                           ����                                                                                                                                                                                                                                                                                                                                                    v        `�)�    �   Z   \           �   Y   [          &void leaf_node_delete(Cursor* cursor);�   X   Z          -leaf_node_body* cursor_value(Cursor* cursor);�   W   Y           �   V   X          ,void internal_node_split(uint32_t page_num);�   U   W          3void initialize_internal_node(internal_node* node);�   T   V          +void initialize_leaf_node(leaf_node* node);�   S   U          uint32_t get_unused_page_num();�   R   T          ?void deserialize_row(leaf_node_body* source, Row* destination);�   Q   S          =void serialize_row(Row* source, leaf_node_body* destination);�   P   R          #NodeType get_node_type(void* node);�   O   Q          Cursor* table_start();�   N   P          !Cursor* table_find(uint32_t key);�   M   O          void print_row(Row* row);�   L   N          &void pager_open(const char* filename);�   K   M          "void* get_page(uint32_t page_num);�   J   L           �   I   K          Euint32_t internal_node_find_child(internal_node* node, uint32_t key);�   H   J          <Cursor* internal_node_find(uint32_t page_num, uint32_t key);�   G   I          8Cursor* leaf_node_find(uint32_t page_num, uint32_t key);�   F   H           �   E   G          } internal_node;�   D   F              uint32_t rightest_child;�   C   E          5    internal_node_body body[INTERNAL_NODE_MAX_CELLS];�   B   D              uint32_t num_keys;�   A   C              uint32_t parent;�   @   B              bool is_root;�   ?   A              NodeType node_type;�   >   @          typedef struct {�   =   ?          } internal_node_body;�   <   >              uint32_t key;�   ;   =              uint32_t child;�   :   <          typedef struct {�   9   ;           �   8   :          } leaf_node;�   7   9          /    leaf_node_body values[LEAF_NODE_MAX_CELLS];�   6   8              uint32_t next_leaf;�   5   7              uint32_t num_cells;�   4   6              uint32_t parent;�   3   5              bool is_root;�   2   4              NodeType node_type;�   1   3          typedef struct {�   0   2          } leaf_node_body;�   /   1              char b[COLUMN_B_SIZE + 1];�   .   0              uint32_t a;�   -   /          typedef struct {�   ,   .          } Row;�   +   -              char b[COLUMN_B_SIZE + 1];�   *   ,              uint32_t a;�   )   +          typedef struct {�   (   *          '// the table struct specified in the PJ�   '   )          $// FIXME: test whether 500 is enough�   &   (          3typedef enum { NODE_INTERNAL, NODE_LEAF } NodeType;�   %   '          	} Cursor;�   $   &              bool is_end_of_table;�   #   %              uint32_t cell_num;�   "   $              uint32_t page_num;�   !   #              Table* table;�       "          typedef struct {�      !          } Table;�                     uint32_t root_page_num;�                    Pager pager;�                typedef struct {�                } Pager;�                     Page pages[TABLE_MAX_PAGES];�                    uint32_t num_pages;�                    uint32_t file_length;�                    int file_descriptor;�                typedef struct {�                } Page;�                    void* storage;�                    bool written;�                    int page_num;�                typedef struct {�                 �                4const uint32_t INTERNAL_NODE_RIGHT_SPLIT_SIZE = 250;�                3const uint32_t INTERNAL_NODE_LEFT_SPLIT_SIZE = 250;�                	// FIXME:�                0const uint32_t LEAF_NODE_LEFT_SPLIT_COUNT = 126;�                1const uint32_t LEAF_NODE_RIGHT_SPLIT_COUNT = 125;�   
             ##define INTERNAL_NODE_MAX_CELLS 500�   	             #define LEAF_NODE_MAX_CELLS 250�      
           �      	           const uint32_t PAGE_SIZE = 4096;�                L#define size_of_attribute(Struct, Attribute) sizeof(((Struct*)0)->Attribute)�                #define PAGE_MOD 500�                #define TABLE_MAX_PAGES 1000�                #define COLUMN_B_SIZE 11�                 �                #include <stdint.h>�                 #include <stdbool.h>�         [      !    Page* pages[TABLE_MAX_PAGES];5�_�                    [        ����                                                                                                                                                                                                                                                                                                                                                    v        `�*�     �   [            5�_�                    \        ����                                                                                                                                                                                                                                                                                                                                                    v        `�*�     �   [               5�_�                    ]        ����                                                                                                                                                                                                                                                                                                                                                    v        `�*�     �   ]            �   ]            5�_�                    ]        ����                                                                                                                                                                                                                                                                                                                                                    v        `�*�     �   \   ]           5�_�                    ]   %    ����                                                                                                                                                                                                                                                                                                                                                    v        `�*�     �   \              %void pager_flush(uint32_t page_num) {5�_�                     ]   $    ����                                                                                                                                                                                                                                                                                                                                                    v        `�*�    �   [            �   Z   \           �   Y   [          &void leaf_node_delete(Cursor* cursor);�   X   Z          -leaf_node_body* cursor_value(Cursor* cursor);�   W   Y           �   V   X          ,void internal_node_split(uint32_t page_num);�   U   W          3void initialize_internal_node(internal_node* node);�   T   V          +void initialize_leaf_node(leaf_node* node);�   S   U          uint32_t get_unused_page_num();�   R   T          ?void deserialize_row(leaf_node_body* source, Row* destination);�   Q   S          =void serialize_row(Row* source, leaf_node_body* destination);�   P   R          #NodeType get_node_type(void* node);�   O   Q          Cursor* table_start();�   N   P          !Cursor* table_find(uint32_t key);�   M   O          void print_row(Row* row);�   L   N          &void pager_open(const char* filename);�   K   M          "void* get_page(uint32_t page_num);�   J   L           �   I   K          Euint32_t internal_node_find_child(internal_node* node, uint32_t key);�   H   J          <Cursor* internal_node_find(uint32_t page_num, uint32_t key);�   G   I          8Cursor* leaf_node_find(uint32_t page_num, uint32_t key);�   F   H           �   E   G          } internal_node;�   D   F              uint32_t rightest_child;�   C   E          5    internal_node_body body[INTERNAL_NODE_MAX_CELLS];�   B   D              uint32_t num_keys;�   A   C              uint32_t parent;�   @   B              bool is_root;�   ?   A              NodeType node_type;�   >   @          typedef struct {�   =   ?          } internal_node_body;�   <   >              uint32_t key;�   ;   =              uint32_t child;�   :   <          typedef struct {�   9   ;           �   8   :          } leaf_node;�   7   9          /    leaf_node_body values[LEAF_NODE_MAX_CELLS];�   6   8              uint32_t next_leaf;�   5   7              uint32_t num_cells;�   4   6              uint32_t parent;�   3   5              bool is_root;�   2   4              NodeType node_type;�   1   3          typedef struct {�   0   2          } leaf_node_body;�   /   1              char b[COLUMN_B_SIZE + 1];�   .   0              uint32_t a;�   -   /          typedef struct {�   ,   .          } Row;�   +   -              char b[COLUMN_B_SIZE + 1];�   *   ,              uint32_t a;�   )   +          typedef struct {�   (   *          '// the table struct specified in the PJ�   '   )          $// FIXME: test whether 500 is enough�   &   (          3typedef enum { NODE_INTERNAL, NODE_LEAF } NodeType;�   %   '          	} Cursor;�   $   &              bool is_end_of_table;�   #   %              uint32_t cell_num;�   "   $              uint32_t page_num;�   !   #              Table* table;�       "          typedef struct {�      !          } Table;�                     uint32_t root_page_num;�                    Pager pager;�                typedef struct {�                } Pager;�                     Page pages[TABLE_MAX_PAGES];�                    uint32_t num_pages;�                    uint32_t file_length;�                    int file_descriptor;�                typedef struct {�                } Page;�                    void* storage;�                    bool written;�                    int page_num;�                typedef struct {�                 �                4const uint32_t INTERNAL_NODE_RIGHT_SPLIT_SIZE = 250;�                3const uint32_t INTERNAL_NODE_LEFT_SPLIT_SIZE = 250;�                	// FIXME:�                0const uint32_t LEAF_NODE_LEFT_SPLIT_COUNT = 126;�                1const uint32_t LEAF_NODE_RIGHT_SPLIT_COUNT = 125;�   
             ##define INTERNAL_NODE_MAX_CELLS 500�   	             #define LEAF_NODE_MAX_CELLS 250�      
           �      	           const uint32_t PAGE_SIZE = 4096;�                L#define size_of_attribute(Struct, Attribute) sizeof(((Struct*)0)->Attribute)�                #define PAGE_MOD 500�                #define TABLE_MAX_PAGES 1000�                #define COLUMN_B_SIZE 11�                 �                #include <stdint.h>�                 #include <stdbool.h>�   [   \              %void pager_flush(uint32_t page_num) ;�   \              $void pager_flush(uint32_t page_num) 5�_�                             ����                                                                                                                                                                                                                                                                                                                                                             `�#�     �          U      '#include <stdbool.h>#include <stdint.h>5��