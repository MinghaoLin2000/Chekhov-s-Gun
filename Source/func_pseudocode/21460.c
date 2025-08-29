+[LSRLanguageModel _userProfileWithModelRoot:language:]
id __cdecl +[LSRLanguageModel _userProfileWithModelRoot:language:](id a1, SEL a2, id a3, id a4)
{
  id v5; // x21
  id v6; // x22
  void *v7; // x19
  void *v8; // x20
  void *v9; // x22
  void *v10; // x23
  void *v11; // x24
  void *v12; // x25
  void *v13; // x26
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v5 = objc_retain(a4);
  v6 = objc_retain(a3);
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "stringByAppendingPathComponent:", CFSTR("mini.json")));
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "stringByAppendingPathComponent:", CFSTR("ncs")));
  objc_release(v6);
  v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "stringByAppendingPathComponent:", CFSTR("en_US_napg.json")));
  v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "stringByAppendingPathComponent:", CFSTR("vocdelta.voc")));
  v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "stringByAppendingPathComponent:", CFSTR("pg.voc")));
  v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "stringByAppendingPathComponent:", CFSTR("mrec.psh")));
  v13 = objc_msgSend(
          objc_alloc((Class)&OBJC_CLASS____EARUserProfile),
          "initWithConfiguration:language:overrides:sdapiOverrides:emptyVoc:pgVoc:paramsetHolder:",
          v7,
          v5,
          0LL,
          v9,
          v10,
          v11,
          v12);
  objc_release(v5);
  objc_release(v12);
  objc_release(v11);
  objc_release(v10);
  objc_release(v9);
  objc_release(v8);
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v13);
}