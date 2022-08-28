/*Given a string str containing only lower case alphabets, the task is to sort it in lexicographically-descending order.*/
https://practice.geeksforgeeks.org/problems/sort-the-string-in-descending-order3542/1
string ReverseSort(string str){
    //complete the function here
    int frequency[26];
    memset(frequency,0,sizeof(frequency));
    
    for(char &c:str)
    {
        frequency[c-'a']++;
    }
    int i=0;
    for(int j=25;j>=0;j--)
    {
        while(frequency[j]>0)
        {
            frequency[j]--;
            str[i++]=j+'a';
        }
    }
    return str;
}
