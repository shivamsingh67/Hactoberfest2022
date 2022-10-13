bool isAnagram(string s, string t) {

    if(s.length() != t.length())
       return false;

     int i=0;
     int j=0;
    
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    
    while(i<s.length() && j<t.length()){
        
         if(s[i] != t[j])
             return false;
        
        i++;
        j++;
        
    }
    
    return true;
}
