#include <bits/stdc++.h>
using namespace std;

typedef struct irisData{
    float a[4];
    int b;
}data;

void inputData(vector<data> &arr,float d[], char *s){
    data inp;
    inp.a[0] = d[0]; inp.a[1] = d[1]; inp.a[2] = d[2]; inp.a[3] = d[3];
    if(!strcmp(s,"Iris-setosa")) inp.b = 0;
    else if(!strcmp(s,"Iris-versicolor")) inp.b = 1;
    else inp.b = 2;
    arr.push_back(inp);
}

int max(int a,int b, int c){
    if(a>b && a>c) return 0;
    else if(b>a && b>c) return 1;
    else return 2;
}

void training(vector<data> trainedData, vector<data> testData, int k){
    float accuracy=0; int c1=0,c2=0,c3=0; float a[4];
    for(int i=0;i<testData.size();i++){
        vector<pair<float,int> > distance;
        for(int j=0;j<trainedData.size();j++){
            a[0] = pow(trainedData[j].a[0]-testData[i].a[0],2);
            a[1] = pow(trainedData[j].a[1]-testData[i].a[1],2);
            a[2] = pow(trainedData[j].a[2]-testData[i].a[2],2);
            a[3] = pow(trainedData[j].a[3]-testData[i].a[3],2);
            distance.push_back(make_pair(sqrt(a[0]+a[1]+a[2]+a[3]),trainedData[j].b));
        }
        sort(distance.begin(),distance.end());
        for(int l=0;l<k;l++){
            if(distance[l].second == 0) c1++;
            else if(distance[l].second == 1) c2++;
            else c3++;
        }
        if(max(c1,c2,c3) == testData[i].b) accuracy += 1;
    }
    cout << (accuracy/testData.size()) *100 << endl;
}

int main(){
    FILE *fp;
    float a[4];
    vector<data> trainingData;
    vector<data> testData;
    int c=1;
    char str[30];
    fp = freopen("data.txt","r",stdin);
    while(scanf("%f,%f,%f,%f,%s",&a[0],&a[1],&a[2],&a[3],str) != EOF){
        if(c<=40)
            inputData(trainingData,a,str);
        else
            inputData(testData,a,str);
        if((++c)%51 == 0)
            c = 1;
    }
    training(trainingData,testData,84);
    return 0;
}
