+[NSURL tsp_iWorkAVAssetURLWithUUID:filename:contentTypeUTI:]
id __cdecl +[NSURL tsp_iWorkAVAssetURLWithUUID:filename:contentTypeUTI:](id a1, SEL a2, id a3, id a4, id a5)
{
  id v7; // x20
  id v8; // x23
  id v9; // x21
  id v10; // x19
  void *v11; // x21
  void *v12; // x21
  void *v13; // x20
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v7 = objc_retain(a5);
  v8 = objc_retain(a4);
  v9 = objc_retain(a3);
  v10 = objc_alloc_init((Class)&OBJC_CLASS___NSURLComponents);
  objc_msgSend(v10, "setScheme:", CFSTR("iWorkAVAsset"));
  objc_msgSend(v10, "setHost:", v9);
  objc_release(v9);
  v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(CFSTR("/"), "stringByAppendingString:", v8));
  objc_release(v8);
  objc_msgSend(v10, "setPath:", v11);
  objc_release(v11);
  v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(CFSTR("uti="), "stringByAppendingString:", v7));
  objc_release(v7);
  objc_msgSend(v10, "setQuery:", v12);
  objc_release(v12);
  v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "URL"));
  objc_release(v10);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v13);
}