/*
 * [58] Length of Last Word
 *
 * https://leetcode.com/problems/length-of-last-word
 *
 * Easy (31.62%)
 * Total Accepted:
 * Total Submissions:
 * Testcase Example:  '""'
 *
 * Given a string s consists of upper/lower-case alphabets and empty space
 * characters ' ', return the length of last word in the string.
 *
 * If the last word does not exist, return 0.
 *
 * Note: A word is defined as a character sequence consists of non-space
 * characters only.
 *
 *
 * For example,
 * Given s = "Hello World",
 * return 5.
 *
 */
class Solution {
 public:
  int lengthOfLastWord(string s) {
    int i = s.size() - 1;
    int result = 0;
    // eat space
    while (i >= 0 && s[i] == ' ') {
      i--;
    }
    // count
    while (i >= 0 && s[i] != ' ') {
      i--;
      result++;
    }
    return result;
  }
};
