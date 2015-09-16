dv8coin (dv8)
===========
###Description
Litecoin knock off, "dv8coin" is used for personal experiments concerning blockchain technology. Testnet up, source was taken from the foocoin repository credited to Shakezula on the public github.

- Programming/Math/Design - Justin Chase
- Economics/Math/Design/Website - Patrick Multauph
- Quality Assurance - Reid Brown


###Screenshot:
![alt text](http://i.imgur.com/hEmFLlV.png "dv8coin screenshot")

###Build Steps
####*nix
#####GUI
--------
* qmake "USE_UPNP=-" dv8coin.pro
* make -f Makefile
*  ./dv8coin -testnet -connect="testnet node soon"
 
######Headless
--------
* cd src
* make -f makefile.unix
* ./dv8coind -testnet  -connect="testnet node soon"

####OSX 
* Coming Soon

####Windows
* Coming Soon
