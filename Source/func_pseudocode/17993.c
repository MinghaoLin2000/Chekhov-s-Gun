-[PlugInLibraryService getLibraryEntryInfo:withReply:]
void __cdecl -[PlugInLibraryService getLibraryEntryInfo:withReply:](PlugInLibraryService *self, SEL a2, id a3, id a4)
{
  void (__fastcall **v5)(id, NSError *, id); // x19
  __int64 PluginByScheme; // x0
  __int64 v7; // x21
  void *v8; // x22
  id v9; // x20
  NSString *v10; // x24
  NSString *v11; // x24
  NSString *v12; // x23
  NSString *v13; // x23
  unsigned __int64 v14; // x23
  void *v15; // x24
  NSError *v16; // x21
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v5 = (void (__fastcall **)(id, NSError *, id))objc_retain(a4);
  PluginByScheme = FindPluginByScheme(a3);
  if ( PluginByScheme )
  {
    v7 = PluginByScheme;
    v8 = objc_msgSend(
           objc_alloc((Class)&OBJC_CLASS___NSMutableArray),
           "initWithCapacity:",
           *(unsigned int *)(PluginByScheme + 132));
    v9 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableDictionary);
    v10 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", CFSTR("%s"), *(_QWORD *)(v7 + 8)));
    objc_msgSend(v9, "setObject:forKeyedSubscript:", v10, CFSTR("plugin_path"));
    objc_release(v10);
    v11 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithFormat:](
              &OBJC_CLASS___NSString,
              "stringWithFormat:",
              CFSTR("%s"),
              *(_QWORD *)(v7 + 112)));
    objc_msgSend(v9, "setObject:forKeyedSubscript:", v11, CFSTR("fstypename"));
    objc_release(v11);
    v12 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithFormat:](
              &OBJC_CLASS___NSString,
              "stringWithFormat:",
              CFSTR("%s"),
              *(_QWORD *)(v7 + 120)));
    objc_msgSend(v9, "setObject:forKeyedSubscript:", v12, CFSTR("prefix"));
    objc_release(v12);
    v13 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithFormat:](
              &OBJC_CLASS___NSString,
              "stringWithFormat:",
              CFSTR("%d"),
              *(unsigned int *)(v7 + 132)));
    objc_msgSend(v9, "setObject:forKeyedSubscript:", v13, CFSTR("nschemes"));
    objc_release(v13);
    if ( *(_DWORD *)(v7 + 132) )
    {
      v14 = 0LL;
      do
      {
        v15 = *(void **)(v7 + 136 + 8 * v14);
        objc_msgSend(v8, "setObject:atIndexedSubscript:", v15, v14);
        objc_release(v15);
        ++v14;
      }
      while ( v14 < *(unsigned int *)(v7 + 132) );
    }
    objc_msgSend(v9, "setObject:forKeyedSubscript:", v8, CFSTR("schemes"));
    objc_release(v8);
    v16 = 0LL;
  }
  else
  {
    v16 = objc_retainAutoreleasedReturnValue(
            +[NSError errorWithDomain:code:userInfo:](
              &OBJC_CLASS___NSError,
              "errorWithDomain:code:userInfo:",
              NSPOSIXErrorDomain,
              2LL,
              0LL));
    v9 = 0LL;
  }
  v5[2](v5, v16, v9);
  objc_release(v9);
  objc_release(v16);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}