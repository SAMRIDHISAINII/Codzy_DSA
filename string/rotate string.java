class Solution {
    public boolean rotateString(String A, String B) {
        if (A == null || B == null || A.length() != B.length()) {
            return false;
        }
        if (A.equals(B)) {
            return true;
        }
        // move characters, one at a time, and compare
        StringBuffer sb = new StringBuffer(A);
        for (char c : A.toCharArray()) {
            sb.deleteCharAt(0);
            sb.append(c);
            if (sb.toString().equals(B)) {
                return true;
            }
        }
        return false;
    }
}
