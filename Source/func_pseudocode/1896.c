-[DeviceDragHandler objectsForDrag:]
id __cdecl -[DeviceDragHandler objectsForDrag:](DeviceDragHandler *self, SEL a2, id a3)
{
  void *v3; // x19
  void *v4; // x20
  unsigned int v5; // w21
  __int64 v6; // x1
  void *v7; // x21
  void *v8; // x0
  void *v9; // x22
  __int64 v10; // x28
  __int64 v11; // x19
  void *i; // x20
  void *v13; // x0
  void *v14; // x25
  void *v15; // x0
  void *v16; // x26
  NSDictionary *v17; // x27
  void *v18; // x20
  void *v19; // x22
  id v21; // [xsp+0h] [xbp-140h]
  void *v22; // [xsp+8h] [xbp-138h]
  __int128 v23; // [xsp+10h] [xbp-130h] BYREF
  __int128 v24; // [xsp+20h] [xbp-120h]
  __int128 v25; // [xsp+30h] [xbp-110h]
  __int128 v26; // [xsp+40h] [xbp-100h]
  __int64 v27; // [xsp+50h] [xbp-F0h] BYREF
  void *v28; // [xsp+58h] [xbp-E8h] BYREF
  _BYTE v29[128]; // [xsp+60h] [xbp-E0h] BYREF
  __int64 vars8; // [xsp+148h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(objc_msgSend(a3, "draggingPasteboard"));
  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "types"));
  v5 = (unsigned int)objc_msgSend(v4, "containsObject:", CFSTR("com.apple.iBooksX.BKLibraryAssetPasteboardType"));
  objc_release(v4);
  if ( v5 )
  {
    v21 = v3;
    v22 = (void *)objc_opt_new(&OBJC_CLASS___NSMutableArray, v6);
    v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "pasteboardItems"));
    v23 = 0u;
    v24 = 0u;
    v25 = 0u;
    v26 = 0u;
    v8 = objc_msgSend(v7, "countByEnumeratingWithState:objects:count:", &v23, v29, 16LL);
    if ( v8 )
    {
      v9 = v8;
      v10 = *(_QWORD *)v24;
      v11 = AMPDeviceObjectBookKitAssetIDKey;
      do
      {
        for ( i = 0LL; i != v9; i = (char *)i + 1 )
        {
          if ( *(_QWORD *)v24 != v10 )
            objc_enumerationMutation(v7);
          v13 = objc_retainAutoreleasedReturnValue(
                  objc_msgSend(
                    *(id *)(*((_QWORD *)&v23 + 1) + 8LL * (_QWORD)i),
                    "propertyListForType:",
                    CFSTR("com.apple.iBooksX.BKLibraryAssetPasteboardType")));
          v14 = v13;
          if ( v13 )
          {
            v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v13, "objectForKey:", CFSTR("assetID")));
            v16 = v15;
            if ( v15 )
            {
              v27 = v11;
              v28 = v15;
              v17 = objc_retainAutoreleasedReturnValue(
                      +[NSDictionary dictionaryWithObjects:forKeys:count:](
                        &OBJC_CLASS___NSDictionary,
                        "dictionaryWithObjects:forKeys:count:",
                        &v28,
                        &v27,
                        1LL));
              objc_msgSend(v22, "addObject:", v17);
              objc_release(v17);
            }
            objc_release(v16);
          }
          objc_release(v14);
        }
        v9 = objc_msgSend(v7, "countByEnumeratingWithState:objects:count:", &v23, v29, 16LL);
      }
      while ( v9 );
    }
    v18 = v22;
    v19 = objc_msgSend(v22, "count");
    objc_release(v7);
    if ( !v19 )
    {
      objc_release(v22);
      v18 = 0LL;
    }
    v3 = v21;
  }
  else
  {
    v18 = 0LL;
  }
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v18);
}