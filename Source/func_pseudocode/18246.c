-[INHService loadBundleURLsForBundleIdentifiers:completion:]
void __cdecl -[INHService loadBundleURLsForBundleIdentifiers:completion:](INHService *self, SEL a2, id a3, id a4)
{
  id v6; // x19
  void (__fastcall **v7)(id, _QWORD, id); // x20
  unsigned __int8 v8; // w22
  id v9; // x0
  void *v10; // x21
  NSMutableDictionary *v11; // x22
  id v12; // x23
  void *v13; // x0
  void *v14; // x24
  __int64 v15; // x21
  void *i; // x20
  __int64 v17; // x26
  void *v18; // x25
  void *v19; // x27
  id v20; // x27
  void *v21; // x28
  void *v22; // x27
  id v23; // [xsp+8h] [xbp-148h]
  void (__fastcall **v24)(id, _QWORD, id); // [xsp+10h] [xbp-140h]
  __int128 v25; // [xsp+20h] [xbp-130h] BYREF
  __int128 v26; // [xsp+30h] [xbp-120h]
  __int128 v27; // [xsp+40h] [xbp-110h]
  __int128 v28; // [xsp+50h] [xbp-100h]
  id v29; // [xsp+68h] [xbp-E8h] BYREF
  _BYTE v30[128]; // [xsp+70h] [xbp-E0h] BYREF

  v6 = objc_retain(a3);
  v7 = (void (__fastcall **)(id, _QWORD, id))objc_retain(a4);
  if ( objc_msgSend(v6, "count") )
  {
    v29 = 0LL;
    v8 = -[INHService _checkServiceAccessWithError:](self, "_checkServiceAccessWithError:", &v29);
    v9 = objc_retain(v29);
    v10 = v9;
    if ( (v8 & 1) != 0 )
    {
      v23 = v9;
      v24 = v7;
      v11 = objc_opt_new(&OBJC_CLASS___NSMutableDictionary);
      v25 = 0u;
      v26 = 0u;
      v27 = 0u;
      v28 = 0u;
      v12 = objc_retain(v6);
      v13 = objc_msgSend(v12, "countByEnumeratingWithState:objects:count:", &v25, v30, 16LL);
      if ( v13 )
      {
        v14 = v13;
        v15 = *(_QWORD *)v26;
        do
        {
          for ( i = 0LL; i != v14; i = (char *)i + 1 )
          {
            if ( *(_QWORD *)v26 != v15 )
              objc_enumerationMutation(v12);
            v17 = *(_QWORD *)(*((_QWORD *)&v25 + 1) + 8LL * (_QWORD)i);
            v18 = objc_retainAutoreleasedReturnValue(
                    +[LSBundleProxy bundleProxyForIdentifier:](
                      &OBJC_CLASS___LSBundleProxy,
                      "bundleProxyForIdentifier:",
                      v17));
            v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v18, "bundleURL"));
            objc_release(v19);
            if ( v19 )
            {
              v20 = objc_alloc((Class)&OBJC_CLASS___NSSecurityScopedURLWrapper);
              v21 = objc_retainAutoreleasedReturnValue(objc_msgSend(v18, "bundleURL"));
              v22 = objc_msgSend(v20, "initWithURL:readonly:", v21, 1LL);
              -[NSMutableDictionary setObject:forKey:](v11, "setObject:forKey:", v22, v17);
              objc_release(v22);
              objc_release(v21);
            }
            objc_release(v18);
          }
          v14 = objc_msgSend(v12, "countByEnumeratingWithState:objects:count:", &v25, v30, 16LL);
        }
        while ( v14 );
      }
      objc_release(v12);
      v7 = v24;
      ((void (__fastcall **)(id, NSMutableDictionary *, id))v24)[2](v24, v11, 0LL);
      objc_release(v11);
      v10 = v23;
    }
    else
    {
      v7[2](v7, 0LL, v9);
    }
    objc_release(v10);
  }
  else
  {
    v7[2](v7, 0LL, 0LL);
  }
  objc_release(v7);
  objc_release(v6);
}