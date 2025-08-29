-[PAMediaConversionServiceResourceURLReference getFileSize:error:]
bool __cdecl -[PAMediaConversionServiceResourceURLReference getFileSize:error:](
        PAMediaConversionServiceResourceURLReference *self,
        SEL a2,
        unsigned __int64 *a3,
        id *a4)
{
  NSURL *url; // x0
  unsigned int v6; // w0
  bool v7; // w20
  id v9; // [xsp+8h] [xbp-18h] BYREF

  url = self->_url;
  v9 = 0LL;
  v6 = -[NSURL getResourceValue:forKey:error:](url, "getResourceValue:forKey:error:", &v9, NSURLFileSizeKey, a4);
  v7 = v6;
  if ( a3 && v6 )
    *a3 = (unsigned __int64)objc_msgSend(v9, "unsignedLongLongValue");
  return v7;
}