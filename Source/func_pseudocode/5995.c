-[PAMediaConversionServiceCompositeImageMetadataPolicy processMetadata:]
id __cdecl -[PAMediaConversionServiceCompositeImageMetadataPolicy processMetadata:](
        PAMediaConversionServiceCompositeImageMetadataPolicy *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  NSArray *v5; // x20
  void *v6; // x0
  void *v7; // x21
  __int64 v8; // x23
  void *i; // x24
  void *v10; // x22
  void *v11; // x22
  __int128 v13; // [xsp+0h] [xbp-110h] BYREF
  __int128 v14; // [xsp+10h] [xbp-100h]
  __int128 v15; // [xsp+20h] [xbp-F0h]
  __int128 v16; // [xsp+30h] [xbp-E0h]
  _BYTE v17[128]; // [xsp+48h] [xbp-C8h] BYREF
  __int64 vars8; // [xsp+118h] [xbp+8h]

  v4 = objc_retain(a3);
  v13 = 0u;
  v14 = 0u;
  v15 = 0u;
  v16 = 0u;
  v5 = objc_retainAutoreleasedReturnValue(-[PAMediaConversionServiceCompositeImageMetadataPolicy policies](self, "policies", 0LL));
  v6 = -[NSArray countByEnumeratingWithState:objects:count:](
         v5,
         "countByEnumeratingWithState:objects:count:",
         &v13,
         v17,
         16LL);
  if ( v6 )
  {
    v7 = v6;
    v8 = *(_QWORD *)v14;
    do
    {
      for ( i = 0LL; i != v7; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v14 != v8 )
          objc_enumerationMutation(v5);
        v10 = *(void **)(*((_QWORD *)&v13 + 1) + 8LL * (_QWORD)i);
        if ( (unsigned int)objc_msgSend(v10, "metadataNeedsProcessing:", v4) )
        {
          v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "processMetadata:", v4));
          objc_release(v4);
          v4 = v11;
        }
      }
      v7 = -[NSArray countByEnumeratingWithState:objects:count:](
             v5,
             "countByEnumeratingWithState:objects:count:",
             &v13,
             v17,
             16LL);
    }
    while ( v7 );
  }
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}