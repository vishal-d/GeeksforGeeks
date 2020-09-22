class Solution:
	def firstAlphabet(self, S):
		# code here
	    result=""
	    thislist = S.split()
	    for word in thislist:
	        result=result+word[0]
	        
	    return result
