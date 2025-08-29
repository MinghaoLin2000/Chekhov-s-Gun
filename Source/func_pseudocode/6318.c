+[PAMediaConversionServiceSharedUtilitiesServiceSide loadCompositionFrom:formatIdentifier:formatVersion:secondaryDataURL:error:]
id __cdecl +[PAMediaConversionServiceSharedUtilitiesServiceSide loadCompositionFrom:formatIdentifier:formatVersion:secondaryDataURL:error:](
        id a1,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6,
        id *a7)
{
  id v13; // x25
  id v14; // x23
  id v15; // x22
  id v16; // x24
  __int64 v17; // x1
  void *v18; // x24
  void *v19; // x19
  void *v20; // x1
  void *v21; // x0
  void *v22; // x19
  void *v23; // x0
  void *v24; // x27
  __int64 v25; // x22
  __int64 v26; // x28
  void *v27; // x26
  void *v28; // x21
  void *v29; // x20
  unsigned int v30; // w23
  __int64 v31; // x1
  void *v32; // x20
  void *v33; // x20
  unsigned int v34; // w23
  __int64 v35; // x1
  void *v36; // x23
  void *v37; // x21
  void *v38; // x0
  void *v39; // x20
  unsigned int v40; // w23
  void *v41; // x25
  void *v42; // x23
  void *v43; // x0
  void *v44; // x20
  __int64 v45; // x1
  void *v46; // x19
  void *v47; // x19
  NSDictionary *v48; // x21
  void *v49; // x19
  void *v50; // x20
  void *v51; // x21
  void *v52; // x0
  void *v53; // x19
  id v54; // x19
  NSString *v55; // x20
  NSDictionary *v56; // x21
  void *v58; // x20
  NSAssertionHandler *v59; // x21
  id v60; // [xsp+20h] [xbp-1C0h]
  id *v61; // [xsp+28h] [xbp-1B8h]
  id v62; // [xsp+30h] [xbp-1B0h]
  id v63; // [xsp+38h] [xbp-1A8h]
  id v64; // [xsp+40h] [xbp-1A0h]
  id v65; // [xsp+48h] [xbp-198h]
  __int64 v66; // [xsp+50h] [xbp-190h]
  __int64 v67; // [xsp+58h] [xbp-188h]
  __int64 v68; // [xsp+60h] [xbp-180h]
  __int64 v69; // [xsp+68h] [xbp-178h]
  __int128 v70; // [xsp+70h] [xbp-170h] BYREF
  __int128 v71; // [xsp+80h] [xbp-160h]
  __int128 v72; // [xsp+90h] [xbp-150h]
  __int128 v73; // [xsp+A0h] [xbp-140h]
  uint8_t buf[4]; // [xsp+B0h] [xbp-130h] BYREF
  id v75; // [xsp+B4h] [xbp-12Ch]
  __int16 v76; // [xsp+BCh] [xbp-124h]
  void *v77; // [xsp+BEh] [xbp-122h]
  __int16 v78; // [xsp+C6h] [xbp-11Ah]
  void *v79; // [xsp+C8h] [xbp-118h]
  __int16 v80; // [xsp+D0h] [xbp-110h]
  void *v81; // [xsp+D2h] [xbp-10Eh]
  const __CFString *v82; // [xsp+E0h] [xbp-100h] BYREF
  void *v83; // [xsp+E8h] [xbp-F8h] BYREF
  _BYTE v84[128]; // [xsp+F0h] [xbp-F0h] BYREF
  NSErrorUserInfoKey v85; // [xsp+170h] [xbp-70h] BYREF
  NSString *v86; // [xsp+178h] [xbp-68h] BYREF
  __int64 vars8; // [xsp+1E8h] [xbp+8h]

  v13 = objc_retain(a3);
  v14 = objc_retain(a4);
  v15 = objc_retain(a5);
  v16 = objc_retain(a6);
  if ( !a7 )
  {
    v59 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v59,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      a1,
      CFSTR("PAMediaConversionServiceSharedUtilitiesServiceSide.m"),
      1703LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("error != nil"));
    objc_release(v59);
  }
  if ( ((unsigned int)+[PIPhotoEditHelper canInterpretDataWithFormatIdentifier:formatVersion:](
                        &OBJC_CLASS___PIPhotoEditHelper,
                        "canInterpretDataWithFormatIdentifier:formatVersion:",
                        v14,
                        v15) & 1) == 0 )
  {
    v54 = objc_alloc((Class)&OBJC_CLASS___NSError);
    v85 = NSLocalizedFailureReasonErrorKey;
    v55 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithFormat:](
              &OBJC_CLASS___NSString,
              "stringWithFormat:",
              CFSTR("Cannot interpret data with identifier (%@) and format version (%@)"),
              v14,
              v15));
    v86 = v55;
    v56 = objc_retainAutoreleasedReturnValue(
            +[NSDictionary dictionaryWithObjects:forKeys:count:](
              &OBJC_CLASS___NSDictionary,
              "dictionaryWithObjects:forKeys:count:",
              &v86,
              &v85,
              1LL));
    *a7 = objc_autorelease(objc_msgSend(v54, "initWithDomain:code:userInfo:", CFSTR("PICompositionSerializerDomain"), 0LL, v56));
    objc_release(v56);
    objc_release(v55);
LABEL_29:
    v53 = 0LL;
    goto LABEL_30;
  }
  if ( ((unsigned int)objc_msgSend(v14, "isEqualToString:", PIPhotoEditFormatIdentifierVideoSloMo) & 1) != 0
    || (unsigned int)objc_msgSend(v14, "isEqualToString:", PIPhotoEditFormatIdentifierVideo) )
  {
    v62 = v16;
    v18 = (void *)objc_opt_new(&OBJC_CLASS___NSMutableArray, v17);
    v64 = v13;
    v65 = v14;
    v63 = v15;
    v61 = a7;
    v70 = 0u;
    v71 = 0u;
    v72 = 0u;
    v73 = 0u;
    v60 = objc_retainAutoreleasedReturnValue(
            +[IPASerializationManager deserialize:originator:format:formatVersion:error:](
              &OBJC_CLASS___IPASerializationManager,
              "deserialize:originator:format:formatVersion:error:",
              v13,
              IPAAdjustmentOriginator_Unknown,
              v14,
              v15,
              a7));
    v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v60, "adjustmentStack"));
    v20 = objc_retainAutoreleasedReturnValue(objc_msgSend(v19, "adjustments"));
    v21 = v19;
    v22 = v20;
    objc_release(v21);
    v23 = objc_msgSend(v22, "countByEnumeratingWithState:objects:count:", &v70, v84, 16LL);
    if ( !v23 )
      goto LABEL_27;
    v24 = v23;
    v25 = *(_QWORD *)v71;
    v26 = IPAPhotoAdjustment_SloMo_Identifier;
    v68 = IPAPhotoAdjustment_PosterFrame_Identifier;
    v69 = IPAVideoAdjustment_Trim_Identifier;
    v66 = IPAVideoAdjustment_PosterFrame_Key_Time_Legacy;
    v67 = IPAPhotoAdjustment_PosterFrame_Key_Time;
    while ( 1 )
    {
      v27 = 0LL;
      do
      {
        if ( *(_QWORD *)v71 != v25 )
          objc_enumerationMutation(v22);
        v28 = *(void **)(*((_QWORD *)&v70 + 1) + 8LL * (_QWORD)v27);
        v29 = objc_retainAutoreleasedReturnValue(objc_msgSend(v28, "identifier"));
        v30 = (unsigned int)objc_msgSend(v29, "isEqualToString:", v26);
        objc_release(v29);
        if ( v30 )
        {
          v32 = (void *)objc_opt_new(&OBJC_CLASS___NSMutableDictionary, v31);
          objc_msgSend(v32, "setObject:forKeyedSubscript:", CFSTR("SlowMotion"), CFSTR("identifier"));
LABEL_15:
          v37 = objc_retainAutoreleasedReturnValue(objc_msgSend(v28, "settings"));
          objc_msgSend(v32, "setObject:forKeyedSubscript:", v37, CFSTR("settings"));
          objc_release(v37);
          objc_msgSend(v32, "setObject:forKeyedSubscript:", &__kCFBooleanTrue, CFSTR("enabled"));
          objc_msgSend(v18, "addObject:", v32);
          v38 = v32;
LABEL_16:
          objc_release(v38);
          goto LABEL_17;
        }
        v33 = objc_retainAutoreleasedReturnValue(objc_msgSend(v28, "identifier"));
        v34 = (unsigned int)objc_msgSend(v33, "isEqualToString:", v69);
        objc_release(v33);
        if ( v34 )
        {
          v32 = (void *)objc_opt_new(&OBJC_CLASS___NSMutableDictionary, v35);
          v36 = objc_retainAutoreleasedReturnValue(objc_msgSend(v28, "identifier"));
          objc_msgSend(v32, "setObject:forKeyedSubscript:", v36, CFSTR("identifier"));
          objc_release(v36);
          goto LABEL_15;
        }
        v39 = objc_retainAutoreleasedReturnValue(objc_msgSend(v28, "identifier"));
        v40 = (unsigned int)objc_msgSend(v39, "isEqualToString:", v68);
        objc_release(v39);
        if ( v40 )
        {
          v41 = v22;
          v42 = objc_retainAutoreleasedReturnValue(objc_msgSend(v28, "settings"));
          v43 = objc_retainAutoreleasedReturnValue(objc_msgSend(v42, "objectForKeyedSubscript:", v67));
          if ( v43 )
          {
            v44 = v43;
            objc_release(v42);
LABEL_23:
            v47 = (void *)objc_opt_new(&OBJC_CLASS___NSMutableDictionary, v45);
            objc_msgSend(v47, "setObject:forKeyedSubscript:", CFSTR("VideoPosterFrame"), CFSTR("identifier"));
            v82 = CFSTR("time");
            v83 = v44;
            v48 = objc_retainAutoreleasedReturnValue(
                    +[NSDictionary dictionaryWithObjects:forKeys:count:](
                      &OBJC_CLASS___NSDictionary,
                      "dictionaryWithObjects:forKeys:count:",
                      &v83,
                      &v82,
                      1LL));
            objc_msgSend(v47, "setObject:forKeyedSubscript:", v48, CFSTR("settings"));
            objc_release(v48);
            objc_msgSend(v47, "setObject:forKeyedSubscript:", &__kCFBooleanTrue, CFSTR("enabled"));
            objc_msgSend(v18, "addObject:", v47);
            objc_release(v47);
            objc_release(v44);
            v22 = v41;
            goto LABEL_17;
          }
          v46 = objc_retainAutoreleasedReturnValue(objc_msgSend(v28, "settings"));
          v44 = objc_retainAutoreleasedReturnValue(objc_msgSend(v46, "objectForKeyedSubscript:", v66));
          objc_release(v46);
          objc_release(v42);
          if ( v44 )
            goto LABEL_23;
          v22 = v41;
          if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
          {
            v49 = objc_retainAutoreleasedReturnValue(objc_msgSend(v28, "identifier"));
            v50 = objc_retainAutoreleasedReturnValue(objc_msgSend(v28, "version"));
            v51 = objc_retainAutoreleasedReturnValue(objc_msgSend(v28, "settings"));
            *(_DWORD *)buf = 138413058;
            v75 = v65;
            v76 = 2112;
            v77 = v49;
            v78 = 2112;
            v79 = v50;
            v80 = 2112;
            v81 = v51;
            _os_log_error_impl(
              (void *)&_mh_execute_header,
              (os_log_t)&_os_log_default,
              OS_LOG_TYPE_ERROR,
              "PosterFrame adjustment has unexpected format, will not migrate: %@, %@, %@, %@",
              buf,
              0x2Au);
            objc_release(v51);
            objc_release(v50);
            v38 = v49;
            v22 = v41;
            goto LABEL_16;
          }
        }
LABEL_17:
        v27 = (char *)v27 + 1;
      }
      while ( v24 != v27 );
      v52 = objc_msgSend(v22, "countByEnumeratingWithState:objects:count:", &v70, v84, 16LL);
      v24 = v52;
      if ( !v52 )
      {
LABEL_27:
        objc_release(v22);
        v14 = v65;
        v15 = v63;
        v53 = objc_retainAutoreleasedReturnValue(
                +[PICompositionSerializer deserializeCompositionFromAdjustments:metadata:formatIdentifier:formatVersion:error:](
                  &OBJC_CLASS___PICompositionSerializer,
                  "deserializeCompositionFromAdjustments:metadata:formatIdentifier:formatVersion:error:",
                  v18,
                  &__NSDictionary0__struct,
                  v65,
                  v63,
                  v61));
        objc_release(v60);
        objc_release(v18);
        v13 = v64;
        v16 = v62;
        goto LABEL_30;
      }
    }
  }
  if ( v16 )
  {
    v58 = objc_retainAutoreleasedReturnValue(
            +[PICompositionSidecarData loadFromURL:error:](
              &OBJC_CLASS___PICompositionSidecarData,
              "loadFromURL:error:",
              v16,
              a7));
    if ( !v58 )
      goto LABEL_29;
  }
  else
  {
    v58 = 0LL;
  }
  v53 = objc_retainAutoreleasedReturnValue(
          +[PICompositionSerializer deserializeCompositionFromData:formatIdentifier:formatVersion:sidecarData:error:](
            &OBJC_CLASS___PICompositionSerializer,
            "deserializeCompositionFromData:formatIdentifier:formatVersion:sidecarData:error:",
            v13,
            v14,
            v15,
            v58,
            a7));
  objc_release(v58);
LABEL_30:
  objc_release(v16);
  objc_release(v15);
  objc_release(v14);
  objc_release(v13);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v53);
}