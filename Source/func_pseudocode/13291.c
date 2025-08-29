+[TSUSafeSaveAssistant finishWritingToURL:byMovingOrCopyingItemAtURL:addingAttributes:error:]
bool __cdecl +[TSUSafeSaveAssistant finishWritingToURL:byMovingOrCopyingItemAtURL:addingAttributes:error:](
        id a1,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id *a6)
{
  id v10; // x19
  id v11; // x20
  id v12; // x22
  NSFileManager *v13; // x23
  void *v14; // x24
  TSUExtendedAttributeCollection *v15; // x25
  id v16; // x0
  id v17; // x27
  unsigned int v18; // w21
  id v19; // x28
  unsigned int v20; // w26
  id *v21; // x28
  id v22; // x21
  id *v24; // [xsp+8h] [xbp-78h]
  id v25; // [xsp+10h] [xbp-70h] BYREF
  id v26; // [xsp+18h] [xbp-68h] BYREF
  id v27; // [xsp+20h] [xbp-60h] BYREF
  id v28; // [xsp+28h] [xbp-58h] BYREF

  v10 = objc_retain(a3);
  v11 = objc_retain(a4);
  v12 = objc_retain(a5);
  v13 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
  v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "path"));
  if ( -[NSFileManager fileExistsAtPath:](v13, "fileExistsAtPath:", v14) )
  {
    v28 = 0LL;
    v15 = -[TSUExtendedAttributeCollection initWithPath:options:error:](
            objc_alloc(&OBJC_CLASS___TSUExtendedAttributeCollection),
            "initWithPath:options:error:",
            v14,
            0LL,
            &v28);
    v16 = objc_retain(v28);
    v17 = v16;
    if ( !v15 )
    {
      LOBYTE(v20) = 0;
      goto LABEL_11;
    }
    v24 = a6;
    v27 = v16;
    v18 = -[NSFileManager removeItemAtURL:error:](v13, "removeItemAtURL:error:", v10, &v27);
    v19 = objc_retain(v27);
    objc_release(v17);
    if ( !v18 )
    {
      LOBYTE(v20) = 0;
      v17 = v19;
      a6 = v24;
      if ( !v24 )
        goto LABEL_13;
      goto LABEL_12;
    }
    a6 = v24;
  }
  else
  {
    v15 = 0LL;
    v19 = 0LL;
  }
  objc_msgSend(a1, "writeAttributes:toURL:", v12, v11);
  v26 = v19;
  v20 = -[NSFileManager moveItemAtURL:toURL:error:](v13, "moveItemAtURL:toURL:error:", v11, v10, &v26);
  v17 = objc_retain(v26);
  objc_release(v19);
  if ( v20 && v15 )
  {
    v25 = v17;
    LOBYTE(v20) = -[TSUExtendedAttributeCollection setAttributeCollectionToPath:intent:options:error:](
                    v15,
                    "setAttributeCollectionToPath:intent:options:error:",
                    v14,
                    2LL,
                    0LL,
                    &v25);
    v21 = a6;
    v22 = objc_retain(v25);
    objc_release(v17);
    v17 = v22;
    a6 = v21;
    if ( !v21 )
      goto LABEL_13;
    goto LABEL_12;
  }
LABEL_11:
  if ( a6 )
LABEL_12:
    *a6 = objc_retainAutorelease(v17);
LABEL_13:
  objc_release(v15);
  objc_release(v14);
  objc_release(v13);
  objc_release(v17);
  objc_release(v12);
  objc_release(v11);
  objc_release(v10);
  return v20;
}