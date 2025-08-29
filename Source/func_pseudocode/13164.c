-[TSUWarning isUploaderWarning]
bool __cdecl -[TSUWarning isUploaderWarning](TSUWarning *self, SEL a2)
{
  __int64 v3; // x0
  id v4; // x19
  unsigned __int8 v5; // w20

  v3 = objc_opt_class(&OBJC_CLASS___TSUMediaUploadWarning);
  v4 = objc_retainAutoreleasedReturnValue((id)TSUDynamicCast(v3, self));
  v5 = (unsigned __int8)objc_msgSend(v4, "isFromUploader");
  objc_release(v4);
  return v5;
}