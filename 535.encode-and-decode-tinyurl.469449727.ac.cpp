/*
 * @lc app=leetcode id=535 lang=cpp
 *
 * [535] Encode and Decode TinyURL
 */

// @lc code=start
class Solution {
public:

    // Encodes a URL to a shortened URL.
    hash<string> hashing;
    unordered_map<string, string> table;
    string encode(string longUrl) {
        table[to_string(hashing(longUrl))] = longUrl;
        return to_string(hashing(longUrl));
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return table[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));
// @lc code=end
