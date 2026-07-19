# Compressor

My first coding project, from the first semester at university (Fundamentals of Computer Programming). The goal was to build a working file compressor in C++, and it ended up in two stages:

- **[HuffmanAlgo](HuffmanAlgo/)** - V1, a standalone Huffman coding compressor. This is where I figured out trees, priority queues and bit packing for the first time.
- **[ZIP](ZIP/)** - the final project, an implementation of the Deflate idea: LZ77 followed by Huffman coding, with a small CLI (`./deflate -c/-d -i in -o out`).

Each folder has its own README with build instructions and details on how the format works.

On the included 2.1 MB test file the deflate version gets the size down to about 0.4 MB (~81% reduction) and decompresses back byte-identical.
