/*========================================
 *    sl.h: SL version 5.02
 *	Copyright 1993,2002,2014
 *                Toyoda Masashi
 *		  (mtoyoda@acm.org)
 *	Last Modified: 2014/06/03
 *========================================
 */

#define SEAL_HEIGHT	50
#define SEAL_LENGTH	210

#define S00 ":;::cc:::::::ccccccc::cclllllcclllcc:ccccccccclllccllolcccccccccclllccllllollllccccccccclccccccccccc::::::::::::::::::::;;;;;,,,;;;;;;;,,,,,,,,,,,,,,,,,,,,,,,,''''',,,,,,,,,;;;;;;;,,,;;;;;;,,;;;;;;;;::,...';;;: "
#define S01 ";;::cc::::::ccccc::::::cllllllllllcc:::::::ccccccclllllllllllllccllcccclllolllccccccccccccclccccccc:::::::::::::::::::;;,,,,,,,,;;;;;,,,'''',,,,,,,,,,,;;;;;;,,'''',,,,,,,,,;;;;;;;;;;;;;;;;;,,;;;;;;;:::;,,;;;::: "
#define S02 ":;::::::::::::::::::;:::ccccccccccc::;;;;;:::::::ccccccclllllcclllccccclloolccccccccccllllllllcccllclllllcc:::::::::::;,'''',;;;;;,,''.....'',,,,,,,,,,,;;,,,'''''',,,;;,,;;;;:;;;;;;;;;;;;;;;;;;;;;::::;;,,;;;;;: "
#define S03 ":;;::::::;;;;;:::::::::::ccllolc::::::::::::::::::::::ccccccccclllccllllllllccccccccclllllllodxkO000000000OOxdl:::::::;,''',;;::;;,'...''',;;:;;;;;;,,''''''.....'',,;;;;;;::::::::;;;;;;::;;;;;;;;;:::::;;,;;:::: "
#define S04 ";::::::::;;;;::ccccc:c::::ccllllc:::::cclccccccccccc::::::cccccccccclllllcccccllllccccllodkO00OOOOkkOkkkkkOOO00kdc:::::;;;;;:::clcccloxxxkOOkOkkxxkxxxdoool:::;,,,'',;:;;;;:::::::::;;;:::;;;;;;;;:::::::::;:::::: "
#define S05 ":::::::::::;;::ccclllllcccccccccc:::::cclcccccccccc:::;;;::::::::cccccccccclllllllllloxkOOOOkkkkxxdddxxddodddxkkOOdllloodxxxkOO000KKKKKKKKKKKKKKKKKKKKKKKKK000000Oxddxxdddooooccc::::::::::;;::;::;;,,;::::ccc:::: "
#define S06 "::::::::::;;;;::cccccllllllcc::;;;;::::::::::::::::::::::::::::::ccccclllddxkO0OOO000KK00OOOOkkxxxdoooooooodxkkO000000KKKKKKK00000KKKK00000000000000000000000000000000KKK00000OOOxoocc:::::::::::::;;;;::::::::::: "
#define S07 ":::;::;;;;;;;;:::ccccccllllcc:::;;;:::;::::::::::cc::::::::cccccccclldkkO00K0KKKKKKKKKKKK000000OOOOkkkkkkkkOOOOOOOOOOOOOOOOOOOOOOOO0OOOO0O0OOOOO00OOOO0OOOOOOOOOOOOOOOOOOOO000000000OOxxdlcc:c:::cccccccc::::::::c "
#define S08 ":::::::;;;;;;;;;:cc:::ccllllcccc:::c:::::::::::::::::::::cccccccoxkOO0K0000OOOOOOOO00000OOOOOOOOkkkkkkkkxxkxxxxxxxxxxxxxxxxkkkOOOOOOOOOOOOOkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkOOOOOOO000KK00kxolcccc:cccccc::cccccc "
#define S09 ":::::;;;;;;;;;;::c:::ccccccccccc:::;;;::::;:;::::::ccclllooloodkOKKK00OOOkOkkkkkkkkOOkkkkkOkkkkkkxkxxxxdddddddddddddddddddxxxxxkkkkkkkkkxxxxxxxxxxxxxdddddddddddxxxxxxxxddddddxxkkkOOOOO0000000Okxolcccc:::ccccccc "
#define S10 ";;;;;;;;;;;;;;;;::::::ccccccccc::::;;;;:::::cldxOOO0000000000000000000OOOkkxxkkxxkkkkkxkkkkkkkkkkkkkxxddddddooooooooodddoddddddxdxxddddoddodoooddddddooooooooooodddddddddddddddddxxkkkxxkkOO000000000OOxddoolcccc: "
#define S11 ":;;;;;;;;;;;;;;;;;;;::::::::c:::::;;,,,;ldkO000OOOOOkkkkkkkkkOkkOO00KKKK000OkkkxxxxxxxkxxxxxxxxxxxxxxxxddddooolllllllllllloooooooooooooooooooodddddoooolllooooodddooodddddddddddddddxkkxxxkkkkkkkkkOOO00KK00Okxxdo "
#define S12 "::::::::;;;;;;;;;;;;::;;;;;:::::::;;:cdk0OkkkxdddoddoooooooooooodxxkkOO00000000OkxxxxxxkkkxxxxxxxxxxxddddooooooollllllllccllllllllloooooooooooodddddoooolllllllllllllllllloooooddodddxxddddddxxxxxdxxxkkO0OOOOOO00 "
#define S13 ":::::;;;;,,,,,,,,;;;;;;;;;;:::::::lxOOkxdocccccclllllcllccccc::clloddxxkkOO000KKK0kxxxkkkkxxxdddddddddddoodooooolllllcccccccccclllllllllllllooooooooooollllcccllllllllllloooodddddooooddooooddxxddddddxkkkkkOOOOOO "
#define S14 ":;;;;;;;;,,,,,,,,,,;;;;:::::::::lkOkdolccc::::::cc::::::::::,'',,,,;;cloodxkO000KKKKOkxxxkkkxxxdddddddddddddooooolllllllcccccccccccclllllllllloolllllllllllllllllllllooooodddddddddddooollllloooddddoddxxxkxkkxkkO "
#define S15 ";;;,,;;;;;;;;;;;;;;;;;;;;;;;::cxkxdc:::;;;;;::;;;::;;;;;;:;,;;;,'''...',;codkO0000KKXKOxxxxkkkkxxddddddddddddooooooolllllccccccccccccccccccllllllllllllllllllllloooooooddddooddddddddoooolllllllooooooooddddxxxxxx "
#define S16 ";;;;;;;;;;;;;;;;;;;;;;,,,,,;:xOxdc;,,,,,,,,,;;;;;;;;,;;;;;'..     .. ...';clodxkO000KKX0kxxxkkkkkxxddoddddddddoooooolllllccccccc:cccccccccclcllllllllllllllllloooooddoodddodddddddddddddooolllloooooollloooodddddx "
#define S17 "''''',,,,,,,,,;;;;;;,,,,,,;okkdc,','''''''',,,,,;;;,,;;;;:;..         ...';:lodxk0K0000KK0kxxkkkOkkxdddddddoooooooolllllccccccccccccccccccccccllllooooolllllllooooodoodddddddddddoooddddddollllllllllllloolodddddd "
#define S18 ",''.............'''''',,,:dxdl;'''...'......''''',,,,',,,;;,..        ..';::lodxxkkO0O0KK00Oxdxxkkkkxooooooooooollllllllcccccccccccccccccccccllllllllloooooooooooooooooooooooolllloooooooooollllllllcllooooodddddd "
#define S19 "c:::::;;,,''..........''cddc,'..................''''...'',,;,...   ...',,,,;::cllllccoodO0OOOxdxxkkkkxdoooooooooooollllllcccc:::::ccc:ccccccccllllloooooooooooooooolllcllllllccc:cccccllooooooooooolllloooooddddoo "
#define S20 "ollllllllcccc::;;,,''',lxl;............................''''''..............',,,,,',,,;::oxkOOOkdxxkkOOkxdddddddddoooolllccccccc::::::cc:cccccccccclllllllllllooollllcccccccccc:::::ccclllooooodooolllcccclllllllll "
#define S21 "ooooooooooollllllccc:codc'.......  ...    .    ....................................'.';;ccodk0OkddxkkOOkxddddddddddooollllcccc::::::::::::cc::cccccccccclllllololllclcccclcllcccccllllllooooooddoollllllllllcccccc "
#define S22 "dddddoooooooooooollloxxl,........                . ......................    .........',::loxO0OxddxkkOOkxddddddddddoolllllcccccccc:ccccc::cccccccccclllllooooooolllclclllloollllllllllloooooooooooooooooolllccccc "
#define S23 "ddddddddddddddoooooodxc,.......                       .....................  ..........',:clloOOxoodxxkOOkxddddxxxddddddoooooollllllllllclcclclllllllloooooooooolllllooooooollllllllllllllllllllllloooooooooollcc: "
#define S24 "dddddddddddddddooooddo:'......                           . .................   ........',;;;;,lkOoclodxkkkxddddxxxxkkkxxxxddddooooooolooooollolloooooooooooooollllloooooooolooollllcccccccccccllcclclllllooollcc:: "
#define S25 "kxxxxxxxxxxddddddxxxo;'....                              ...................'...,'. ......''..,l0xclodxxkkkxddxxxxkkkkkkkkkxxxdddddddddddddooooodooooooooooooolllllllllooooooollllcc:::::::ccccccccccccllllccc:::c "
#define S26 "OOOOOOkkkkkkkkkkkkkxc'....                         ....................   .';;..''.......,,...,cOkcclodxkkkxddddxxxxkkkkkkkkkxxxxxxxxxxxxxxdddddddooooooooooollllccccclllllllllccccc::c::ccccclccccclllllllcc::::: "
#define S27 "OOOOOOOOOOOOOOOOOOOx:....                         .....................            .....',,..';oOklllodxkkkkdoodddxxxxkkkkkkkkkkkkkxkkkkkkkkxxddxddddoooooooolllcccccccccccccccccc::::::::cccccclllllllllllcc::::: "
#define S28 "00000000000OOOOOOOOx:...                        ............................ .. .  ...,,'''',;ckOxcllodxxkkkxdoodddxxxxxxkxxxkkkxkkxkkkkkOOOkkkkxxxxddddddooollllcccccccccclcccc::;;;;;;;;::ccccclllllcccc:::::::c "
#define S29 "0000000000000000000x;.....                     ........'','.........................,;:c:,.';cdOOoccloddxkkkxddddddddddxxxxxxxxxxxxxxxxxkkOOOOkOkkkkkkxxxdddoolllcccccccccccccc:::;;;;;;;;;;;:::ccccccc:::::::::cc "
#define S30 "0000000000000000000k:........                 ......',,'...   ..................',',::cll,..:dkkdcccloddxxkkxdddddddddddddddxxdxxxxxxxxxxkOOOOOkOkkkkkkkkkxxddollccccccccccccc::::::::::;;;;;;;:::cccccccc:::::ccc "
#define S31 "00000000000000KKKKKOl........               .......,;,.        .............'..,,,,:::loo;':oxxxlc:cllodxxxxxddoooooooodddddddddddddxddddxkOkOOkkkkkkkkkkkkkxxdollcccccc::::::::::cc::::;;;;;;;;;::::ccccc:::::::c "
#define S32 "00O000000000OOOOO000d,.......            .........',,.          ..........',,',;,,:::lol:,:dxdddl::cclooddxxdooollolllooooooodddddddddoooodkkkkkxkkkkkkkkkkkkkkxdolcc:::::;;;;;:::::::;;;;;;;;;;;;;;;;:::::::::;;; "
#define S33 "OkkkkkkkOOOOOOkkkkkOxc,......           ........'..,.            .......'..',,,;;::cllccldxxdddl:::ccllodddddollcclccclllllooooooooooollllodxdxxxdxxdxxddxxxxkkkkxolc:;;;;;,;;;::;:;;;,,,,;;;;;;;;;;;;;;;;;;;;;;,; "
#define S34 "0OOOOOOOOOOOOOOOOOOOOd:'......        .........'''.'.             ...''',,,;;;cc::lcclodxxdoodoc::cccllooddolllccc:c:cccclolllllllllllccccllloooollolllllloooddxxkxdlc::;;;;;;;;;;;;;,,,,,,,;;;;;,,,,,;;,,,,;;,,,; "
#define S35 "KKK0000000000OOOOOO00Oo,.....        ..........'','...           ...'',,;;::ccllllcclodxxoloolc;::ccclloooollccccccc::::clllllllllcccc::::::::ccc::c::cccccllooddxxxdlc::;;;;:::;;;;;;,,,,,,,,,,,,,,,;;;;;;;;;,,,, "
#define S36 "00KKKKKKKKKKKK00000000kc'....       ............'''....        ...',;;;;;::ccloooolddxdlclodoc;;;::cclloollllc::::::::cccccccccccc::::;;;;;,;;;;;;;::clllllllllllllooooll:;;;;;;;;;;;;;;;,,,,,,,,,,,,,;;;;;;;;,,,, "
#define S37 "K00000000KKKKK000000000x:'....      .............'''....  .....'',;;:::cccclllooddooolccloooc:;;;::cclllllodoc::::cccclcccccccc:::;:;;,,,,,,,,,,;;::ccc::;;;;;;;;;:clloolollc:::;;;;,;;;,,,,,,,,,,,,,,,,,,,,,,,,,, "
#define S38 "KK00K00000000OOOOOOOOOOOxl;.....    ............'''''......''',,,;;;;::ccllooooollc:::cloooc;;;;;:cccllcccddoc:c:::coddlcc:cooc::;;;,,'''','''',,;:;;;;,,'''''.''',,,;;;;:clcccccccc::;;;;;;;;;;,,,,,,,'',,,,,'',, "
#define S39 "KK0KKK00000OOOOOkkkkkkkxxddoolc:,... ......'''''''''''......''',,,;;;::cclllcc:::::cclloolc:;;;;;:ccccc:ccolc;;;;:llolcc:clllolcccc:,',''''''.'',coc,'.''........'''',,,;;:cccccllcllollccc:::;;;;:;;;,,,,,,,,,,,, "
#define S40 "KKKKKKKXXK000000K00OOkkkkxxxxddoolc;'......''',,,,,'''........'''',,;;;;;;;;;;;::clloolc:;;;;;:::ccccloooolc;,,;clclooddc;colc:cccc:',,''''''.,;;':l,.................''',,;;;::ccc::cclloodoooolccc:;;;;,,,,,,,;; "
#define S41 "XKXXXKXXXXXXXXXXXXKKKK000Okkxxxxdooolc::;,'''..'''.................'''''',,,;::clllllc:;,,;::::ccccccollc:;,,;;;;;;::cclll:,;lll:,''',;,''.'.':c:...;c;...............'''',,,;:::::cc:cclllllodddddddolc::;,,,,,;; "
#define S42 "XXXXXXXXXXXXXXXXXXXXXXXXXXKKK0O0OOOOOOkxdoooolllcc:::c:::loolcc::;;;;,;;;;;;::cccc::,,',,,;:::::::::::;,,,,;;;;;;;;;;,;cc:,,,,,,''..;cc:'',:;':;'...;c;'........'.''.'''''',,,;;;:;;::::cccllllllooddddxxxddolcc:: "
#define S43 "XXXXXXNXXXXXXXXXXXXXXXXXXXXXXXXXXXXXKXXKK00KK00KK00000O000KKKKK0OOOOOOOkkkxxxxxxkxxddddddddoddddxxxdllcc:::,,,,,,,,,,,:::;,,,,'',''.::::,.';;'''.','',''''.''''''''''''''''',,,,,;;,,;;::c::cccccllllllloooooodddd "
#define S44 "XXXXXXXXXXXNNXXNNNNNNNNNNNNXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXKKKKKKKK0000000KKKK00KK0KKKKKKKKKKKKKKOOkkxdddddoool:,,,;,,,,'.,,,,,''''''',;;;;,''''....'''''''',,,,,,,,,,,,;;;;;;;;:oxdoc:::::ccclllooooddd "
#define S45 "XXXXXXXXXXXNNNXXXNNNNNNNXXXNNNNNXXXXXXNNNNNNXXXXNXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXKKKKKKKKKKKKKKKKKKKXXKKKKKKXXKKKKKKKKKKKKKOkdllccloc:c;,,'''''''.............'...'.'',,;::;;;;;:codxxxkOkkkKXXXKOOOkOO00KKKKKKXXXX "
#define S46 "XXXXXXXKKXXXXNXXXXNNNNNNXXXNNNNNNNNNNNNNNNNNNXXXXNNNNNNNNNNNXNNNNNNNNXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXKKK0KKKK000OkkkxO0kkkd00OO0OOO0KXXXKKKKKXXXXXXXXXXXKXXXXXXXXXXXXXXXXXXXXXXX "
#define S47 "XXXXXXXXXXXXXXXXXXXNNNNNNXNNNNNNNNNNNNNNNNNNNNNNXXXXXNXXXNNNNNNNNNNNXNNNNNNNNNXNXNNNNNNXXXXXXXNNNNXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXKXXXKKKKXKKKXXXXXXXXXXXXXXXXXXXXXXXXNNNNNNNNNNXXXXXX "
#define S48 "XXXXXXXXXXXXXXXXXXXXXNNXXXXXXXXXXXXXXXXXXNNNXXNNNNNNNNNXXXNNNXXXNXXXXXXXXXXXXXXXXXXXXXXXXXNNNNNNNNNNNNNNNNNNNNNNNNNNXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXKKKKKKKK000KKKKXXXXXXKKKKKKKKKKKKKKKKXXXXXNXXXXXXXXXXXX "
#define S49 "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXNNNNNNNNNNNNNNNNNNXXXNXXXXXXXXXXKXKKKKXXXXXXXXXXXXXNNNNXXXXNNNXNNNNNNNNNNNNNNNNNNNNNNNXXNXXXXXXXXXNNNXXXXXXXXXXXXXKKKKXXXXXXXKKKK000000000KKKKXXXXXXXXXXXXXXXXXXXX "
#define S50 "                                                                                                                                                                                                                   "
