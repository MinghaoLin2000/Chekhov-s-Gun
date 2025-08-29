+[TSUSafeSaveAssistant writeAttributes:toURL:]
void __cdecl +[TSUSafeSaveAssistant writeAttributes:toURL:](id a1, SEL a2, id a3, id a4)
{
  id v5; // x19
  id v6; // x20
  void *v7; // x21
  void *v8; // x22
  NSFileManager *v9; // x23
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v5 = objc_retain(a3);
  v6 = objc_retain(a4);
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "objectForKey:", NSFileExtensionHidden));
  if ( objc_msgSend(v5, "count") != (void *)(v7 != 0LL) || (unsigned int)objc_msgSend(v7, "boolValue") )
  {
    v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "path"));
    if ( v8 )
    {
      v9 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
      -[NSFileManager setAttributes:ofItemAtPath:error:](v9, "setAttributes:ofItemAtPath:error:", v5, v8, 0LL);
      objc_release(v9);
    }
    objc_release(v8);
  }
  objc_release(v7);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}