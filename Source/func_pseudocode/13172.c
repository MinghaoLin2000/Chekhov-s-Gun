-[TSUMediaUploadWarning initWithKind:message:isFromUploader:]
TSUMediaUploadWarning *__cdecl -[TSUMediaUploadWarning initWithKind:message:isFromUploader:](
        TSUMediaUploadWarning *self,
        SEL a2,
        signed __int64 a3,
        id a4,
        bool a5)
{
  TSUMediaUploadWarning *result; // x0
  objc_super v7; // [xsp+0h] [xbp-20h] BYREF

  v7.receiver = self;
  v7.super_class = (Class)&OBJC_CLASS___TSUMediaUploadWarning;
  result = -[TSUWarning initWithKind:message:](&v7, "initWithKind:message:", a3, a4);
  if ( result )
    result->_isFromUploader = a5;
  return result;
}