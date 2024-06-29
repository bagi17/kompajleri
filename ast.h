#ifndef AST_H
#define AST_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef enum {
    AST_INT, AST_DBL, AST_BOOL, AST_STR, AST_ID, AST_ASSIGN, AST_INT_ID, AST_DBL_ID, AST_BOOL_ID, AST_STR_ID, //izrazi
    AST_PLUS, AST_MINUS, AST_MULT, AST_DIV, AST_MOD, AST_LESS, AST_LESS_EQ, AST_GRT, AST_GRT_EQ, AST_NOT, AST_OR, 
    AST_AND, AST_NOT_EQ, AST_EQ_EQ, AST_EQ,             //znakovi
    AST_IF, AST_WHILE, AST_FOR, AST_FOR_EXP, AST_SEQ, AST_IF_ELSE, AST_RETURN, AST_BRANCH                                                                                       //petlje
} ASTNodeType;


typedef struct ASTNode {
    ASTNodeType type;
    char* value;
    struct ASTNode* left;
    struct ASTNode* right;
    struct ASTNode* next;
} ASTNode;

// Funkcija za kreiranje novog čvora
ASTNode* create_node(ASTNodeType type, char* value, ASTNode* left, ASTNode* right, ASTNode* next) {
    ASTNode* node = (ASTNode*)malloc(sizeof(ASTNode));
    node->type = type;
    node->value = value ? strdup(value) : NULL;
    node->left = left;
    node->right = right;
    node->next = next;
    return node;
}

void print_type(ASTNodeType type){
    switch (type)
    {
     case AST_INT:
        printf("Int value:");
        break;
     case AST_DBL:
        printf("Double value:");
        break;
     case AST_BOOL:
        printf("Bool value:");
        break;
     case AST_STR:
        printf("String value:");
        break;
     case AST_ID:
        printf("Identifier :");
        break;
     case AST_ASSIGN:
        printf("Assign :");
        break;
     case AST_INT_ID:
        printf("Int identifier :");
        break;
     case AST_DBL_ID:
        printf("Double indentifier :");
        break;
     case AST_BOOL_ID:
        printf("Bool  indentifier:");
        break;
     case AST_STR_ID:
        printf("String indentifier :");
        break;
      case AST_PLUS:
        printf("Plus :");
        break;
      case AST_MINUS:
        printf("Minus :");
        break;
      case AST_MULT:
        printf("Mult :");
        break;
      case AST_DIV:
        printf("Div :");
        break;
      case AST_MOD:
        printf("Mod :");
        break;
      case AST_LESS:
        printf("Less :");
        break;
      case AST_LESS_EQ:
        printf("Less equal :");
        break;
      case AST_GRT:
        printf("Greater :");
        break;
      case AST_GRT_EQ:
        printf("Greater than :");
        break;
      case AST_NOT:
        printf("Not :");
        break;
      case AST_OR:
        printf("Or :");
        break;
      case AST_AND:
        printf("And :");
        break;
      case AST_NOT_EQ:
        printf("Not equal :");
        break;
      case AST_EQ_EQ:
        printf("Eqaul equal :");
        break;
      case AST_EQ:
        printf("Eqaul :");
        break;
      case AST_IF:
        printf("If :");
        break;
      case AST_WHILE:
        printf("While :");
        break;
      case AST_FOR:
        printf("For :");
        break;
      case AST_FOR_EXP:
        printf("For expression :");
        break;
      case AST_SEQ:
        printf("Seq :");
        break;
      case AST_IF_ELSE:
        printf("If else :");
        break;
      case AST_RETURN:
        printf("Return :");
        break;
      case AST_BRANCH:
        printf("Branch :");
        break;
    default:
        printf("Nepoznati scenario :");
        break;
    }

}

void print_ident(int depth){
 for (int i = 0; i < depth; ++i) 
    printf("  ");
}

// Funkcija za štampanje AST-a
void print_ast(ASTNode* node, int depth) {
    if (node == NULL) return;
    print_ident(depth);
    print_type(node->type);
    if (node->value) printf(" %s", node->value);
    printf("\n");
    print_ast(node->left, depth + 1);
    print_ast(node->right, depth + 1);
    print_ast(node->next, depth);
}

#endif