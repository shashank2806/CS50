import nltk

class Analyzer():
    """Implements sentiment analysis."""

    def __init__(self, positives, negatives):
        """Initialize Analyzer."""
        global p_word
        global n_word
        with open(positives) as f:
            p_word = f.readlines()
        p_word = [x.strip() for x in p_word] 
        for word in p_word[:]:
	        if word.startswith(";"):
		        p_word.remove(word)
		        
        with open(negatives) as f:
            n_word = f.readlines()
        n_word = [x.strip() for x in n_word] 
        for word in n_word[:]:
	        if word.startswith(";"):
		        n_word.remove(word)
		        
        self.positives = p_word
        self.negatives = n_word
        

    def analyze(self, text):
        """Analyze text for sentiment, returning its score."""

        for word in p_word:
            if text == word:
                return 1
            
        for word in n_word:
            if text == word:
                return -1
            
        return 0