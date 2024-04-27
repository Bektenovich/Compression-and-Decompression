Huffman Coding File Compression and Decompression

Compression Algorithm
The compression algorithm used in this project is Huffman coding.Huffman coding is a widely used method for lossless data compression.It works by assigning variable-length codes to input characters,with shorter codes assigned to more frequent characters.This allows for efficient encoding of the input data,reducing its size.

Major Functions
buildHuffmanTree(const string& text):Builds a Huffman tree based on the frequency of characters in the input text.
encode(Node* root,string str,unordered_map<char,string>& huffmanCode):Recursively traverses the Huffman tree to generate Huffman codes for each character.
huffmanEncode(const string& text):Encodes the input text using the generated Huffman codes.

Code Blocks
struct Node:Represents a node in the Huffman tree, containing a character, its frequency, and pointers to its left and right children.
struct Compare:Functor used to compare nodes in the priority queue for building the Huffman tree.
buildHuffmanTree:Builds the Huffman tree using a priority queue.
encode:Generates Huffman codes for each character in the input text.
huffmanEncode:Encodes the input text using the Huffman codes.

Compression Technique
Huffman coding is chosen for its simplicity and effectiveness in compressing text data.It assigns shorter codes to more frequent characters,reducing the overall size of the encoded data.

Implementation Details
The implementation consists of building a Huffman tree based on the frequency of characters in the input text.This tree is then used to generate Huffman codes for each character.The encoded text is obtained by replacing each character with its corresponding Huffman code.
