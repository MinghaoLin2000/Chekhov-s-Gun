+[NSError tsp_errorWithCode:userInfo:isRecoverable:]
id __cdecl +[NSError tsp_errorWithCode:userInfo:isRecoverable:](id a1, SEL a2, signed __int64 a3, id a4, bool a5)
{
  _BOOL4 v5; // w20
  id v8; // x19
  id v9; // x25
  void *v10; // x21
  id v11; // x25
  void *v12; // x0
  void *v13; // x24
  void *v14; // x0
  NSDictionary *v15; // x25
  id v16; // x25
  void *v17; // x26
  void *v18; // x22
  const __CFString *v20; // [xsp+8h] [xbp-58h] BYREF
  void *v21; // [xsp+10h] [xbp-50h] BYREF
  __int64 vars8; // [xsp+68h] [xbp+8h]

  v5 = a5;
  v8 = objc_retain(a4);
  switch ( a3 )
  {
    case 2LL:
    case 3LL:
      v9 = objc_retainAutoreleasedReturnValue(UnsafePointer());
      v10 = objc_retainAutoreleasedReturnValue(
              objc_msgSend(
                v9,
                "localizedStringForKey:value:table:",
                CFSTR("The document could not be autosaved."),
                &stru_1001DFAA0,
                CFSTR("TSPersistence")));
      objc_release(v9);
      v11 = objc_retainAutoreleasedReturnValue(UnsafePointer());
      if ( a3 == 2 )
        v12 = objc_retainAutoreleasedReturnValue(
                objc_msgSend(
                  v11,
                  "localizedStringForKey:value:table:",
                  CFSTR("Your most recent changes might be lost."),
                  &stru_1001DFAA0,
                  CFSTR("TSPersistence")));
      else
        v12 = objc_retainAutoreleasedReturnValue(
                objc_msgSend(
                  v11,
                  "localizedStringForKey:value:table:",
                  CFSTR("The disk is full. Free up some space, then return to your document. Your most recent changes might be lost."),
                  &stru_1001DFAA0,
                  CFSTR("TSPersistence")));
      v13 = v12;
      goto LABEL_10;
    case 4LL:
    case 5LL:
    case 6LL:
      v11 = objc_retainAutoreleasedReturnValue(UnsafePointer());
      v14 = objc_retainAutoreleasedReturnValue(
              objc_msgSend(
                v11,
                "localizedStringForKey:value:table:",
                CFSTR("Encountered a critical error."),
                &stru_1001DFAA0,
                CFSTR("TSPersistence")));
      goto LABEL_7;
    case 7LL:
      v11 = objc_retainAutoreleasedReturnValue(UnsafePointer());
      v14 = objc_retainAutoreleasedReturnValue(
              objc_msgSend(
                v11,
                "localizedStringForKey:value:table:",
                CFSTR("To open this document, download the latest version of the app from the App Store."),
                &stru_1001DFAA0,
                CFSTR("TSPersistence")));
LABEL_7:
      v10 = v14;
      v13 = 0LL;
LABEL_10:
      objc_release(v11);
      if ( !v10 )
        goto LABEL_13;
      if ( v5 )
        goto LABEL_12;
      goto LABEL_14;
    default:
      v13 = 0LL;
LABEL_13:
      v16 = objc_retainAutoreleasedReturnValue(UnsafePointer());
      v10 = objc_retainAutoreleasedReturnValue(
              objc_msgSend(
                v16,
                "localizedStringForKey:value:table:",
                CFSTR("An error occurred while reading the document."),
                &stru_1001DFAA0,
                CFSTR("TSPersistence")));
      objc_release(v16);
      if ( v5 )
      {
LABEL_12:
        v20 = CFSTR("TSPErrorIsRecoverable");
        v21 = &__kCFBooleanTrue;
        v15 = objc_retainAutoreleasedReturnValue(
                +[NSDictionary dictionaryWithObjects:forKeys:count:](
                  &OBJC_CLASS___NSDictionary,
                  "dictionaryWithObjects:forKeys:count:",
                  &v21,
                  &v20,
                  1LL));
      }
      else
      {
LABEL_14:
        v15 = 0LL;
      }
      v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "tsp_userInfoWithUserInfo:additionalUserInfo:", v8, v15));
      v18 = objc_retainAutoreleasedReturnValue(
              objc_msgSend(
                a1,
                "tsu_errorWithDomain:code:alertTitle:alertMessage:userInfo:",
                CFSTR("com.apple.iWork.TSPersistence"),
                a3,
                v10,
                v13,
                v17));
      objc_release(v17);
      if ( v5 )
        objc_release(v15);
      objc_release(v13);
      objc_release(v10);
      objc_release(v8);
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return objc_autoreleaseReturnValue(v18);
  }
}