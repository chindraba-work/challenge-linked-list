/*
 * MIT License
 *
 * Copyright ©2018 Ronald Lamoreaux
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    void *data;             // pointer to what this node should hold
    struct ListNode *next;  // pointer to the next node in the list
    /*
     *  +------+------+
     *  |      |      |
     *  | data |   ------>
     *  |      |      |
     *  +------+------+
     *
     */
};

void walkList(struct ListNode *head, void (*display_proc)()) {
    /*
     * head: the current head_node of the list
     * *display_proc: pointer to the procedure to display whatever is
     *    held in the memory pointed to by the data field
     */
    struct ListNode *curr_node = head;
    /*
     *   head_node ----->+
     *                   |
     *     +-------------+
     *     |<------------- curr_node
     *     V
     *  +------+------+
     *  |      |      |
     *  | NULL |   ----->+
     *  |      |      |  |
     *  +------+------+  |
     *                   |
     *     +-------------+
     *     |
     *     V
     *  +------+------+
     *  |      |      |
     *  | data |   ----->+
     *  |      |      |  |
     *  +------+------+  |
     *                   |
     *     +-------------+
     *     |
     *     V
     *  +------+------+
     *  |      |      |
     *  | data |   ------> NULL
     *  |      |      |
     *  +------+------+
     */
    while (curr_node->next != NULL) {
        (display_proc)(curr_node->next->data);
        curr_node = curr_node->next;
    /*
     *   head_node ----->+
     *                   |
     *     +-------------+
     *     |
     *     V
     *  +------+------+
     *  |      |      |
     *  | NULL |   ----->+
     *  |      |      |  |
     *  +------+------+  |
     *                   |
     *     +-------------+
     *     |<------------- curr_node
     *     V
     *  +------+------+
     *  |      |      |
     *  | data |   ----->+
     *  |      |      |  |
     *  +------+------+  |
     *                   |
     *     +-------------+
     *     |
     *     V
     *  +------+------+
     *  |      |      |
     *  | data |   ------> NULL
     *  |      |      |
     *  +------+------+
     */
    }
    /*
     *   head_node ----->+
     *                   |
     *     +-------------+
     *     |
     *     V
     *  +------+------+
     *  |      |      |
     *  | NULL |   ----->+
     *  |      |      |  |
     *  +------+------+  |
     *                   |
     *     +-------------+
     *     |
     *     V
     *  +------+------+
     *  |      |      |
     *  | data |   ----->+
     *  |      |      |  |
     *  +------+------+  |
     *                   |
     *     +-------------+
     *     |<------------- curr_node
     *     V
     *  +------+------+
     *  |      |      |
     *  | data |   ------> NULL
     *  |      |      |
     *  +------+------+
     */
}

int main() {
    // create the forever empty head node
    struct ListNode* head_node = NULL;
    //  head_node ------> ??
    head_node = (struct ListNode*)malloc(sizeof(struct ListNode));
    /*
     *   head_node ----->+
     *                   |
     *     +-------------+
     *     |
     *     V
     *  +------+------+
     *  |      |      |
     *  |  ??  |   ------> ??
     *  |      |      |
     *  +------+------+
     *
     */
    // make it point nowhere, start with an empty list
    head_node->next = NULL;
    /*
     *   head_node ----->+
     *                   |
     *     +-------------+
     *     |
     *     V
     *  +------+------+
     *  |      |      |
     *  |  ??  |   ------> NULL
     *  |      |      |
     *  +------+------+
     *
     */
    // make the data explicitly NULL for safety
    head_node->data = NULL;
    /*
     *   head_node ----->+
     *                   |
     *     +-------------+
     *     |
     *     V
     *  +------+------+
     *  |      |      |
     *  | NULL |   ------> NULL
     *  |      |      |
     *  +------+------+
     *
     */
    return 0;
}
