-[XPCSignpostReader createTagFile:withTagConfig:withFileCount:]
// local variable allocation has failed, the output may be wrong!
bool __cdecl -[XPCSignpostReader createTagFile:withTagConfig:withFileCount:](
        XPCSignpostReader *self,
        SEL a2,
        id a3,
        id a4,
        int a5)
{
  __int64 v5; // x22
  id v7; // x19
  id v8; // x20
  void *v9; // x21
  os_log_s *v10; // x21
  NSNumber *v11; // x22
  NSData *v12; // x23
  void *v13; // x24
  unsigned __int8 v14; // w22
  NSData *v15; // x22
  id v16; // x23
  os_log_s *v17; // x24
  id v19; // [xsp+8h] [xbp-38h] BYREF

  v5 = *(_QWORD *)&a5;
  v7 = objc_retain(a3);
  v8 = objc_retain(a4);
  v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "objectForKeyedSubscript:", CFSTR("TagUUID")));
  objc_release(v9);
  if ( !(_DWORD)v5 || !v9 )
  {
    v10 = (os_log_s *)objc_retainAutoreleasedReturnValue(PLLogSignpostReader());
    if ( os_log_type_enabled(v10, OS_LOG_TYPE_DEBUG) )
      sub_10000E964(v10);
    goto LABEL_10;
  }
  v10 = (os_log_s *)objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSMutableDictionary), "initWithDictionary:", v8);
  v11 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithInt:](&OBJC_CLASS___NSNumber, "numberWithInt:", v5));
  -[os_log_s setObject:forKeyedSubscript:](v10, "setObject:forKeyedSubscript:", v11, CFSTR("FileCount"));
  objc_release(v11);
  if ( !+[NSJSONSerialization isValidJSONObject:](&OBJC_CLASS___NSJSONSerialization, "isValidJSONObject:", v10) )
  {
    v19 = 0LL;
    v15 = objc_retainAutoreleasedReturnValue(
            +[NSJSONSerialization dataWithJSONObject:options:error:](
              &OBJC_CLASS___NSJSONSerialization,
              "dataWithJSONObject:options:error:",
              v10,
              0LL,
              &v19));
    v16 = objc_retain(v19);
    v17 = (os_log_s *)objc_retainAutoreleasedReturnValue(PLLogSignpostReader());
    if ( os_log_type_enabled(v17, OS_LOG_TYPE_ERROR) )
      sub_10000E8BC(v16, v15, v17);
    objc_release(v17);
    objc_release(v15);
    objc_release(v16);
LABEL_10:
    v14 = 0;
    goto LABEL_11;
  }
  v12 = objc_retainAutoreleasedReturnValue(
          +[NSJSONSerialization dataWithJSONObject:options:error:](
            &OBJC_CLASS___NSJSONSerialization,
            "dataWithJSONObject:options:error:",
            v10,
            0LL,
            0LL));
  v13 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSString), "initWithData:encoding:", v12, 4LL);
  v14 = (unsigned __int8)objc_msgSend(v13, "writeToFile:atomically:encoding:error:", v7, 0LL, 4LL, 0LL);
  objc_release(v13);
  objc_release(v12);
LABEL_11:
  objc_release(v10);
  objc_release(v8);
  objc_release(v7);
  return v14;
}