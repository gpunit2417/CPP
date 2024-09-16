//code studio
string replaceSpaces(string &str){
    string temp = "";
    for(int i=0; i<str.length(); i++){
        if(str[i] == ' '){
            temp.push_back('@');
            temp.push_back('3');
            temp.push_back('0');
        }
        else{
            temp.push_back(str[i]);
        }
    }
}