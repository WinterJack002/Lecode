// 替换数字
 
int main(){
    string s;
    while(cin>>s){
        int oldIndex=s.size()-1;
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]>='0'&&s[i]<='9'){
                count ++;
            }
        }
        s.resize(s.size()+count+5);
        int newIndex=s.size()-1;

        while(oldIndex>0){
            if(s[oldIndex]>='0'&&s[oldIndex]<='9'){
                s[newIndex--]='r';
                s[newIndex--]='e';
                s[newIndex--]='b';
                s[newIndex--]='m';
                s[newIndex--]='u';
                s[newIndex--]='n';
            }
            else{
                s[newIndex--]=s[oldIndex];
            }
            oldIndex--;
        }
        // return s;
    }
}