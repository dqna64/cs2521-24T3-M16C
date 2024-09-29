#include "bst.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * Run command:
 *    $ clang bst_count_odds.c bst.c && ./a.out
 *
 */

int bstCountOdds(struct node *t) {
  if (t == NULL) {
    return 0;
  } else if (t->value % 2 != 0) {
    return 1 + bstCountOdds(t->left) + bstCountOdds(t->right);
  } else {
    return bstCountOdds(t->left) + bstCountOdds(t->right);
  }
}

int main(void) {
  TreeNode tree = NULL;
  tree = bstInsert(tree, 7);
  tree = bstInsert(tree, 2);
  tree = bstInsert(tree, 9);
  tree = bstInsert(tree, 1);
  tree = bstInsert(tree, 5);
  tree = bstInsert(tree, 8);
  tree = bstInsert(tree, 10);
  tree = bstInsert(tree, 4);
  bstShow(tree);

  int numOddNodes = bstCountOdds(tree);
  printf("Number of odd nodes in BST: %d\n", numOddNodes); // should be 4
}