-[TSUEncodedBlockInfoWithDecodedLengthInternal initWithEncodedLength:decodedLength:]
TSUEncodedBlockInfoWithDecodedLengthInternal *__cdecl -[TSUEncodedBlockInfoWithDecodedLengthInternal initWithEncodedLength:decodedLength:](
        TSUEncodedBlockInfoWithDecodedLengthInternal *self,
        SEL a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  TSUEncodedBlockInfoWithDecodedLengthInternal *result; // x0
  objc_super v6; // [xsp+0h] [xbp-20h] BYREF

  v6.receiver = self;
  v6.super_class = (Class)&OBJC_CLASS___TSUEncodedBlockInfoWithDecodedLengthInternal;
  result = -[TSUEncodedBlockInfoInternal initWithEncodedLength:](&v6, "initWithEncodedLength:", a3);
  if ( result )
    result->_decodedLength = a4;
  return result;
}