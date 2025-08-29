-[TSPCryptoInfoInternal hasDecodedLength]
bool __cdecl -[TSPCryptoInfoInternal hasDecodedLength](TSPCryptoInfoInternal *self, SEL a2)
{
  return -[TSPCryptoInfoInternal decodedLength](self, "decodedLength")
      || -[TSPCryptoInfoInternal preferredBlockSize](self, "preferredBlockSize") != -1LL;
}