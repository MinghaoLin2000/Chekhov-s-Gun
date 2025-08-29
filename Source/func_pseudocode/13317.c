-[TSUEncodedBlockInfoInternal initWithEncodedLength:]
TSUEncodedBlockInfoInternal *__cdecl -[TSUEncodedBlockInfoInternal initWithEncodedLength:](
        TSUEncodedBlockInfoInternal *self,
        SEL a2,
        unsigned __int64 a3)
{
  TSUEncodedBlockInfoInternal *result; // x0
  objc_super v5; // [xsp+0h] [xbp-20h] BYREF

  v5.receiver = self;
  v5.super_class = (Class)&OBJC_CLASS___TSUEncodedBlockInfoInternal;
  result = -[TSUEncodedBlockInfoInternal init](&v5, "init");
  if ( result )
    result->_encodedLength = a3;
  return result;
}