-[ExportSessionVideoTranscodingTask metadataItemsFromOptionsAndInputAsset:]
id __cdecl -[ExportSessionVideoTranscodingTask metadataItemsFromOptionsAndInputAsset:](
        ExportSessionVideoTranscodingTask *self,
        SEL a2,
        id a3)
{
  void *v4; // x27
  NSMutableDictionary *v5; // x20
  __int64 v6; // x1
  void *v7; // x21
  void *v8; // x19
  unsigned int v9; // w22
  void *v10; // x0
  void *v11; // x26
  void *v12; // x19
  unsigned int v13; // w22
  void *v14; // x0
  void *v15; // x19
  void *v16; // x19
  unsigned int v17; // w22
  void *v18; // x0
  void *v19; // x19
  void *v20; // x23
  void *v21; // x19
  id v22; // x23
  void *v23; // x0
  void *v24; // x22
  __int64 v25; // x27
  void *i; // x28
  void *v27; // x24
  void *v28; // x25
  unsigned __int8 v29; // w26
  void *v30; // x22
  AVMutableMetadataItem *v31; // x23
  NSLocale *v32; // x24
  AVMutableMetadataItem *v33; // x0
  id v34; // x23
  void *v35; // x0
  void *v36; // x22
  __int64 v37; // x25
  __int64 v38; // x28
  __int64 v39; // x24
  __int64 v40; // x0
  AVMutableMetadataItem *v41; // x22
  AVMutableMetadataItem *v42; // x23
  void *v43; // x22
  void *v44; // x0
  void *v45; // x24
  NSTimeZone *v46; // x25
  void *v47; // x25
  AVMutableMetadataItem *v48; // x22
  AVMutableMetadataItem *v49; // x22
  AVMutableMetadataItem *v50; // x22
  void *v51; // x22
  void *v52; // x23
  void *v53; // x22
  void *v55; // [xsp+0h] [xbp-220h]
  void *v56; // [xsp+8h] [xbp-218h]
  ExportSessionVideoTranscodingTask *v57; // [xsp+10h] [xbp-210h]
  void *v58; // [xsp+18h] [xbp-208h]
  id v59; // [xsp+20h] [xbp-200h]
  id v60; // [xsp+28h] [xbp-1F8h]
  id v61; // [xsp+30h] [xbp-1F0h]
  id v62; // [xsp+38h] [xbp-1E8h]
  __int128 v63; // [xsp+40h] [xbp-1E0h] BYREF
  __int128 v64; // [xsp+50h] [xbp-1D0h]
  __int128 v65; // [xsp+60h] [xbp-1C0h]
  __int128 v66; // [xsp+70h] [xbp-1B0h]
  __int128 v67; // [xsp+80h] [xbp-1A0h] BYREF
  __int128 v68; // [xsp+90h] [xbp-190h]
  __int128 v69; // [xsp+A0h] [xbp-180h]
  __int128 v70; // [xsp+B0h] [xbp-170h]
  _BYTE v71[128]; // [xsp+C0h] [xbp-160h] BYREF
  _BYTE v72[128]; // [xsp+140h] [xbp-E0h] BYREF
  __int64 vars8; // [xsp+228h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(a3, "metadata"));
  v5 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask options](self, "options"));
  v7 = (void *)objc_opt_new(&OBJC_CLASS___NSMutableSet, v6);
  v8 = objc_retainAutoreleasedReturnValue(
         -[NSMutableDictionary objectForKeyedSubscript:](
           v5,
           "objectForKeyedSubscript:",
           CFSTR("PAMediaConversionServiceOptionAVMetadataIncludeLocationKey")));
  v9 = (unsigned int)objc_msgSend(v8, "boolValue");
  objc_release(v8);
  v10 = objc_retainAutoreleasedReturnValue(
          -[NSMutableDictionary objectForKeyedSubscript:](
            v5,
            "objectForKeyedSubscript:",
            CFSTR("PAMediaConversionServiceOptionAVMetadataLocationKey")));
  v11 = v10;
  if ( !v9 || v10 )
  {
    objc_msgSend(v7, "addObject:", AVMetadataIdentifierQuickTimeMetadataLocationISO6709);
    objc_msgSend(v7, "addObject:", AVMetadataIdentifierQuickTimeUserDataLocationISO6709);
    objc_msgSend(v7, "addObject:", AVMetadataIdentifier3GPUserDataLocation);
  }
  v12 = objc_retainAutoreleasedReturnValue(
          -[NSMutableDictionary objectForKeyedSubscript:](
            v5,
            "objectForKeyedSubscript:",
            CFSTR("PAMediaConversionServiceOptionAVMetadataIncludeDescriptionKey")));
  v13 = (unsigned int)objc_msgSend(v12, "boolValue");
  objc_release(v12);
  v14 = objc_retainAutoreleasedReturnValue(
          -[NSMutableDictionary objectForKeyedSubscript:](
            v5,
            "objectForKeyedSubscript:",
            CFSTR("PAMediaConversionServiceOptionAVMetadataDescriptionKey")));
  v15 = v14;
  if ( !v13 || v14 )
  {
    objc_msgSend(v7, "addObject:", AVMetadataCommonIdentifierDescription);
    objc_msgSend(v7, "addObject:", AVMetadataIdentifierQuickTimeMetadataDescription);
    objc_msgSend(v7, "addObject:", AVMetadataIdentifierQuickTimeUserDataDescription);
    objc_msgSend(v7, "addObject:", AVMetadataIdentifier3GPUserDataDescription);
  }
  v59 = v15;
  v16 = objc_retainAutoreleasedReturnValue(
          -[NSMutableDictionary objectForKeyedSubscript:](
            v5,
            "objectForKeyedSubscript:",
            CFSTR("PAMediaConversionServiceOptionAVMetadataIncludeAccessibilityDescriptionKey")));
  v17 = (unsigned int)objc_msgSend(v16, "boolValue");
  objc_release(v16);
  v18 = objc_retainAutoreleasedReturnValue(
          -[NSMutableDictionary objectForKeyedSubscript:](
            v5,
            "objectForKeyedSubscript:",
            CFSTR("PAMediaConversionServiceOptionAVMetadataAccessibilityDescriptionKey")));
  v19 = v18;
  if ( !v17 || v18 )
    objc_msgSend(v7, "addObject:", AVMetadataCommonKeyAccessibilityDescription);
  v61 = objc_retainAutoreleasedReturnValue(
          -[NSMutableDictionary objectForKeyedSubscript:](
            v5,
            "objectForKeyedSubscript:",
            CFSTR("PAMediaConversionServiceOptionAVMetadataKeywordsKey")));
  if ( v61 )
    objc_msgSend(v7, "addObject:", AVMetadataIdentifierQuickTimeMetadataKeywords);
  v60 = objc_retainAutoreleasedReturnValue(
          -[NSMutableDictionary objectForKeyedSubscript:](
            v5,
            "objectForKeyedSubscript:",
            CFSTR("PAMediaConversionServiceOptionAVMetadataContentCreationDateKey")));
  if ( v60 )
  {
    objc_msgSend(v7, "addObject:", AVMetadataCommonIdentifierCreationDate);
    objc_msgSend(v7, "addObject:", AVMetadataIdentifierQuickTimeUserDataCreationDate);
    objc_msgSend(v7, "addObject:", AVMetadataIdentifierQuickTimeMetadataCreationDate);
  }
  v56 = v19;
  v20 = objc_retainAutoreleasedReturnValue(
          -[NSMutableDictionary objectForKeyedSubscript:](
            v5,
            "objectForKeyedSubscript:",
            CFSTR("PAMediaConversionServiceOptionAVMetadataTitleKey")));
  if ( v20 )
    objc_msgSend(v7, "addObject:", AVMetadataIdentifierQuickTimeMetadataTitle);
  v21 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v62 = v20;
  v57 = self;
  v58 = v11;
  if ( objc_msgSend(v4, "count") )
  {
    v69 = 0u;
    v70 = 0u;
    v67 = 0u;
    v68 = 0u;
    v55 = v4;
    v22 = objc_retain(v4);
    v23 = objc_msgSend(v22, "countByEnumeratingWithState:objects:count:", &v67, v72, 16LL);
    if ( v23 )
    {
      v24 = v23;
      v25 = *(_QWORD *)v68;
      do
      {
        for ( i = 0LL; i != v24; i = (char *)i + 1 )
        {
          if ( *(_QWORD *)v68 != v25 )
            objc_enumerationMutation(v22);
          v27 = *(void **)(*((_QWORD *)&v67 + 1) + 8LL * (_QWORD)i);
          v28 = objc_retainAutoreleasedReturnValue(objc_msgSend(v27, "identifier", v55));
          v29 = (unsigned __int8)objc_msgSend(v7, "containsObject:", v28);
          objc_release(v28);
          if ( (v29 & 1) == 0 )
            objc_msgSend(v21, "addObject:", v27);
        }
        v24 = objc_msgSend(v22, "countByEnumeratingWithState:objects:count:", &v67, v72, 16LL);
      }
      while ( v24 );
    }
    objc_release(v22);
    v4 = v55;
    self = v57;
    v11 = v58;
    v20 = v62;
  }
  if ( v11 )
  {
    v30 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "iso6709Notation"));
    v31 = objc_retainAutoreleasedReturnValue(+[AVMutableMetadataItem metadataItem](&OBJC_CLASS___AVMutableMetadataItem, "metadataItem"));
    -[AVMutableMetadataItem setKeySpace:](v31, "setKeySpace:", AVMetadataKeySpaceCommon);
    -[AVMutableMetadataItem setKey:](v31, "setKey:", AVMetadataCommonKeyLocation);
    -[AVMutableMetadataItem setValue:](v31, "setValue:", v30);
    v32 = objc_retainAutoreleasedReturnValue(+[NSLocale currentLocale](&OBJC_CLASS___NSLocale, "currentLocale"));
    -[AVMutableMetadataItem setLocale:](v31, "setLocale:", v32);
    objc_release(v32);
    objc_msgSend(v21, "addObject:", v31);
    v33 = v31;
    v20 = v62;
    objc_release(v33);
    objc_release(v30);
  }
  if ( objc_msgSend(v61, "count", v55) )
  {
    v65 = 0u;
    v66 = 0u;
    v63 = 0u;
    v64 = 0u;
    v34 = objc_retain(v61);
    v35 = objc_msgSend(v34, "countByEnumeratingWithState:objects:count:", &v63, v71, 16LL);
    if ( v35 )
    {
      v36 = v35;
      v37 = *(_QWORD *)v64;
LABEL_32:
      v38 = 0LL;
      while ( 1 )
      {
        if ( *(_QWORD *)v64 != v37 )
          objc_enumerationMutation(v34);
        v39 = *(_QWORD *)(*((_QWORD *)&v63 + 1) + 8 * v38);
        v40 = objc_opt_class(&OBJC_CLASS___NSString);
        if ( (objc_opt_isKindOfClass(v39, v40) & 1) == 0 )
          break;
        if ( v36 == (void *)++v38 )
        {
          v36 = objc_msgSend(v34, "countByEnumeratingWithState:objects:count:", &v63, v71, 16LL);
          if ( v36 )
            goto LABEL_32;
          goto LABEL_38;
        }
      }
    }
    else
    {
LABEL_38:
      objc_release(v34);
      v34 = objc_retainAutoreleasedReturnValue(objc_msgSend(v34, "componentsJoinedByString:", CFSTR(",")));
      v41 = objc_retainAutoreleasedReturnValue(+[AVMutableMetadataItem metadataItem](&OBJC_CLASS___AVMutableMetadataItem, "metadataItem"));
      -[AVMutableMetadataItem setIdentifier:](v41, "setIdentifier:", AVMetadataIdentifierQuickTimeMetadataKeywords);
      -[AVMutableMetadataItem setValue:](v41, "setValue:", v34);
      objc_msgSend(v21, "addObject:", v41);
      objc_release(v41);
    }
    objc_release(v34);
    self = v57;
    v11 = v58;
    v20 = v62;
  }
  if ( v60 )
  {
    v42 = objc_retainAutoreleasedReturnValue(+[AVMutableMetadataItem metadataItem](&OBJC_CLASS___AVMutableMetadataItem, "metadataItem"));
    -[AVMutableMetadataItem setKeySpace:](v42, "setKeySpace:", AVMetadataKeySpaceCommon);
    -[AVMutableMetadataItem setKey:](v42, "setKey:", AVMetadataCommonKeyCreationDate);
    v43 = objc_retainAutoreleasedReturnValue(objc_msgSend((id)objc_opt_class(self), "videoDateFormatter"));
    v44 = objc_retainAutoreleasedReturnValue(
            -[NSMutableDictionary objectForKeyedSubscript:](
              v5,
              "objectForKeyedSubscript:",
              CFSTR("PAMediaConversionServiceOptionAVMetadataContentCreationDateTimeZoneOffsetKey")));
    v45 = v44;
    if ( v44 )
    {
      v46 = objc_retainAutoreleasedReturnValue(
              +[NSTimeZone timeZoneForSecondsFromGMT:](
                &OBJC_CLASS___NSTimeZone,
                "timeZoneForSecondsFromGMT:",
                objc_msgSend(v44, "integerValue")));
      objc_msgSend(v43, "setTimeZone:", v46);
      objc_release(v46);
    }
    v47 = objc_retainAutoreleasedReturnValue(objc_msgSend(v43, "stringFromDate:", v60));
    -[AVMutableMetadataItem setValue:](v42, "setValue:", v47);
    objc_msgSend(v21, "addObject:", v42);
    objc_release(v47);
    objc_release(v45);
    objc_release(v43);
    objc_release(v42);
    v20 = v62;
  }
  if ( v20 )
  {
    v48 = objc_retainAutoreleasedReturnValue(+[AVMutableMetadataItem metadataItem](&OBJC_CLASS___AVMutableMetadataItem, "metadataItem"));
    -[AVMutableMetadataItem setIdentifier:](v48, "setIdentifier:", AVMetadataIdentifierQuickTimeMetadataTitle);
    -[AVMutableMetadataItem setValue:](v48, "setValue:", v20);
    objc_msgSend(v21, "addObject:", v48);
    objc_release(v48);
  }
  if ( v59 )
  {
    v49 = objc_retainAutoreleasedReturnValue(+[AVMutableMetadataItem metadataItem](&OBJC_CLASS___AVMutableMetadataItem, "metadataItem"));
    -[AVMutableMetadataItem setKeySpace:](v49, "setKeySpace:", AVMetadataKeySpaceCommon);
    -[AVMutableMetadataItem setKey:](v49, "setKey:", AVMetadataCommonKeyDescription);
    -[AVMutableMetadataItem setValue:](v49, "setValue:", v59);
    objc_msgSend(v21, "addObject:", v49);
    objc_release(v49);
  }
  if ( v56 )
  {
    v50 = objc_retainAutoreleasedReturnValue(+[AVMutableMetadataItem metadataItem](&OBJC_CLASS___AVMutableMetadataItem, "metadataItem"));
    -[AVMutableMetadataItem setKeySpace:](v50, "setKeySpace:", AVMetadataKeySpaceCommon);
    -[AVMutableMetadataItem setKey:](v50, "setKey:", AVMetadataCommonKeyAccessibilityDescription);
    -[AVMutableMetadataItem setValue:](v50, "setValue:", v56);
    objc_msgSend(v21, "addObject:", v50);
    objc_release(v50);
  }
  v51 = (void *)objc_opt_class(self);
  v52 = objc_msgSend(v21, "copy");
  v53 = objc_retainAutoreleasedReturnValue(objc_msgSend(v51, "metadataItemsByApplyingSignatureMetadataFromOptions:toMetadataItems:", v5, v52));
  objc_release(v52);
  objc_release(v21);
  objc_release(v62);
  objc_release(v60);
  objc_release(v61);
  objc_release(v56);
  objc_release(v59);
  objc_release(v11);
  objc_release(v7);
  objc_release(v5);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v53);
}