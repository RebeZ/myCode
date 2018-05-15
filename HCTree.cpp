
#include "HCTree.h"
#include "BitInputStream.h"
#include "BitOutputStream.h"

#include <queue>
#include <vector>
#include <fstream>

using namespace std;

// destructor
HCTree::~HCTree(){
	delete root;
	for(int i = 0; i < leaves.size(); i++){
		delete leaves.at(i);
	}
}

/** Use the Huffman algorithm to build a Huffman coding trie.
 *  PRECONDITION: freqs is a vector of ints, such that freqs[i] is
 *  the frequency of occurrence of byte i in the message.
 *  POSTCONDITION:  root points to the root of the trie,
 *  and leaves[i] points to the leaf node containing byte i.
 */
//TODO
void HCTree::build(const vector<int>& freqs){
}

/** Write to the given BitOutputStream
 *  the sequence of bits coding the given symbol.
 *  PRECONDITION: build() has been called, to create the coding
 *  tree, and initialize root pointer and leaves vector.
 */
//TODO
void HCTree::encode(byte symbol, BitOutputStream& out) const{
}

/** Write to the given ofstream
 *  the sequence of bits (as ASCII) coding the given symbol.
 *  PRECONDITION: build() has been called, to create the coding
 *  tree, and initialize root pointer and leaves vector.
 *  THIS METHOD IS USEFUL FOR THE CHECKPOINT BUT SHOULD NOT
 *  BE USED IN THE FINAL SUBMISSION.
 */
//TODO
void HCTree::encode(byte symbol, ofstream& out) const{
}


/** Return symbol coded in the next sequence of bits from the stream.
 *  PRECONDITION: build() has been called, to create the coding
 *  tree, and initialize root pointer and leaves vector.
 */
//TODO
int HCTree::decode(BitInputStream& in) const{
	return 0;
}

/** Return the symbol coded in the next sequence of bits (represented as
 *  ASCII text) from the ifstream.
 *  PRECONDITION: build() has been called, to create the coding
 *  tree, and initialize root pointer and leaves vector.
 *  THIS METHOD IS USEFUL FOR THE CHECKPOINT BUT SHOULD NOT BE USED
 *  IN THE FINAL SUBMISSION.
 */
//TODO
int HCTree::decode(ifstream& in) const{
	return 0;
}
