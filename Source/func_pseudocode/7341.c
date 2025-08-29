+[ImageConversionService configureCompositionController:sourceURLCollection:]
void __cdecl +[ImageConversionService configureCompositionController:sourceURLCollection:](id a1, SEL a2, id a3, id a4)
{
  id v5; // x19
  id v6; // x20
  void *v7; // x21
  __int64 v8; // x23
  NSArray *v9; // x24
  unsigned int v10; // w25
  void *v11; // x26
  void *v12; // x22
  void *v13; // x23
  void *v14; // x24
  void *v15; // x25
  const __CFString *v16; // [xsp+0h] [xbp-60h] BYREF

  v5 = objc_retain(a4);
  v6 = objc_retain(a3);
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "resourceURLForRole:", CFSTR("PAMediaConversionResourceRoleMainResource")));
  v16 = CFSTR("PAMediaConversionResourceRoleVideoComplement");
  v8 = 1LL;
  v9 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", &v16, 1LL));
  v10 = (unsigned int)objc_msgSend(v5, "containsAnyRole:", v9);
  objc_release(v9);
  v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "typeIdentifierForResourceURLWithRole:", CFSTR("PAMediaConversionResourceRoleMainResource")));
  v12 = objc_retainAutoreleasedReturnValue(
          +[PIPhotoEditHelper imageSourceWithURL:type:useEmbeddedPreview:](
            &OBJC_CLASS___PIPhotoEditHelper,
            "imageSourceWithURL:type:useEmbeddedPreview:",
            v7,
            v11,
            0LL));
  objc_release(v11);
  if ( v10 )
  {
    v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "resourceURLForRole:", CFSTR("PAMediaConversionResourceRoleVideoComplement")));
    v14 = objc_retainAutoreleasedReturnValue(+[PIPhotoEditHelper videoSourceWithURL:](&OBJC_CLASS___PIPhotoEditHelper, "videoSourceWithURL:", v13));
    v15 = objc_retainAutoreleasedReturnValue(
            +[PIPhotoEditHelper livePhotoSourceWithPhotoSource:videoSource:](
              &OBJC_CLASS___PIPhotoEditHelper,
              "livePhotoSourceWithPhotoSource:videoSource:",
              v12,
              v14));
    objc_release(v14);
    objc_release(v13);
    objc_release(v12);
    v8 = 3LL;
    v12 = v15;
  }
  objc_msgSend(v6, "setSource:mediaType:", v12, v8);
  objc_release(v6);
  objc_release(v7);
  objc_release(v12);
  objc_release(v5);
}