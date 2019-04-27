/*
 * Copyright (c) 2018, ivan_allen@163.com 
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * * Redistributions of source code must retain the above copyright notice, this
 *   list of conditions and the following disclaimer.
 *
 * * Redistributions in binary form must reproduce the above copyright notice, this
 *   list of conditions and the following disclaimer in the documentation and/or
 *   other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <binary_tree.h>

using namespace mars::ds;

using Tree = BinaryTree<int>;

int main() {
    Tree tree({15, 6, 18, 3, 8, 17, 20, 2, 4, {}, 13, 
            {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, 9});

    std::string tree_graph = R"(  
                           15
                        /     \
                      /         \
                     6           18
                   /   \       /    \
                  3     8     17    20
                /   \     \
               2     4     13
                          /
                         9
    )"; 

    std::cout << tree_graph << std::endl;
    std::cout << tree << std::endl << std::endl;

    // 经过旋转后，变成向左延展的链
    tree.left_rotate(3);
    tree.right_rotate(13);
    tree.right_rotate(18);

    tree.left_rotate(6);
    tree.left_rotate(8);
    tree.left_rotate(9);
    tree.left_rotate(15);
    tree.left_rotate(17);
    tree.left_rotate(18);

    std::cout << tree << std::endl << std::endl;
}