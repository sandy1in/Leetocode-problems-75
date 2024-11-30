class Solution {
    /**
     * @param Integer[][] $pairs
     * @return Integer[][]
     */
    function validArrangement($pairs) {
        $adj = [];
        $indegree = [];
        $ans = [];

        foreach ($pairs as [$u, $v]) {
            $adj[$u][] = $v;
            $indegree[$u] = ($indegree[$u] ?? 0) + 1;
            $indegree[$v] = ($indegree[$v] ?? 0) - 1;
        }

        $start = array_key_first($adj);
        foreach ($indegree as $node => $degree) {
            if ($degree > 0) {
                $start = $node;
                break;
            }
        }

        $this->dfs($start, $adj, $ans);

        return array_reverse($ans);
    }

    private function dfs($node, &$adj, &$ans) {
        while (!empty($adj[$node])) {
            $next = array_pop($adj[$node]);
            $this->dfs($next, $adj, $ans);
            $ans[] = [$node, $next]; 
        }
    }
}
