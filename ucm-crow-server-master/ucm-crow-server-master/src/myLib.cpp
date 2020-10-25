#include <myLib.h>
#include <algorithm>

std::vector<std::string> readWordsFile(std::string filename){
    std::ifstream file(filename);
    std::string str; 

    std::vector<std::string> words;

    while (std::getline(file, str)){
        words.push_back(boost::to_upper_copy(str));
        
    }

    return words;
}

ucm::json checkWord(std::string word){

    ucm::json x;

    x["word"] = word;
    x["valid"] = true;

    
    return x;
}

 ucm::json getList(){
     ucm::json result;
     result.push_back('A');
     result.push_back('B');
     result.push_back('C');
     result.push_back('D');
     result.push_back('E');
     result.push_back('F');
     result.push_back('G');
     result.push_back('H');
     result.push_back('I');

     return result;
 }

std::vector<std::string> powerset(std::string str){
    if (str.size() == 0){
        std::vector<std::string> result;
        result.push_back("");

        return result;
    }
    else{
        char head = str[0];
        std::string tail;
        tail = str.substr (1,std::string::npos);

        std::vector<std::string> res = powerset(tail);
        std::vector<std::string> ans = res;

        for (auto element : res){
            std::string temp = element;
            temp.insert(temp.begin(), head);
            ans.push_back(temp);
        }

        return ans;
    }
}

void permute(std::string a, int l, int r, std::vector<std::string>& results) {

    if (l == r)  {
        results.push_back(a);
    }  
    else {  
        for (int i = l; i <= r; i++) {   
            char temp = a[l];
            a[l] = a[i];
            a[i] = temp;
             
            permute(a, l+1, r, results);  

            temp = a[l];
            a[l] = a[i];
            a[i] = temp;  
        }  
    }  
}  


