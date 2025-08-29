-[ImageConversionService adjustmentInformationForCropAdjustmentInformation:sourceURLCollection:error:]
id __cdecl -[ImageConversionService adjustmentInformationForCropAdjustmentInformation:sourceURLCollection:error:](
        ImageConversionService *self,
        SEL a2,
        id a3,
        id a4,
        id *a5)
{
  id v8; // x19
  id v9; // x23
  void *v10; // x20
  void *v11; // x21
  void *v12; // x26
  void *v13; // x25
  NSDictionary *v14; // x23
  void *v15; // x25
  void *v16; // x27
  void *v17; // x27
  void *v18; // x24
  void *v19; // x27
  void *v20; // x24
  id v21; // x26
  NSDictionary *v22; // x28
  id v24; // [xsp+0h] [xbp-E0h] BYREF
  _QWORD v25[5]; // [xsp+8h] [xbp-D8h] BYREF
  _QWORD v26[4]; // [xsp+30h] [xbp-B0h] BYREF
  id v27; // [xsp+50h] [xbp-90h]
  _QWORD v28[2]; // [xsp+58h] [xbp-88h] BYREF
  _QWORD v29[2]; // [xsp+68h] [xbp-78h] BYREF
  NSErrorUserInfoKey v30; // [xsp+78h] [xbp-68h] BYREF
  const __CFString *v31; // [xsp+80h] [xbp-60h] BYREF
  __int64 vars8; // [xsp+E8h] [xbp+8h]
  NSRect v33; // 0:d0.8,8:d1.8,16:d2.8,24:d3.8

  v8 = objc_retain(a4);
  v9 = objc_retain(a3);
  v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "objectForKeyedSubscript:", CFSTR("PAMediaConversionServiceAdjustmentCropKey")));
  v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "objectForKeyedSubscript:", CFSTR("PAMediaConversionServiceAdjustmentOrientationKey")));
  objc_release(v9);
  if ( v10 )
  {
    objc_msgSend(v10, "rectValue");
    if ( !NSIsEmptyRect(v33) )
    {
      if ( v11 )
      {
        v12 = objc_msgSend(v11, "integerValue");
        v13 = +[PIPhotoEditHelper newComposition](&OBJC_CLASS___PIPhotoEditHelper, "newComposition");
        v14 = (NSDictionary *)+[PIPhotoEditHelper newCompositionControllerWithComposition:](
                                &OBJC_CLASS___PIPhotoEditHelper,
                                "newCompositionControllerWithComposition:",
                                v13);
        objc_release(v13);
        objc_msgSend((id)objc_opt_class(self), "configureCompositionController:sourceURLCollection:", v14, v8);
        v15 = objc_retainAutoreleasedReturnValue(-[NSDictionary adjustmentConstants](v14, "adjustmentConstants"));
        v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15, "PICropAdjustmentKey"));
        v26[0] = _NSConcreteStackBlock;
        v26[1] = 3254779904LL;
        v26[2] = sub_10001B690;
        v26[3] = &unk_100039378;
        v27 = objc_retain(v10);
        -[NSDictionary modifyAdjustmentWithKey:modificationBlock:](
          v14,
          "modifyAdjustmentWithKey:modificationBlock:",
          v16,
          v26);
        objc_release(v16);
        v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15, "PIOrientationAdjustmentKey"));
        v25[0] = _NSConcreteStackBlock;
        v25[1] = 3221225472LL;
        v25[2] = sub_10001B6EC;
        v25[3] = &unk_1000393A8;
        v25[4] = v12;
        -[NSDictionary modifyAdjustmentWithKey:modificationBlock:](
          v14,
          "modifyAdjustmentWithKey:modificationBlock:",
          v17,
          v25);
        objc_release(v17);
        v18 = (void *)objc_opt_class(self);
        v19 = objc_retainAutoreleasedReturnValue(-[NSDictionary composition](v14, "composition"));
        v24 = 0LL;
        v20 = objc_retainAutoreleasedReturnValue(objc_msgSend(v18, "adjustmentInformationForComposition:error:", v19, &v24));
        v21 = objc_retain(v24);
        objc_release(v19);
        if ( a5 && !v20 )
        {
          v28[0] = NSLocalizedDescriptionKey;
          v28[1] = NSUnderlyingErrorKey;
          v29[0] = CFSTR("Error creating adjustment from crop adjustment.");
          v29[1] = v21;
          v22 = objc_retainAutoreleasedReturnValue(
                  +[NSDictionary dictionaryWithObjects:forKeys:count:](
                    &OBJC_CLASS___NSDictionary,
                    "dictionaryWithObjects:forKeys:count:",
                    v29,
                    v28,
                    2LL));
          *a5 = objc_autorelease(
                  objc_retainAutoreleasedReturnValue(
                    +[NSError errorWithDomain:code:userInfo:](
                      &OBJC_CLASS___NSError,
                      "errorWithDomain:code:userInfo:",
                      CFSTR("PAMediaConversionServiceErrorDomain"),
                      2LL,
                      v22)));
          objc_release(v22);
        }
        objc_release(v21);
        objc_release(v27);
        objc_release(v15);
        goto LABEL_10;
      }
    }
  }
  if ( a5 )
  {
    v30 = NSLocalizedDescriptionKey;
    v31 = CFSTR("Crop adjustment missing PAMediaConversionServiceAdjustmentCropKey and/or PAMediaConversionServiceAdjustmentOrientationKey");
    v14 = objc_retainAutoreleasedReturnValue(
            +[NSDictionary dictionaryWithObjects:forKeys:count:](
              &OBJC_CLASS___NSDictionary,
              "dictionaryWithObjects:forKeys:count:",
              &v31,
              &v30,
              1LL));
    v20 = 0LL;
    *a5 = objc_autorelease(
            objc_retainAutoreleasedReturnValue(
              +[NSError errorWithDomain:code:userInfo:](
                &OBJC_CLASS___NSError,
                "errorWithDomain:code:userInfo:",
                CFSTR("PAMediaConversionServiceErrorDomain"),
                2LL,
                v14)));
LABEL_10:
    objc_release(v14);
    goto LABEL_12;
  }
  v20 = 0LL;
LABEL_12:
  objc_release(v11);
  objc_release(v10);
  objc_release(v8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v20);
}