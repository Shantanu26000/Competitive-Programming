  int total_voters;
    cout<<"Total Voters :"<<'\n';
    cin>>total_voters;
    cout<<"Votes"<<'\n';
    vector<char>votes;
    char ch;
    while(cin>>ch){
        votes.push_back(ch);
    }
    int n = votes.size();
    cout<<n<<'\n';