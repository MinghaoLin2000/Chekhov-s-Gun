-[TSUEncodedBlockInfoInternal hash]
unsigned __int64 __cdecl -[TSUEncodedBlockInfoInternal hash](TSUEncodedBlockInfoInternal *self, SEL a2)
{
  unsigned __int64 v3; // x20

  v3 = -[TSUEncodedBlockInfoInternal encodedLength](self, "encodedLength");
  return -[TSUEncodedBlockInfoInternal decodedLength](self, "decodedLength") ^ v3;
}