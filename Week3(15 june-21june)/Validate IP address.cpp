class Solution {
public:
    string validIPAddress(string IP) {
        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        istringstream is(IP);
        string s="";
        int cnt=0;
        if(IP.find(':')==string::npos){
            while(getline(is,s,'.')){
                cnt++;
                if(cnt>4||s.size()>3||s.empty()||(s.size()>1 && s[0]=='0' )) return "Neither";
                for(char c:s)
                    if(c<'0' || c>'9') return "Neither";
                int x=stoi(s);
                if(x<0 || x>255) return "Neither";
        }
            return (cnt==4 && IP.back()!='.')?"IPv4":"Neither";
    }else{
            while(getline(is,s,':')){
                cnt++;
                if(cnt>8||s.size()>4||s.empty() )return "Neither";
                for(char c:s)
                    if(!(c >= '0' && c <= '9') && !(c >= 'a' && c <= 'f') && !(c >= 'A' && c <= 'F')) return "Neither";
        }
            return (cnt==8 && IP.back()!=':')?"IPv6":"Neither";
        }
    }
};
