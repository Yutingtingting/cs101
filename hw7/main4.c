int main(){
    int i=201;
    int j;
    j=i-i%10-((i/1000)%10)*1000+((i/1000))%10+(i%10)*1000;
    printf("%d",j);
    return 0;
    
}
