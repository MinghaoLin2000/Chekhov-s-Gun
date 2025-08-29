_PKURLWithComponents
id __fastcall PKURLWithComponents(void *a1, void *a2, void *a3, void *a4)
{
  id v7; // x19
  id v8; // x20
  _UNKNOWN **v9; // x21
  id v10; // x22
  id v11; // x23
  void *v12; // x26
  _UNKNOWN **v13; // x27
  void *v14; // x24
  void *v15; // x24
  __int64 vars8; // [xsp+78h] [xbp+8h]

  v7 = objc_retain(a1);
  v8 = objc_retain(a2);
  v9 = objc_retain(a3);
  v10 = objc_retain(a4);
  v11 = objc_alloc_init((Class)&OBJC_CLASS___NSURLComponents);
  v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "lowercaseString"));
  objc_msgSend(v11, "setScheme:", v12);
  objc_release(v12);
  objc_msgSend(v11, "setHost:", v8);
  v13 = v9;
  if ( !v9 )
  {
    v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "scheme"));
    v13 = objc_retainAutoreleasedReturnValue(PKDefaultPortForScheme(v12));
  }
  objc_msgSend(v11, "setPort:", v13);
  if ( !v9 )
  {
    objc_release(v13);
    objc_release(v12);
  }
  if ( objc_msgSend(v10, "length") )
  {
    if ( (unsigned int)objc_msgSend(v10, "characterAtIndex:", 0LL) != 47 )
    {
      v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(CFSTR("/"), "stringByAppendingString:", v10));
      objc_release(v10);
      v10 = v14;
    }
    objc_msgSend(v11, "setPath:", v10);
  }
  v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "URL"));
  objc_release(v11);
  objc_release(v10);
  objc_release(v9);
  objc_release(v8);
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v15);
}