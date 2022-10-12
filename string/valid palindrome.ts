function isPalindrome(s: string): boolean {
 // prep the string: convert to single case and replace all non-alphanumerics.
    s = s.toLowerCase();
    s = s.replace(/[^a-z0-9]/g, "");

    // by the rules displayed, an empty string is a palindrome.
    if (s === "") {
        return true;
    }

    // we will create a 'front' pointer and a 'back' pointer
    // and meet in the middle. if the front matches the back
    // we have a palindrome.
    const len = s.length;
    let front = 0;
    let back = len - 1;
    while (front < back) {
        if (s[front] !== s[back]) {
            return false;
        }
        front++;
        back--;
    }
    return true;
};
