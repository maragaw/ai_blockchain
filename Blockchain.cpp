#include "Blockchain.h"

Blockchain::Blockchain(){
    _vChain.emplace_back(Block(0, "Genesis Block"));
    _nDifficulty = 6;
}

void Blockchain::AddBlock(Block bNew){
    bNew.sPrevHash = _getLastBlock().getHash();
    bNew.mineBlock(_nDifficulty);
    _vChain.push_back(bNew);
}

Block Blockchain::_getLastBlock() const{
    return _vChain.back();
}