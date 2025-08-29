+[NSError tsp_readCorruptZipOfPackageErrorWithUserInfo:]
id __cdecl +[NSError tsp_readCorruptZipOfPackageErrorWithUserInfo:](id a1, SEL a2, id a3)
{
  id v4; // x19
  void *v5; // x0
  void *v6; // x21
  void *v7; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_msgSend(
         objc_alloc((Class)&OBJC_CLASS___NSMutableDictionary),
         "initWithCapacity:",
         (char *)objc_msgSend(v4, "count") + 1);
  v6 = v5;
  if ( v4 )
    objc_msgSend(v5, "addEntriesFromDictionary:", v4);
  objc_msgSend(v6, "setObject:forKeyedSubscript:", &__kCFBooleanTrue, CFSTR("TSPIsCorruptZipOfPackageError"));
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "tsp_readCorruptedDocumentErrorWithUserInfo:", v6));
  objc_release(v6);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}