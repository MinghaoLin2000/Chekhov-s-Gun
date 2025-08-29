-[AMPPhotoKitImporter getPersonDictionary]
id __cdecl -[AMPPhotoKitImporter getPersonDictionary](AMPPhotoKitImporter *self, SEL a2)
{
  id v3; // x19
  id v4; // x20
  void *v5; // x21
  id v6; // x20
  void *v7; // x21
  __int64 v8; // x24
  void *i; // x25
  void *v10; // x22
  void *v11; // x23
  bool v12; // w26
  void *v13; // x23
  __int128 v15; // [xsp+0h] [xbp-120h] BYREF
  __int128 v16; // [xsp+10h] [xbp-110h]
  __int128 v17; // [xsp+20h] [xbp-100h]
  __int128 v18; // [xsp+30h] [xbp-F0h]
  _BYTE v19[128]; // [xsp+48h] [xbp-D8h] BYREF
  __int64 vars8; // [xsp+128h] [xbp+8h]

  v3 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableDictionary);
  v4 = objc_retainAutoreleasedReturnValue(-[AMPPhotoKitImporter getFetchOptionsForFetchLimit:](self, "getFetchOptionsForFetchLimit:", 0LL));
  v5 = objc_retainAutoreleasedReturnValue(+[PHPerson fetchPersonsWithOptions:](&OBJC_CLASS___PHPerson, "fetchPersonsWithOptions:", v4));
  objc_release(v4);
  v17 = 0u;
  v18 = 0u;
  v15 = 0u;
  v16 = 0u;
  v6 = objc_retain(v5);
  v7 = objc_msgSend(v6, "countByEnumeratingWithState:objects:count:", &v15, v19, 16LL);
  if ( v7 )
  {
    v8 = *(_QWORD *)v16;
    do
    {
      for ( i = 0LL; i != v7; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v16 != v8 )
          objc_enumerationMutation(v6);
        v10 = *(void **)(*((_QWORD *)&v15 + 1) + 8LL * (_QWORD)i);
        v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "name", (_QWORD)v15));
        v12 = objc_msgSend(v11, "length") == 0LL;
        objc_release(v11);
        if ( !v12 )
        {
          v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "uuid"));
          objc_msgSend(v3, "setObject:forKeyedSubscript:", v10, v13);
          objc_release(v13);
        }
      }
      v7 = objc_msgSend(v6, "countByEnumeratingWithState:objects:count:", &v15, v19, 16LL);
    }
    while ( v7 );
  }
  objc_release(v6);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}