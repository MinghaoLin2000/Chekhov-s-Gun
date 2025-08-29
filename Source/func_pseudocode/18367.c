-[SCNSceneLoader consumeExtensions:]
void __cdecl -[SCNSceneLoader consumeExtensions:](SCNSceneLoader *self, SEL a2, id a3)
{
  id v3; // x19
  void *v4; // x0
  void *v5; // x21
  __int64 v6; // x26
  void *i; // x27
  __int64 v8; // x25
  __int64 v9; // x0
  void *v10; // x24
  __int128 v11; // [xsp+10h] [xbp-120h] BYREF
  __int128 v12; // [xsp+20h] [xbp-110h]
  __int128 v13; // [xsp+30h] [xbp-100h]
  __int128 v14; // [xsp+40h] [xbp-F0h]
  _BYTE v15[128]; // [xsp+58h] [xbp-D8h] BYREF

  v3 = objc_retain(a3);
  v11 = 0u;
  v12 = 0u;
  v13 = 0u;
  v14 = 0u;
  v4 = objc_msgSend(v3, "countByEnumeratingWithState:objects:count:", &v11, v15, 16LL);
  if ( v4 )
  {
    v5 = v4;
    v6 = *(_QWORD *)v12;
    do
    {
      for ( i = 0LL; i != v5; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v12 != v6 )
          objc_enumerationMutation(v3);
        v8 = *(_QWORD *)(*((_QWORD *)&v11 + 1) + 8LL * (_QWORD)i);
        v9 = C3DIOCreateCStringFromCFString(v8);
        if ( v9 )
        {
          v10 = (void *)v9;
          if ( (unsigned int)sandbox_consume_fs_extension(v9, 0LL) )
            NSLog(&CFSTR("Could not consume extension for: %s").isa, v10);
          else
            NSLog(&CFSTR("Did consume extension for %@").isa, v8);
          free(v10);
        }
        else
        {
          NSLog(&CFSTR("[SCNSceneLoader] Could not get extension for: %@").isa, v8);
        }
      }
      v5 = objc_msgSend(v3, "countByEnumeratingWithState:objects:count:", &v11, v15, 16LL);
    }
    while ( v5 );
  }
  objc_release(v3);
}