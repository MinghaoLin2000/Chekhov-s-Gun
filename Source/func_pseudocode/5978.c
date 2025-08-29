-[PAMediaConversionServiceDefaultImageMetadataPolicy processMetadata:]
id __cdecl -[PAMediaConversionServiceDefaultImageMetadataPolicy processMetadata:](
        PAMediaConversionServiceDefaultImageMetadataPolicy *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  NSNumber *v5; // x22
  NSMutableDictionary *v6; // x20
  NSArray *v7; // x21
  void *v8; // x0
  void *v9; // x22
  __int64 v10; // x26
  void *i; // x27
  __int64 v12; // x23
  void *v13; // x24
  void *v14; // x0
  void *v15; // x23
  void *v16; // x24
  void *v17; // x0
  void *v18; // x23
  void *v19; // x24
  void *v20; // x22
  void *v21; // x25
  __int64 v22; // x24
  void *v23; // x26
  __int64 v24; // x24
  void *v25; // x26
  __int128 v27; // [xsp+50h] [xbp-120h] BYREF
  __int128 v28; // [xsp+60h] [xbp-110h]
  __int128 v29; // [xsp+70h] [xbp-100h]
  __int128 v30; // [xsp+80h] [xbp-F0h]
  _BYTE v31[128]; // [xsp+98h] [xbp-D8h] BYREF
  __int64 vars8; // [xsp+178h] [xbp+8h]

  v4 = objc_retain(a3);
  -[PAMediaConversionServiceDefaultImageMetadataPolicy lossyCompressionQuality](self, "lossyCompressionQuality");
  v5 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithFloat:](&OBJC_CLASS___NSNumber, "numberWithFloat:"));
  v6 = objc_retainAutoreleasedReturnValue(
         +[NSMutableDictionary dictionaryWithObjectsAndKeys:](
           &OBJC_CLASS___NSMutableDictionary,
           "dictionaryWithObjectsAndKeys:",
           v5,
           kCGImageDestinationLossyCompressionQuality,
           0LL));
  objc_release(v5);
  v7 = objc_retainAutoreleasedReturnValue(
         +[NSArray arrayWithObjects:](
           &OBJC_CLASS___NSArray,
           "arrayWithObjects:",
           kCGImagePropertyExifDictionary,
           kCGImagePropertyExifAuxDictionary,
           kCGImagePropertyGPSDictionary,
           kCGImagePropertyMakerCanonDictionary,
           kCGImagePropertyMakerCanonDictionary,
           kCGImagePropertyMakerNikonDictionary,
           kCGImagePropertyMakerMinoltaDictionary,
           kCGImagePropertyMakerFujiDictionary,
           kCGImagePropertyMakerOlympusDictionary,
           kCGImagePropertyMakerPentaxDictionary,
           0LL));
  v27 = 0u;
  v28 = 0u;
  v29 = 0u;
  v30 = 0u;
  v8 = -[NSArray countByEnumeratingWithState:objects:count:](
         v7,
         "countByEnumeratingWithState:objects:count:",
         &v27,
         v31,
         16LL);
  if ( v8 )
  {
    v9 = v8;
    v10 = *(_QWORD *)v28;
    do
    {
      for ( i = 0LL; i != v9; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v28 != v10 )
          objc_enumerationMutation(v7);
        v12 = *(_QWORD *)(*((_QWORD *)&v27 + 1) + 8LL * (_QWORD)i);
        v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectForKey:", v12));
        if ( v13 )
          -[NSMutableDictionary setObject:forKey:](v6, "setObject:forKey:", v13, v12);
        objc_release(v13);
      }
      v9 = -[NSArray countByEnumeratingWithState:objects:count:](
             v7,
             "countByEnumeratingWithState:objects:count:",
             &v27,
             v31,
             16LL);
    }
    while ( v9 );
  }
  v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectForKey:", kCGImagePropertyIPTCDictionary));
  if ( v14 )
  {
    v15 = v14;
    v16 = objc_msgSend(v14, "mutableCopy");
    objc_release(v15);
    objc_msgSend(v16, "removeObjectForKey:", kCGImagePropertyIPTCImageOrientation);
    -[NSMutableDictionary setObject:forKey:](v6, "setObject:forKey:", v16, kCGImagePropertyIPTCDictionary);
    objc_release(v16);
  }
  v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectForKey:", kCGImagePropertyTIFFDictionary));
  if ( v17 )
  {
    v18 = v17;
    v19 = objc_msgSend(v17, "mutableCopy");
    objc_release(v18);
    objc_msgSend(v19, "removeObjectForKey:", kCGImagePropertyTIFFOrientation);
    -[NSMutableDictionary setObject:forKey:](v6, "setObject:forKey:", v19, kCGImagePropertyTIFFDictionary);
  }
  else
  {
    v19 = 0LL;
  }
  v20 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectForKey:", kCGImagePropertyMakerAppleDictionary));
  if ( v20 )
  {
    v21 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSMutableDictionary), "initWithCapacity:", 2LL);
    objc_release(v19);
    v22 = AVAppleMakerNote_MeteorHeadroom;
    v23 = objc_retainAutoreleasedReturnValue(objc_msgSend(v20, "objectForKeyedSubscript:", AVAppleMakerNote_MeteorHeadroom));
    objc_msgSend(v21, "setObject:forKeyedSubscript:", v23, v22);
    objc_release(v23);
    v24 = AVAppleMakerNote_MeteorPlusGainMap;
    v25 = objc_retainAutoreleasedReturnValue(objc_msgSend(v20, "objectForKeyedSubscript:", AVAppleMakerNote_MeteorPlusGainMap));
    objc_msgSend(v21, "setObject:forKeyedSubscript:", v25, v24);
    objc_release(v25);
    -[NSMutableDictionary setObject:forKey:](v6, "setObject:forKey:", v21, kCGImagePropertyMakerAppleDictionary);
    v19 = v21;
  }
  objc_release(v20);
  objc_release(v19);
  objc_release(v7);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}