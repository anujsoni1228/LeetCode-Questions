# Longest K unique characters substring
## Medium
<div class="problems_problem_content__Xm_eO" data-pf_style_display="block" data-pf_style_visibility="visible"><p data-pf_style_display="block" data-pf_style_visibility="visible"><span style="font-size:18px" data-pf_style_display="inline" data-pf_style_visibility="visible">Given a string you need to print the size of the longest possible substring that has exactly K&nbsp;unique characters. If there is no possible substring then print -1.</span></p>

<p data-pf_style_display="block" data-pf_style_visibility="visible"><br data-pf_style_display="inline" data-pf_style_visibility="visible">
<span style="font-size:18px" data-pf_style_display="inline" data-pf_style_visibility="visible"><strong data-pf_style_display="inline" data-pf_style_visibility="visible">Example 1:</strong></span></p>

<pre data-pf_style_display="block" data-pf_style_visibility="visible"><span style="font-size:18px" data-pf_style_display="inline" data-pf_style_visibility="visible"><strong data-pf_style_display="inline" data-pf_style_visibility="visible">Input:</strong>
S = "aabacbebebe</span><span style="font-size:18px" data-pf_style_display="inline" data-pf_style_visibility="visible">", K = 3
<strong data-pf_style_display="inline" data-pf_style_visibility="visible">Output:</strong> 7
<strong data-pf_style_display="inline" data-pf_style_visibility="visible">Explanation</strong>: "cbebebe" is the longest 
substring with K distinct characters.
</span></pre>

<p data-pf_style_display="block" data-pf_style_visibility="visible"><span style="font-size:18px" data-pf_style_display="inline" data-pf_style_visibility="visible"><strong data-pf_style_display="inline" data-pf_style_visibility="visible">Example 2:</strong></span></p>

<pre data-pf_style_display="block" data-pf_style_visibility="visible"><span style="font-size:18px" data-pf_style_display="inline" data-pf_style_visibility="visible"><strong data-pf_style_display="inline" data-pf_style_visibility="visible">Input</strong>: 
S = "aaaa", K = 2
<strong data-pf_style_display="inline" data-pf_style_visibility="visible">Output:</strong> -1
<strong data-pf_style_display="inline" data-pf_style_visibility="visible">Explanation</strong>: There's no substring with K
distinct characters.
</span></pre>

<p data-pf_style_display="block" data-pf_style_visibility="visible"><br data-pf_style_display="inline" data-pf_style_visibility="visible">
<span style="font-size:18px" data-pf_style_display="inline" data-pf_style_visibility="visible"><strong data-pf_style_display="inline" data-pf_style_visibility="visible">Your Task:</strong><br data-pf_style_display="inline" data-pf_style_visibility="visible">
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong data-pf_style_display="inline" data-pf_style_visibility="visible">longestKSubstr()&nbsp;</strong>which takes the string S and an integer K as input and returns the length of the longest substring with exactly K&nbsp;distinct characters. If there is no substring with exactly K distinct characters then return -1.</span></p>

<p data-pf_style_display="block" data-pf_style_visibility="visible"><br data-pf_style_display="inline" data-pf_style_visibility="visible">
<span style="font-size:18px" data-pf_style_display="inline" data-pf_style_visibility="visible"><strong data-pf_style_display="inline" data-pf_style_visibility="visible">Expected Time Complexity:&nbsp;</strong>O(|S|).<br data-pf_style_display="inline" data-pf_style_visibility="visible">
<strong data-pf_style_display="inline" data-pf_style_visibility="visible">Expected Auxiliary Space:&nbsp;</strong>O(|S|).</span></p>

<p data-pf_style_display="block" data-pf_style_visibility="visible"><br data-pf_style_display="inline" data-pf_style_visibility="visible">
<span style="font-size:18px" data-pf_style_display="inline" data-pf_style_visibility="visible"><strong data-pf_style_display="inline" data-pf_style_visibility="visible">Constraints:</strong><br data-pf_style_display="inline" data-pf_style_visibility="visible">
1 ≤ |S| ≤ 10<sup data-pf_style_display="inline" data-pf_style_visibility="visible">5</sup><br data-pf_style_display="inline" data-pf_style_visibility="visible">
1 ≤ K ≤ 10<sup data-pf_style_display="inline" data-pf_style_visibility="visible">5</sup><br data-pf_style_display="inline" data-pf_style_visibility="visible">
All characters are lowercase latin characters.</span></p>
</div>