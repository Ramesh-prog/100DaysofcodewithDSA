// Input: s = ["h","e","l","l","o"]
// Output: ["o","l","l","e","h"]

void reverseString(char* s, int Size)
{
	if(Size<=1)
		return;
    
	// swap(s[0],s[Size-1]);
    char t=s[0];
    s[0]=s[Size-1];
    s[Size-1]=t;

	reverseString(s+1,Size-2);
}