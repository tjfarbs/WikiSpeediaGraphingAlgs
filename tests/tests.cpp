#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "../src/Graph.h"
#include "../src/Vertex.h"
#include "../src/Edge.h"
#include "../src/pagerank.h"
#include "../src/dijkstras.h"

#include <vector>
#include <string>
#include <fstream>


// default constructor
TEST_CASE("Catch cases work", "[weight=1]") {
  REQUIRE( 1 == 1 );
}

TEST_CASE("BFS from first vertex", "[weight=1]") {
  Graph graph = Graph();
    std::vector<Vertex>& vertices = graph.getVertices();
    std::vector<int> dists = graph.BFS(vertices[0].name_);
    std::string expected = "0-1-1-1-1-133333325634333435-12433544334-13-142234354456642455553533242-14-133433-143-13343-134-1-1333232424334-1344433343444-1344442-13334-13-1334324-1-1453-14-14344443434323333344444343-143334-1344-133334-133343333434-1343-1-13444443433433435433343-133333344534433344343322232444-134444444533323432343344433-12343443-1423323-143-143-1544334333433332-134434333-1-12333444335343334333-143333-14-1342443-144343433-14-143333352-1343334433444332343-1-13343-134-134-1354-143433-143333424343443-1343-123-133-1233333344333-12334244333243363334-155344-14343634333453443333433333464333434443-1432334341433-124444333222-1-132-1333334-1-14344332433-142335333344333333-13334333333334-1534-13-13374-155434333-1354-143434443344434344-14334343533244343344-133434-1355-144443353333343-13332323222222433233-1323344-133433343434334-133424334-14343434433343335434445223333243333333433443333433-133234-143433353233-1334434-1344433434544-1-1-1432225433423334434443452343353343444432333534-13344455434433433-132-1354333433432433345322-13343332-123344433323-1332334332-134443344324333-14443343-1445145445354-1444-15-135-14-144223333344334333343334324234333-15424343-1234334433433444264333253444344533234-143-1-1-13345-13433333-134354423-14243-1-1-1343-1-133213233-1335-1343432435-13233244434444-134-1-133-133-13634444-1-1443344243342533343333-133645343343-1-13353334-1-1-14433333333-13433444-143444-123343-1433-154333432452335-14324334-14-14-14-1344-1333-13334343-14342445-1-14343324-1342333333244333333444333-1443-143333233332334-134445353-145423-13432-144-142344-13324232-144344443443534334334434-1343333433333-1345-1324-1-133242-1-14-1-1343543434444434432-1-134-1233-123335343353334343444333-17333533-1-13-13333-14334322344443333434334335-13-133-14223223-13424-1-145333433424-1333-1444433-1342334-134333333233-1336434-143-143544-143344644-13-1-1443344-1443-13344453344333433333-13-143-13-1-133-1-1334353333-1333333334334242423-1424433334323343445554353344244343233-1264-14333-1443324-143-14-13-12-15434554351-174534333334-1346-14-14233432433-12434333323333333433353435445-1-1-1-1-13-1-133433442-1-142-1433443434443343333445-1334333322-135-1333443443443432333453342333-14-1332343-14-1434-154-1443433333-1335355-1-1-14335-1-1-15-1-1-144-1-1335-143-1-14-14-133-1-14-1-1-1-1-134354433333353443333354233343-14443343-14333-1343432444343-144-14-13353-1-133-1455433434434-14343443223244-13334533433343-13534433443343432333234343-13-13343343-1334353-143333-11-1423242423-133433333324412243733442334-134333443544-133334234333343224444-1333442-1333333-14424333433243533-14333333-1343333344-133343333353444-1334343523-1343-134242-145433344443-13434-133333-13433-1-145334-13352433-13435-1334433343-14433434444233333-144433434433344445443444343-133434343332332343334242-13433-13333444-1333432-13442333334333233-1443342-1-13335-13332343-1-1-1-14-13-1-13-154-1333234-1-1-14-143334-1334426233534333-134323344-1-1-1524-134343-13-14334434332444342343634-1-143443332344343-143443234343333434363233433533-1233433534334432333-143454344-1334334434333333-13343343333-14-1343553244436432-1433334334443333333443-14334343453233443333245434333343-13364434233433443-1-1-1-12-1-13434334334333434-14336344-144333333432331-133-1343543333423343-1-14453424432334343444444444534434444344343432-14344344453-1445343453344332433433-133-123443454333333233333334-1434343442-1-124322333443-124434-13-13243-13-133-13436343-1334444434423344334333242232236423333353333345333253343335-14334525443332444223-1-133544434454-1454344334432433341-144334244433333332643433434344-153443332343334-14333333-14323-1-1333323344343443343233443434-13443334443-1443344343343334334334-13333333-15-1464344-13434-14333331-1234535243443-143-1333344443333353333424433-13433533334434334434-1223335443333-1333-13442322333443-13342343234-13-133-154334343434-1342333443-1334333423333443336344334354343423-134443442543434-1443435434343-143543444444-154433423433444322335-1444-12443345433334333343344456333334-14434333443-13323432223-12333233433-14444333234-1242334-1323343343344333333-1-1-144433242323243343343-142234553-13333-13-15353-13334-13342444-1-134-1454-1434-1234-1122-1222343343323343-1234333335334433343333443443434-14333-13444524-1433465-1434-14343433432234-133-1-1443-134353443334-1-1343244444334433433425633333332354334333233234333-1-133344443344345423343443444343434-1-13-13-1354454333-1-135434-1333-1-13343443553333344333-13-1-133353423-15-134334-14353-143-1433333-143324333-13333443-154444444334333-133464322-144-1334-1-14424-134-1-13333443334333344443353423333333323-124444-133224353332334344443-1-13-146434-13-134434434-14-14444533445433-1455544354334433443453-1544-13433334333343443445-1534333334434434332-173343-14-1533433344-1224343-13333423345-1-123333344-13354-1333243-14343334434-133544-14-1-15555-155445-15332343336333332333-1324-1333244-1-1443532-15-122444353-1-12422-1422333336333-132333444444345666334-13333-1334433434323343544-134433234333243254343334434433434333534444431342433322444354-133-1334-143453434444354-13334-134333233343332-1333-1-13-1335255-14-1-13-1-15-1564-1663342-13444434233344534343423354433-143-134-1333333433-1434433232234-164343-1-14-1-1-1343334333-133444324-1-1433-14-133443-1343534334434442";
    std::string dist = "";
    for (int i = 0; i < (int) dists.size(); i++) {
        dist += std::to_string(dists[i]);
    }
    std::string edge_labels = "";
    std::string exp_edge_labels = "11111111111000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000100000000000010000000000000000000000000010000000000000000000000000000000000000000001000000001000000110000000000001010000000000000000000000000000010000000000000010000000110000000000000001000010000000000010000000000000000000000001000000000000000000000000000000000000000000000010000000000000000000000000000000000000000000000000000000000000010000000000000000000000000000000000000000000000000000100010000000000000000000000000001000000000000100010000010000001000000000000000000001000000000000000000000000001000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001001100000000000010000000000000010000000000000001000000000000100100000000000001000001010000100000000000010000000000000000000001010001000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001110000000000000000000011000000000000010000000000000000010000000000000000000000000000001000000000000000000000000000000000000010000000111110000000000000110000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000100011101000000100101010000000001010000000010001111000010000000010100000000000000000000000000000000000000000000000001100100010000001000001000000000000010111001001100010000100000000000010110000000000000010000000000000001001000011000001100000000000000010000000000000000000000000000000000000000000000000000000000000000000000000101010000000000000000000110000000000000000000000000000000000000000000000000100000000000100010000010000000000000000000000011110000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000100000000000000000000000000000000000100000000000000000000000000000000100000001000000000000000000000000000000000000000000000000000000000000000001000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000010000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000100000001000000000000000000000000000000000000000001000000000000000000100000000000000000000000000000000001110000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000100000000000000000";
    for (int i = 0; i < 100; i++) {
        Edge* cedge = vertices[i].head_;
        while (cedge != NULL) {
          if (cedge->label_ == "discovery") {
            edge_labels += "1";
          } else {
            edge_labels += "0";
          }
          cedge = cedge->next_;
        }
    }
  REQUIRE( expected == dist );
  REQUIRE( edge_labels == exp_edge_labels );
  
}

TEST_CASE("BFS from second vertex", "[weight=1]") {
  Graph graph = Graph();
    std::vector<Vertex>& vertices = graph.getVertices();
    std::vector<int> dists = graph.BFS(vertices[1].name_);
    std::string expected = "-10-1-1-1-122222325623232424-12422544324-13-131224254456642455552522242-14-123434-134-13343-134-1-1333333433333-1334333333334-1344432-12234-12-1333224-1-1453-14-13344443424222322243344333-132333-1343-133333-133342332334-1333-1-13444433333433425433342-133322343433423234333222332334-133434334433323323343343332-12243332-1333323-133-132-1534333333333322-134423223-1-12222433235343333223-132333-13-1332442-134343333-13-132322352-1333224433433322343-1-13243-123-124-1343-133433-142332334343343-1333-133-133-1233133353223-12434244323343363234-144243-14343633333452433333423222363233323433-1333333343433-134333232222-1-122-1222233-1-13334232423-142325323343333233-13333332333234-1424-12-14373-144424332-1343-143433433343333233-14225434433334332344-132333-1345-133433453332343-13233323232332433233-1424234-122323242424225-133423323-13333434323343325434345233332243323332332443233333-122224-133332343233-1333433-1243323434534-1-1-1333334343323323434442442332242343344333323433-13333455423434332-132-1244333333432333245322-13342322-132333433333-1332334333-134343343333322-13442233-1334335334344-1444-14-145-15-134332323343233333233333343233423-16334342-1234334433423433263233243444343434223-131-1-1-12344-13423333-123244432-14133-1-1-1442-1-134232233-1335-1332323444-13323344433433-133-1-132-133-13534434-1-1443233232332433333323-143645334333-1-14354334-1-1-12323333333-13422344-143433-133343-1322-144333423453335-13333234-14-13-14-1344-1233-13433232-13332334-1-13243323-1343343333333333333434323-1443-143233233332323-124454354-145423-13423-133-133333-13324232-133233433433424334233424-1242332423433-1444-1124-1-122143-1-13-1-1342532434334433432-1-134-1232-122235342244334343444323-16333522-1-13-13132-14333322333333332333333235-13-133-13323223-12324-1-145334333324-1323-1334332-1233333-133323323233-1336334-143-153433-142343633-13-1-1443333-1342-13334444333333433233-13-153-12-1-133-1-1333343333-1333332333233242424-1424433334323332445554252344344333232-1364-14342-1332324-133-13-12-13-15424544352-164534334334-1335-14-13233432434-12443222223322433433352434445-1-1-1-1-13-1-123333432-1-132-1333334334332343233435-1333233332-134-1333342433333433333453242333-13-1333343-13-1434-153-1343322333-1235354-1-1-14325-1-1-15-1-1-143-1-1335-134-1-13-13-143-1-14-1-1-1-1-133253433332352343333354233343-14443343-13233-1443432344343-144-14-13353-1-133-1355333323334-13344333222244-13334442422342-13533333332343332332333233-12-13332243-1333353-132323-12-1423342422-133433233323423342623442334-133222433443-133334233323333333434-1332442-1233323-14424233522342533-14333333-1343333334-133343332354334-1334343423-1332-133243-144433333343-13333-133333-12323-1-144324-12353433-12445-1334333232-13433323434232323-123433332432333344333333333-133334233232222344234242-11423-12323444-1223342-13433322333332233-1443333-1-14425-13232343-1-1-1-14-14-1-13-143-1323134-1-1-14-143344-1333425323444223-133323344-1-1-1434-134344-13-13333434332333342243534-1-143432333243232-143433333333333433262233422524-1334432433343332243-143343234-1334334324333322-13333233333-12-1332553343436322-1432334233333233333442-14334333453333333333335434233233-13354333223322332-1-1-1-13-1-14333333324323333-14336344-134332343332332-123-1243533222323342-1-13453423432233343344333333424434344334233332-14344344453-1445343343244333423333-132-122443342333213233223223-1333343442-1-134322323442-124333-13-13233-13-133-12325333-1334443323333233333332242233236323433252223254332353333345-13333334433333333223-1-133434324344-1343344334433333342-143234244444332233643332433334-153352322244323-14333323-14322-1-1232221344334333343332342333-13434433442-1453343343333233234234-13332333-15-1464344-13334-14423333-1333445343443-133-1333444333332353333424313-12323533234434333333-1333335333332-1223-13332232323433-12332433233-13-133-134333343434-1343323343-1333334323433332336243323354334332-123344432443334-1333335434333-142533434343-153433323232333322224-1433-12342345433334333333333346223233-14334323334-13333332223-13333222333-14344323234-1242333-1322431222334233323-1-1-144433242322233332342-142334552-13234-13-14344-13334-13342444-1-134-1454-1433-1333-1232-1322333343223343-1233333335333223343332343344423-14323-13353434-1333364-1434-14332322333234-142-1-1443-134242342223-1-1343244433234433333434543343332254334333223323333-1-132343443344344323332543333343434-1-13-12-1342334323-1-134443-1323-1-13343443552332244334-13-1-134251323-15-133334-13353-132-1423333-133333333-13333343-143344434234323-133464321-143-1234-1-13423-123-1-13222443323323343444443423322332323-123344-143324343322423243443-1-12-145543-13-124423323-14-13444533434433-1445443244334323343453-1434-13433333333344343435-1434333333433433321-173344-13-1532423243-1224433-13333413335-1-122333243-12254-1233243-14342334333-133544-14-1-15555-155445-15333333336333233233-1234-1333233-1-1443523-14-122434353-1-13421-1322323336232-133323434444345666333-12332-1334333323322342433-134333333222233353332333423424234333434344332343333332334353-132-1323-142342433334343-13434-133232333333332-1222-1-12-1335355-14-1-13-1-14-1554-1663343-13333333333343533243333344432-132-133-1333334332-1434432222135-164333-1-14-1-1-1343334332-132344334-1-1432-12-134332-1343434234434333";
    std::string dist = "";
    for (int i = 0; i < (int) dists.size(); i++) {
        dist += std::to_string(dists[i]);
    }
    std::string edge_labels = "";
    std::string exp_edge_labels = "00000000000111111111111111111100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000010000000000000000000000000000000000000000000000000000000000110000000000000000000000000000000000000000000010000000000001000000000000000000000000000000010000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000010000000000000000000000000000000000000000000000000000100010000000000000000000000000000000000000000000000100000000001000000000000000000000000000000000000000000000001000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000010100000000000000000000000000001000000000000100000000000000000000000000000000000000000010000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001110000000000000000000010000000000000010000000000000000010000000000000000000000000001001000011000000000000001000000000000000011000000111110000000000000110000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000100011001100001000101110000100011000010001110001111000110000011110101111001110110011110111000000000000010000000000101100100000000001000000000000000000000111000000000010000100000000000111110000001000000000000000000000001001000010000001000000000000000010000000000000000000000000000000000000000000000000000000000000000000000000101010000000000000000000110000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011110000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001000000000000000000100000000100100000010100000100000000000000000";
    for (int i = 0; i < 100; i++) {
        Edge* cedge = vertices[i].head_;
        while (cedge != NULL) {
          if (cedge->label_ == "discovery") {
            edge_labels += "1";
          } else {
            edge_labels += "0";
          }
          cedge = cedge->next_;
        }
    }
  REQUIRE( expected == dist );
  REQUIRE( edge_labels == exp_edge_labels );
}
//uncomment for powerCalc() test, commented for time reasons
/*
TEST_CASE("PageRank can find another article, powerCalc test", "[weight=1]") {
  int expected = 1;
  pagerank rank = pagerank();
    rank.createTrans();
    rank.powerCalc();
  int a = rank.pageSearch(std::string("Retina"), std::string("United_States"));
  REQUIRE( expected == a);
  
}
*/
TEST_CASE("PageRank can find another article", "[weight=1]") {
  // 0 = page linked
  // 1 = needed multiple pages
  // -1 = not found

  int expected = 1;
  pagerank rank = pagerank();
    rank.createTrans();
    rank.readPageRank();
    int a = rank.pageSearch(std::string("Retina"), std::string("United_States"));
  REQUIRE( expected == a );
  expected = -1;
  a = rank.pageSearch(std::string("Ganesh"), std::string("Refrigerator_Car"));
  REQUIRE( expected == a);
  a = rank.pageSearch(std::string(""), std::string("   "));
  REQUIRE( expected == a);
  expected = 0;
  a = rank.pageSearch(std::string("United_States_Senate"), std::string("British_House_of_Commons"));
  REQUIRE( expected == a);
}

TEST_CASE("Dijkstras 1 Step", "[weight=1]") {
  Graph graph = Graph();
    std::vector<Vertex>& vertices = graph.getVertices();
    dijkstras d = dijkstras(graph, vertices[0], vertices[974]);
    std::vector<string> result = d.dijkstrasAlg();
    std::vector<std::string> expected = {"%C3%81ed%C3%A1n_mac_Gabr%C3%A1in", "Columba"};
    
  REQUIRE( expected == result );
}

TEST_CASE("Dijkstras Multi Step", "[weight=1]") {
  Graph graph = Graph();
    std::vector<Vertex>& vertices = graph.getVertices();
    dijkstras d = dijkstras(graph, vertices[825], vertices[2023]);
    std::vector<string> result = d.dijkstrasAlg();
    std::vector<std::string> expected = { "Cat_Stevens", "Washington%2C_D.C.", "Germany", "NATO", "Canada", "Hudson_Bay" };
    
  REQUIRE( expected == result );
}

TEST_CASE("Dijkstras Multi Step Long", "[weight=1]") {
  Graph graph = Graph();
    std::vector<Vertex>& vertices = graph.getVertices();
    int headIdx = graph.lookup_table.find("Corporate_finance")->second;
    int tailIdx = graph.lookup_table.find("A_Tale_of_a_Tub")->second;
    dijkstras d = dijkstras(graph, vertices[headIdx], vertices[tailIdx]);
    std::vector<string> result = d.dijkstrasAlg();
    std::vector<std::string> expected = { "Corporate_finance", "Accountancy", "Economics", "Philosophy", "Iranian_peoples", "Buddhism", "Singapore", "Mosque", "Jyllands-Posten_Muhammad_cartoons_controversy", "Mona_Lisa", "Novel", "Oroonoko", "A_Tale_of_a_Tub" };
    
  REQUIRE( expected == result );
}

TEST_CASE("Dijkstras No Path", "[weight=1]") {
  Graph graph = Graph();
    std::vector<Vertex>& vertices = graph.getVertices();
    int headIdx = graph.lookup_table.find("Zuid-Gelders")->second;
    int tailIdx = graph.lookup_table.find("Snaefell_Mountain_Railway")->second;
    dijkstras d = dijkstras(graph, vertices[headIdx], vertices[tailIdx]);
    std::vector<string> result = d.dijkstrasAlg();
    std::vector<std::string> expected = { "No Path Found" };
    
  REQUIRE( expected == result );
}

