+[NSError tsp_ensureSaveErrorWithError:]
id __cdecl +[NSError tsp_ensureSaveErrorWithError:](id a1, SEL a2, id a3)
{
  id v4; // x19
  void *v5; // x22
  unsigned int v6; // w21
  NSDictionary *v7; // x21
  void *v8; // x20
  unsigned int v9; // w8
  char v10; // w8
  id v11; // x0
  NSDictionary *v13; // x21
  NSErrorUserInfoKey v14; // [xsp+8h] [xbp-48h] BYREF
  id v15; // [xsp+10h] [xbp-40h] BYREF
  NSErrorUserInfoKey v16; // [xsp+18h] [xbp-38h] BYREF
  id v17; // [xsp+20h] [xbp-30h] BYREF
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "domain"));
  v6 = (unsigned int)objc_msgSend(v5, "isEqualToString:", CFSTR("com.apple.iWork.TSPersistence"));
  objc_release(v5);
  if ( !v4 )
  {
    v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "tsp_saveDocumentErrorWithUserInfo:", 0LL));
    goto LABEL_15;
  }
  if ( (v6 & 1) == 0 && (unsigned int)objc_msgSend(v4, "tsu_isOutOfSpaceError") )
  {
    v16 = NSUnderlyingErrorKey;
    v17 = v4;
    v7 = objc_retainAutoreleasedReturnValue(
           +[NSDictionary dictionaryWithObjects:forKeys:count:](
             &OBJC_CLASS___NSDictionary,
             "dictionaryWithObjects:forKeys:count:",
             &v17,
             &v16,
             1LL));
    v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "tsp_storageSpaceErrorWithUserInfo:", v7));
    objc_release(v7);
    goto LABEL_16;
  }
  if ( objc_msgSend(v4, "code") == (void *)3 )
    v9 = v6;
  else
    v9 = 0;
  if ( v9 == 1 || (objc_msgSend(v4, "code") == (void *)2 ? (v10 = v6) : (v10 = 0), (v10 & 1) != 0) )
  {
    v11 = objc_retain(v4);
LABEL_15:
    v8 = v11;
    goto LABEL_16;
  }
  v14 = NSUnderlyingErrorKey;
  v15 = v4;
  v13 = objc_retainAutoreleasedReturnValue(
          +[NSDictionary dictionaryWithObjects:forKeys:count:](
            &OBJC_CLASS___NSDictionary,
            "dictionaryWithObjects:forKeys:count:",
            &v15,
            &v14,
            1LL));
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "tsp_saveDocumentErrorWithUserInfo:", v13));
  objc_release(v13);
LABEL_16:
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v8);
}