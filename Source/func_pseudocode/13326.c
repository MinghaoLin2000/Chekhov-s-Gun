_TSUEncodedBlockInfoCreate
TSUEncodedBlockInfoWithDecodedLengthInternal *__fastcall TSUEncodedBlockInfoCreate(__int64 a1, __int64 a2)
{
  TSUEncodedBlockInfoWithDecodedLengthInternal *v2; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  if ( a1 == a2 )
    v2 = -[TSUEncodedBlockInfoInternal initWithEncodedLength:](
           objc_alloc(&OBJC_CLASS___TSUEncodedBlockInfoInternal),
           "initWithEncodedLength:",
           a1);
  else
    v2 = -[TSUEncodedBlockInfoWithDecodedLengthInternal initWithEncodedLength:decodedLength:](
           objc_alloc(&OBJC_CLASS___TSUEncodedBlockInfoWithDecodedLengthInternal),
           "initWithEncodedLength:decodedLength:",
           a1,
           a2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v2);
}