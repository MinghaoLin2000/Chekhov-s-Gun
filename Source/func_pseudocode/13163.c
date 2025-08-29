+[TSUWarning mediaUploadWarningWithMessage:data:isFromUploader:]
// local variable allocation has failed, the output may be wrong!
id __cdecl +[TSUWarning mediaUploadWarningWithMessage:data:isFromUploader:](id a1, SEL a2, id a3, id a4, bool a5)
{
  _BOOL8 v5; // x20
  id v7; // x19
  id v8; // x21
  TSUMediaUploadWarning *v9; // x20
  NSSet *v10; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v5 = a5;
  v7 = objc_retain(a4);
  v8 = objc_retain(a3);
  v9 = -[TSUMediaUploadWarning initWithKind:message:isFromUploader:](
         objc_alloc(&OBJC_CLASS___TSUMediaUploadWarning),
         "initWithKind:message:isFromUploader:",
         3LL,
         v8,
         v5);
  objc_release(v8);
  if ( v7 )
  {
    v10 = objc_retainAutoreleasedReturnValue(+[NSSet setWithObject:](&OBJC_CLASS___NSSet, "setWithObject:", v7));
    -[TSUWarning setAffectedObjects:](v9, "setAffectedObjects:", v10);
    objc_release(v10);
  }
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v9);
}