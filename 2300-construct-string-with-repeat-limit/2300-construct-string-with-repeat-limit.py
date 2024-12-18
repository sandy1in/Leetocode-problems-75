class Solution:
    def repeatLimitedString(self, s: str, repeatLimit: int) -> str:
        freq = [0] * 26
        for c in s:
            freq[ord(c) - ord('a')] += 1

        result = []
        for i in range(25, -1, -1):
            while freq[i] > 0:
                count = min(freq[i], repeatLimit)
                result.extend([chr(i + ord('a'))] * count)
                freq[i] -= count

                if freq[i] > 0:
                    j = i - 1
                    while j >= 0 and freq[j] == 0:
                        j -= 1
                    if j < 0:
                        return ''.join(result)
                    result.append(chr(j + ord('a')))
                    freq[j] -= 1

        return ''.join(result)
