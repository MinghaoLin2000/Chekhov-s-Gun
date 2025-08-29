+[TSPPackageConverter convertDocumentAtURL:toPackageType:removeEntriesMatchingFilter:error:]
bool __cdecl +[TSPPackageConverter convertDocumentAtURL:toPackageType:removeEntriesMatchingFilter:error:](
        id a1,
        SEL a2,
        id a3,
        signed __int64 a4,
        id a5,
        id *a6)
{
  id v9; // x19
  id v10; // x20
  id v11; // x0
  void *v12; // x21
  unsigned __int8 v13; // w22
  id v14; // x0
  void *v15; // x23
  void *v16; // x25
  void *v17; // x24

  v9 = objc_retain(a3);
  v10 = objc_retain(a5);
  v11 = +[TSPPackageConverter newPackageConverterWithURL:preserveExtendedAttributes:error:](
          &OBJC_CLASS___TSPPackageConverter,
          "newPackageConverterWithURL:preserveExtendedAttributes:error:",
          v9,
          0LL,
          a6);
  v12 = v11;
  if ( v11 )
  {
    if ( objc_msgSend(v11, "packageType") == (void *)a4 )
    {
      v13 = 1;
    }
    else
    {
      v14 = -[TSUSafeSaveAssistant initForSavingToURL:error:](
              objc_alloc(&OBJC_CLASS___TSUSafeSaveAssistant),
              "initForSavingToURL:error:",
              v9,
              a6);
      v15 = v14;
      if ( v14 )
      {
        v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "writeURL"));
        v17 = objc_msgSend(v12, "writeToURL:packageType:removeEntriesMatchingFilter:error:", v16, a4, v10, a6);
        objc_release(v16);
        v13 = (unsigned __int8)objc_msgSend(v15, "endSaveWithSuccess:addingAttributes:error:", v17, 0LL, a6);
      }
      else
      {
        v13 = 0;
      }
      objc_msgSend(v9, "removeAllCachedResourceValues");
      objc_release(v15);
    }
  }
  else
  {
    v13 = 0;
  }
  objc_release(v12);
  objc_release(v10);
  objc_release(v9);
  return v13;
}