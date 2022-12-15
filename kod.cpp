//Wienczyslaw Wlodyga
#include <string>
using namespace std;
string NajwiekszeSlowo(string stringArgument){
    int wordCount=0;
    int wordCount_temp=0;
    for(int i=0; i<stringArgument.size(); i++){
        if(stringArgument[i]==' ')wordCount++;
    }
    string stringArray[wordCount+1];
    for(int i=0; i<wordCount+1; i++){
        stringArray[i]="";
    }
    for(int i=0; i<stringArgument.size(); i++){
        if(stringArgument[i]!=' '){
            stringArray[wordCount_temp]+=stringArgument[i];
            if(stringArgument[i+1]==' ')wordCount_temp++;
        }
    }
    string largest=stringArray[0];
    for(int i=0; i<wordCount+1; i++){
        if(stringArray[i]>=largest)largest=stringArray[i];
    }
    return largest;
    }
string UsunSlowo(string stringArgument, unsigned int wordNumber){

}

