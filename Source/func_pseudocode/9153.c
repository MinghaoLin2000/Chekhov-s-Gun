+[NSError tsp_errorWithError:hints:]
id __cdecl +[NSError tsp_errorWithError:hints:](id a1, SEL a2, id a3, id a4)
{
  id v6; // x19
  id v7; // x0
  void *v8; // x20
  char *v9; // x22
  void *v10; // x24
  void *v11; // x21
  void *v12; // x24
  void *v13; // x24
  NSSet *v14; // x22
  id v15; // x23
  void *v16; // x24
  void *v17; // x27
  void *v18; // x26
  NSDictionary *v19; // x25
  void *v20; // x28
  const __CFString *v22; // [xsp+8h] [xbp-68h] BYREF
  NSSet *v23; // [xsp+10h] [xbp-60h] BYREF
  __int64 vars8; // [xsp+78h] [xbp+8h]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v8 = v7;
  if ( !v6 )
  {
    v15 = 0LL;
    goto LABEL_12;
  }
  v9 = (char *)objc_msgSend(v7, "count");
  if ( !v9 )
  {
    v15 = objc_retain(v6);
    goto LABEL_12;
  }
  v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "userInfo"));
  v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "objectForKeyedSubscript:", CFSTR("TSPErrorHints")));
  objc_release(v10);
  v12 = objc_msgSend(v11, "count");
  if ( !v12 )
  {
    v14 = objc_retainAutoreleasedReturnValue(+[NSSet setWithArray:](&OBJC_CLASS___NSSet, "setWithArray:", v8));
LABEL_10:
    v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "domain"));
    v17 = objc_msgSend(v6, "code");
    v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "userInfo"));
    v22 = CFSTR("TSPErrorHints");
    v23 = v14;
    v19 = objc_retainAutoreleasedReturnValue(
            +[NSDictionary dictionaryWithObjects:forKeys:count:](
              &OBJC_CLASS___NSDictionary,
              "dictionaryWithObjects:forKeys:count:",
              &v23,
              &v22,
              1LL));
    v20 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "tsp_userInfoWithUserInfo:additionalUserInfo:", v18, v19));
    v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "errorWithDomain:code:userInfo:", v16, v17, v20));
    objc_release(v20);
    objc_release(v19);
    objc_release(v18);
    objc_release(v16);
    goto LABEL_11;
  }
  v13 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSMutableSet), "initWithCapacity:", &v9[(_QWORD)v12]);
  objc_msgSend(v13, "unionSet:", v11);
  objc_msgSend(v13, "addObjectsFromArray:", v8);
  v14 = objc_retain(v13);
  if ( !-[NSSet isEqualToSet:](v14, "isEqualToSet:", v11) )
  {
    objc_release(v14);
    goto LABEL_10;
  }
  v15 = objc_retain(v6);
  objc_release(v14);
LABEL_11:
  objc_release(v14);
  objc_release(v11);
LABEL_12:
  objc_release(v8);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v15);
}