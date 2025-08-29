-[DisplayMobileAssetUpdater version:isGreaterThan:]
bool __cdecl -[DisplayMobileAssetUpdater version:isGreaterThan:](DisplayMobileAssetUpdater *self, SEL a2, id a3, id a4)
{
  id v5; // x19
  void *v6; // x20
  void *v7; // x21
  unsigned __int64 v8; // x22
  void *v9; // x24
  void *v10; // x23
  void *v11; // x25
  void *v12; // x24
  bool v13; // w22

  v5 = objc_retain(a4);
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(a3, "componentsSeparatedByString:", CFSTR(".")));
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "componentsSeparatedByString:", CFSTR(".")));
  v8 = 0LL;
  while ( 1 )
  {
    if ( (unsigned __int64)objc_msgSend(v6, "count") <= v8 && (unsigned __int64)objc_msgSend(v7, "count") <= v8
      || (unsigned __int64)objc_msgSend(v6, "count") <= v8 )
    {
LABEL_8:
      v13 = 0;
      goto LABEL_10;
    }
    if ( (unsigned __int64)objc_msgSend(v7, "count") <= v8 )
      break;
    v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "objectAtIndexedSubscript:", v8));
    v10 = objc_msgSend(v9, "integerValue");
    objc_release(v9);
    v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "objectAtIndexedSubscript:", v8));
    v12 = objc_msgSend(v11, "integerValue");
    objc_release(v11);
    if ( (__int64)v10 > (__int64)v12 )
      break;
    ++v8;
    if ( (__int64)v10 < (__int64)v12 )
      goto LABEL_8;
  }
  v13 = 1;
LABEL_10:
  objc_release(v7);
  objc_release(v6);
  objc_release(v5);
  return v13;
}