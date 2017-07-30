import nltk

class Analyzer():
    """Implements sentiment analysis."""

    def __init__(self, positives, negatives):
        """Initialize Analyzer."""

        with open(positives) as f:
            self.positives = f.readlines()
        self.positives = [x.strip() for x in self.positives] 
        for word in self.positives[:]:
	        if word.startswith(";"):
		        self.positives.remove(word)
		        
        with open(negatives) as f:
            self.negatives = f.readlines()
        self.negatives = [x.strip() for x in self.negatives] 
        for word in self.negatives[:]:
	        if word.startswith(";"):
		        self.negatives.remove(word)

        

    def analyze(self, text):
        """Analyze text for sentiment, returning its score."""
        text = text.lower()
        score = 0
        tokenizer = nltk.tokenize.TweetTokenizer()
        tokens = tokenizer.tokenize(text)
        for token in tokens:
            for word in self.positives:
                if token == word:
                    score += 1
                
            for word in self.negatives:
                if token == word:
                    score -= 1
            
        return score