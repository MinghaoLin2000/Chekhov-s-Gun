-[LSRLanguageModel oovWordsAndFrequenciesInNgramCount]
id __cdecl -[LSRLanguageModel oovWordsAndFrequenciesInNgramCount](LSRLanguageModel *self, SEL a2)
{
  id v3; // x19
  void *v4; // x20
  void *v5; // x0
  void *v6; // x21
  __int64 v7; // x24
  void *i; // x26
  void *v9; // x22
  NSNumber *v10; // x23
  void *v11; // x22
  void *v12; // x20
  __int128 v14; // [xsp+0h] [xbp-120h] BYREF
  __int128 v15; // [xsp+10h] [xbp-110h]
  __int128 v16; // [xsp+20h] [xbp-100h]
  __int128 v17; // [xsp+30h] [xbp-F0h]
  _BYTE v18[128]; // [xsp+48h] [xbp-D8h] BYREF
  __int64 vars8; // [xsp+128h] [xbp+8h]

  v3 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableDictionary);
  v14 = 0u;
  v15 = 0u;
  v16 = 0u;
  v17 = 0u;
  v4 = objc_retainAutoreleasedReturnValue(-[_EARAppLmData orderedOovs](self->_appLmData, "orderedOovs", 0LL));
  v5 = objc_msgSend(v4, "countByEnumeratingWithState:objects:count:", &v14, v18, 16LL);
  if ( v5 )
  {
    v6 = v5;
    v7 = *(_QWORD *)v15;
    do
    {
      for ( i = 0LL; i != v6; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v15 != v7 )
          objc_enumerationMutation(v4);
        v9 = *(void **)(*((_QWORD *)&v14 + 1) + 8LL * (_QWORD)i);
        v10 = objc_retainAutoreleasedReturnValue(
                +[NSNumber numberWithInteger:](
                  &OBJC_CLASS___NSNumber,
                  "numberWithInteger:",
                  objc_msgSend(v9, "frequency")));
        v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "orthography"));
        objc_msgSend(v3, "setObject:forKey:", v10, v11);
        objc_release(v11);
        objc_release(v10);
      }
      v6 = objc_msgSend(v4, "countByEnumeratingWithState:objects:count:", &v14, v18, 16LL);
    }
    while ( v6 );
  }
  objc_release(v4);
  v12 = objc_msgSend(v3, "copy");
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v12);
}