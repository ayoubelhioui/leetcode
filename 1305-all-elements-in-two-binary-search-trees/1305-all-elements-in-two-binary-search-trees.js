/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root1
 * @param {TreeNode} root2
 * @return {number[]}
 */

var travelIntoTree = function(root, arr) {
    if (root === null)
        return ;
    arr.push(root.val);
    travelIntoTree(root.left, arr);
    travelIntoTree(root.right, arr);
    
}

var getAllElements = function(root1, root2) {
    let arr = [];
    travelIntoTree(root1, arr);
    travelIntoTree(root2, arr);
    return (arr.sort((a, b) => a-b));
};