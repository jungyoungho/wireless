#include <iostream>
#include <pcap.h>
#include <arpa/inet.h>
#include "radio.h"

using namespace std;

void makedata(struct pcap_pkthdr *pkthdr,const u_char *packet)
{
    struct radiotap_header *rh = (struct radiotap_header*)packet;
    packet += rh->header_len;
    struct ieee80211_common *c = (struct ieee80211_common *)packet;

    if(c->Sutype == 8) //case fix
    {
        cout << "beacon come on"<<endl;
    }

}
