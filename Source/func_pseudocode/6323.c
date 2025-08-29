+[PAMediaConversionServiceSharedUtilitiesServiceSide generatePortraitAdjustmentForURL:contentType:orientation:error:]
// local variable allocation has failed, the output may be wrong!
id __cdecl +[PAMediaConversionServiceSharedUtilitiesServiceSide generatePortraitAdjustmentForURL:contentType:orientation:error:](
        id a1,
        SEL a2,
        id a3,
        id a4,
        unsigned int a5,
        id *a6)
{
  __int64 v6; // x19
  void *v8; // x22
  void *v9; // x20
  void *v10; // x21
  id v11; // x20
  void *v12; // x21
  NSNumber *v13; // x19
  void *v14; // x23
  void *v15; // x19
  dispatch_group_s *v16; // x19
  dispatch_group_s *v17; // x26
  void *v18; // x0
  id v19; // x27
  void *v20; // x28
  void *v21; // x19
  int v22; // s0
  int v23; // s8
  void *v24; // x19
  void *v25; // x0
  bool v26; // zf
  int v27; // w19
  __int64 v28; // x19
  void *v29; // x19
  int v30; // s0
  int v31; // s8
  void *v32; // x20
  void *v33; // x0
  bool v34; // zf
  int v35; // w19
  void *v36; // x19
  void *v37; // x21
  void *v38; // x21
  id *v39; // x23
  void *v40; // x19
  void *v41; // x21
  void *v42; // x24
  void *v43; // x25
  NSDictionary *v44; // x23
  id v46; // [xsp+8h] [xbp-1F8h]
  id v47; // [xsp+10h] [xbp-1F0h]
  id v48; // [xsp+18h] [xbp-1E8h]
  id v49; // [xsp+20h] [xbp-1E0h]
  id v50; // [xsp+28h] [xbp-1D8h]
  id v52; // [xsp+38h] [xbp-1C8h]
  id v53; // [xsp+40h] [xbp-1C0h]
  id v54; // [xsp+48h] [xbp-1B8h]
  id v55; // [xsp+50h] [xbp-1B0h]
  id obj; // [xsp+58h] [xbp-1A8h] BYREF
  _QWORD v57[4]; // [xsp+60h] [xbp-1A0h] BYREF
  id v58; // [xsp+80h] [xbp-180h]
  id v59; // [xsp+88h] [xbp-178h]
  int v60; // [xsp+90h] [xbp-170h]
  _QWORD v61[4]; // [xsp+98h] [xbp-168h] BYREF
  id v62; // [xsp+B8h] [xbp-148h]
  int v63; // [xsp+C0h] [xbp-140h]
  _QWORD v64[4]; // [xsp+C8h] [xbp-138h] BYREF
  id v65; // [xsp+E8h] [xbp-118h]
  __int64 *v66; // [xsp+F0h] [xbp-110h]
  __int64 *v67; // [xsp+F8h] [xbp-108h]
  __int64 v68; // [xsp+100h] [xbp-100h] BYREF
  __int64 *v69; // [xsp+108h] [xbp-F8h]
  __int64 v70; // [xsp+110h] [xbp-F0h]
  __int64 (__fastcall *v71)(); // [xsp+118h] [xbp-E8h]
  __int64 (__fastcall *v72)(); // [xsp+120h] [xbp-E0h]
  id v73; // [xsp+128h] [xbp-D8h]
  __int64 v74; // [xsp+130h] [xbp-D0h] BYREF
  id *v75; // [xsp+138h] [xbp-C8h]
  __int64 v76; // [xsp+140h] [xbp-C0h]
  __int64 (__fastcall *v77)(); // [xsp+148h] [xbp-B8h]
  __int64 (__fastcall *v78)(); // [xsp+150h] [xbp-B0h]
  id v79; // [xsp+158h] [xbp-A8h]
  _QWORD v80[3]; // [xsp+160h] [xbp-A0h] BYREF
  _QWORD v81[3]; // [xsp+178h] [xbp-88h] BYREF
  __int64 vars8; // [xsp+208h] [xbp+8h]

  v6 = *(_QWORD *)&a5;
  v53 = objc_retain(a3);
  v54 = objc_retain(a4);
  v55 = objc_retainAutoreleasedReturnValue(+[PISchema registeredPhotosSchemaIdentifier](&OBJC_CLASS___PISchema, "registeredPhotosSchemaIdentifier"));
  v8 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NUGenericComposition), "initWithIdentifier:", v55);
  v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v54, "identifier"));
  v10 = objc_retainAutoreleasedReturnValue(
          +[PIPhotoEditHelper imageSourceWithURL:type:useEmbeddedPreview:](
            &OBJC_CLASS___PIPhotoEditHelper,
            "imageSourceWithURL:type:useEmbeddedPreview:",
            v53,
            v9,
            0LL));
  objc_msgSend(v8, "setObject:forKeyedSubscript:", v10, CFSTR("source"));
  objc_release(v10);
  objc_release(v9);
  objc_msgSend(v8, "setMediaType:", 1LL);
  v11 = objc_alloc((Class)&OBJC_CLASS___NUGenericAdjustment);
  v12 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NUIdentifier), "initWithName:", CFSTR("Orientation"));
  v52 = objc_msgSend(v11, "initWithIdentifier:", v12);
  objc_release(v12);
  v13 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithUnsignedInt:](&OBJC_CLASS___NSNumber, "numberWithUnsignedInt:", v6));
  objc_msgSend(v52, "setObject:forKeyedSubscript:", v13, CFSTR("value"));
  objc_release(v13);
  objc_msgSend(v8, "setObject:forKeyedSubscript:", v52, CFSTR("orientation"));
  v14 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___PIPortraitAutoCalculator), "initWithComposition:", v8);
  v15 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NUPriority), "initWithLevel:", 1LL);
  objc_msgSend(v14, "setPriority:", v15);
  objc_release(v15);
  v74 = 0LL;
  v75 = (id *)&v74;
  v76 = 0x3032000000LL;
  v77 = sub_10000D020;
  v78 = sub_10000D030;
  v79 = 0LL;
  v68 = 0LL;
  v69 = &v68;
  v70 = 0x3032000000LL;
  v71 = sub_10000D020;
  v72 = sub_10000D030;
  v73 = 0LL;
  v16 = dispatch_group_create();
  dispatch_group_enter(v16);
  v64[0] = _NSConcreteStackBlock;
  v64[1] = 3254779904LL;
  v64[2] = sub_100015C40;
  v64[3] = &unk_100041310;
  v66 = &v68;
  v67 = &v74;
  v17 = objc_retain(v16);
  v65 = v17;
  objc_msgSend(v14, "submit:", v64);
  dispatch_group_wait(v17, 0xFFFFFFFFFFFFFFFFLL);
  v18 = (void *)v69[5];
  v48 = v14;
  if ( v18 )
  {
    v19 = objc_retain(v18);
    v20 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___PICompositionController), "initWithComposition:", v8);
    v49 = objc_retainAutoreleasedReturnValue(objc_msgSend(v19, "objectForKeyedSubscript:", PIDepthInfoKey));
    v50 = objc_retainAutoreleasedReturnValue(objc_msgSend(v19, "objectForKeyedSubscript:", PIPortraitInfoKey));
    v21 = objc_retainAutoreleasedReturnValue(objc_msgSend(v19, "objectForKeyedSubscript:", PIPortraitStrengthKey));
    objc_msgSend(v21, "floatValue");
    v23 = v22;
    objc_release(v21);
    v24 = objc_retainAutoreleasedReturnValue(objc_msgSend(v20, "portraitAdjustmentController"));
    v25 = objc_retainAutoreleasedReturnValue(objc_msgSend(v24, "portraitInfo"));
    v46 = v24;
    if ( v25 )
      v26 = 1;
    else
      v26 = v50 == 0LL;
    v27 = !v26;
    objc_release(v25);
    if ( v27 )
    {
      v28 = PIPortraitAdjustmentKey;
      v61[0] = _NSConcreteStackBlock;
      v61[1] = 3254779904LL;
      v61[2] = sub_100015CC0;
      v61[3] = &unk_100041340;
      v62 = objc_retain(v50);
      v63 = v23;
      objc_msgSend(v20, "modifyAdjustmentWithKey:modificationBlock:", v28, v61);
      objc_release(v62);
    }
    v29 = objc_retainAutoreleasedReturnValue(objc_msgSend(v19, "objectForKeyedSubscript:", PIDepthApertureKey));
    objc_msgSend(v29, "floatValue");
    v31 = v30;
    objc_release(v29);
    v47 = objc_retainAutoreleasedReturnValue(objc_msgSend(v19, "objectForKeyedSubscript:", PIDepthFocusRectKey));
    v32 = objc_retainAutoreleasedReturnValue(objc_msgSend(v20, "depthAdjustmentController"));
    v33 = objc_retainAutoreleasedReturnValue(objc_msgSend(v32, "depthInfo"));
    if ( v33 )
      v34 = 1;
    else
      v34 = v49 == 0LL;
    v35 = !v34;
    objc_release(v33);
    if ( v35 )
    {
      v36 = objc_retainAutoreleasedReturnValue(objc_msgSend(v20, "adjustmentConstants"));
      v37 = objc_retainAutoreleasedReturnValue(objc_msgSend(v36, "PIDepthAdjustmentKey"));
      v57[0] = _NSConcreteStackBlock;
      v57[1] = 3254779904LL;
      v57[2] = sub_100015D30;
      v57[3] = &unk_100041370;
      v58 = objc_retain(v49);
      v60 = v31;
      v59 = objc_retain(v47);
      objc_msgSend(v20, "modifyAdjustmentWithKey:modificationBlock:", v37, v57);
      objc_release(v37);
      objc_release(v36);
      objc_release(v59);
      objc_release(v58);
    }
    v38 = objc_retainAutoreleasedReturnValue(objc_msgSend(v20, "composition"));
    v39 = v75;
    obj = 0LL;
    v40 = objc_retainAutoreleasedReturnValue(
            +[PICompositionSerializer adjustmentInformationForComposition:error:](
              &OBJC_CLASS___PICompositionSerializer,
              "adjustmentInformationForComposition:error:",
              v38,
              &obj));
    objc_storeStrong(v39 + 5, obj);
    objc_release(v38);
    if ( v40 )
    {
      v80[0] = CFSTR("PAMediaConversionServiceAdjustmentDataKey");
      v41 = objc_retainAutoreleasedReturnValue(objc_msgSend(v40, "objectForKeyedSubscript:", PIAssetAdjustmentsDataBlobKey));
      v81[0] = v41;
      v80[1] = CFSTR("PAMediaConversionServiceAdjustmentFormatIdentifierKey");
      v42 = objc_retainAutoreleasedReturnValue(objc_msgSend(v40, "objectForKeyedSubscript:", PIAssetAdjustmentsFormatIdentifierKey));
      v81[1] = v42;
      v80[2] = CFSTR("PAMediaConversionServiceAdjustmentFormatVersionKey");
      v43 = objc_retainAutoreleasedReturnValue(objc_msgSend(v40, "objectForKeyedSubscript:", PIAssetAdjustmentsFormatVersionKey));
      v81[2] = v43;
      v44 = objc_retainAutoreleasedReturnValue(
              +[NSDictionary dictionaryWithObjects:forKeys:count:](
                &OBJC_CLASS___NSDictionary,
                "dictionaryWithObjects:forKeys:count:",
                v81,
                v80,
                3LL));
      objc_release(v43);
      objc_release(v42);
      objc_release(v41);
    }
    else
    {
      v44 = 0LL;
    }
    objc_release(v40);
    objc_release(v32);
    objc_release(v47);
    objc_release(v46);
    objc_release(v50);
    objc_release(v49);
    objc_release(v20);
    objc_release(v19);
  }
  else
  {
    v44 = 0LL;
  }
  if ( a6 )
    *a6 = objc_retainAutorelease(v75[5]);
  objc_release(v65);
  objc_release(v17);
  _Block_object_dispose(&v68, 8);
  objc_release(v73);
  _Block_object_dispose(&v74, 8);
  objc_release(v79);
  objc_release(v48);
  objc_release(v52);
  objc_release(v8);
  objc_release(v55);
  objc_release(v54);
  objc_release(v53);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v44);
}