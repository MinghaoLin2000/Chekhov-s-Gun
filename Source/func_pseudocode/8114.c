-[XPCSignpostReader submitSignpostDataWithConfig:withReply:]
void __cdecl -[XPCSignpostReader submitSignpostDataWithConfig:withReply:](
        XPCSignpostReader *self,
        SEL a2,
        id a3,
        id a4)
{
  id v5; // x19
  void (__fastcall **v6)(id, _QWORD); // x20
  os_log_s *v7; // x21
  void *v8; // x21
  void *v9; // x23
  void *v10; // x26
  void *v11; // x24
  void *v12; // x25
  __int64 v13; // x0
  id v14; // x28
  void *v15; // x27
  os_log_s *v16; // x22
  os_log_s *v17; // x22
  os_log_s *v18; // x22
  os_log_s *v19; // x22
  os_log_s *v20; // x22
  void *v21; // x22
  _BOOL8 v22; // x28
  void *v23; // x22
  unsigned int v24; // w26
  void *v25; // x26
  void *v26; // x21
  void *v27; // x28
  NSString *v28; // x22
  void *v29; // x1
  NSString *v30; // x24
  NSString *v31; // x26
  id v32; // x23
  NSFileManager *v33; // x23
  NSArray *v34; // x22
  NSURL *v35; // x26
  void *v36; // x23
  void *v37; // x23
  os_log_s *v38; // x26
  void *v39; // x23
  unsigned int v40; // w0
  NSNumber *v41; // x22
  os_log_s *v42; // x22
  void *v43; // [xsp+10h] [xbp-A0h]
  void *v44; // [xsp+18h] [xbp-98h]
  void *v45; // [xsp+20h] [xbp-90h]
  NSString *v46; // [xsp+28h] [xbp-88h]
  id v48; // [xsp+30h] [xbp-80h]
  void *v49; // [xsp+38h] [xbp-78h]
  uint8_t buf[4]; // [xsp+40h] [xbp-70h] BYREF
  void *v51; // [xsp+44h] [xbp-6Ch]
  __int16 v52; // [xsp+4Ch] [xbp-64h]
  unsigned int v53; // [xsp+4Eh] [xbp-62h]

  v5 = objc_retain(a3);
  v6 = (void (__fastcall **)(id, _QWORD))objc_retain(a4);
  v7 = (os_log_s *)objc_retainAutoreleasedReturnValue(PLLogSignpostReader());
  if ( os_log_type_enabled(v7, OS_LOG_TYPE_INFO) )
  {
    *(_WORD *)buf = 0;
    _os_log_impl((void *)&_mh_execute_header, v7, OS_LOG_TYPE_INFO, "Signpost data submission start", buf, 2u);
  }
  objc_release(v7);
  v8 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
  v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "objectForKeyedSubscript:", CFSTR("taskingAllowlist")));
  v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "objectForKeyedSubscript:", CFSTR("taskingStartDate")));
  v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "objectForKeyedSubscript:", CFSTR("taskingEndDate")));
  v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "objectForKeyedSubscript:", CFSTR("taskingTagConfig")));
  if ( v12 && (v13 = objc_opt_class(&OBJC_CLASS___NSDictionary), (objc_opt_isKindOfClass(v12, v13) & 1) != 0) )
  {
    v14 = objc_retain(v12);
    v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "objectForKeyedSubscript:", CFSTR("TagUUID")));
  }
  else
  {
    v15 = 0LL;
    v14 = 0LL;
  }
  v16 = (os_log_s *)objc_retainAutoreleasedReturnValue(PLLogSignpostReader());
  if ( os_log_type_enabled(v16, OS_LOG_TYPE_DEBUG) )
    sub_10000E4D4(v12, v16);
  objc_release(v16);
  v17 = (os_log_s *)objc_retainAutoreleasedReturnValue(PLLogSignpostReader());
  if ( os_log_type_enabled(v17, OS_LOG_TYPE_DEBUG) )
    sub_10000E46C(v10, v17);
  objc_release(v17);
  v18 = (os_log_s *)objc_retainAutoreleasedReturnValue(PLLogSignpostReader());
  if ( os_log_type_enabled(v18, OS_LOG_TYPE_DEBUG) )
    sub_10000E404(v11, v18);
  objc_release(v18);
  v19 = (os_log_s *)objc_retainAutoreleasedReturnValue(PLLogSignpostReader());
  if ( os_log_type_enabled(v19, OS_LOG_TYPE_DEBUG) )
    sub_10000E39C(v9, v19);
  objc_release(v19);
  v20 = (os_log_s *)objc_retainAutoreleasedReturnValue(PLLogSignpostReader());
  if ( os_log_type_enabled(v20, OS_LOG_TYPE_DEBUG) )
    sub_10000E334(v15, v20);
  objc_release(v20);
  v21 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSUUID), "initWithUUIDString:", v15);
  objc_release(v21);
  if ( v21 )
  {
    v49 = v14;
    v22 = 1LL;
    if ( v10 && v11 && v9 && v15 )
    {
      v44 = v9;
      v45 = v10;
      v46 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithFormat:](
                &OBJC_CLASS___NSString,
                "stringWithFormat:",
                CFSTR("%@Powerlog_%@/"),
                CFSTR("/tmp/powerlog/cloud/"),
                v15));
      v23 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "objectForKeyedSubscript:", CFSTR("taskingSubmitSP")));
      v24 = (unsigned int)objc_msgSend(v23, "boolValue");
      objc_release(v23);
      v43 = v8;
      if ( v24 )
      {
        v25 = objc_retainAutoreleasedReturnValue(objc_msgSend(v49, "objectForKeyedSubscript:", CFSTR("Date")));
        v26 = v11;
        if ( v25 )
        {
          v27 = objc_retainAutoreleasedReturnValue(objc_msgSend(v49, "objectForKeyedSubscript:", CFSTR("Date")));
          v28 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", CFSTR("Signpost_%@"), v27));
          objc_release(v27);
        }
        else
        {
          v28 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", CFSTR("Signpost_%@"), v15));
        }
        objc_release(v25);
        v30 = v46;
        v31 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", CFSTR("%@%@/"), v46, v28));
        v32 = objc_retainAutoreleasedReturnValue(
                -[XPCSignpostReader createSignpostFile:withStartDate:withEndDate:withallowlist:withTagConfig:](
                  self,
                  "createSignpostFile:withStartDate:withEndDate:withallowlist:withTagConfig:",
                  v31,
                  v45,
                  v26,
                  v9,
                  v12));
        v22 = v32 != 0LL;
        objc_release(v31);
        objc_release(v28);
        objc_release(v32);
      }
      else
      {
        v26 = v11;
        v30 = v46;
      }
      v33 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
      v34 = objc_retainAutoreleasedReturnValue(-[NSFileManager contentsOfDirectoryAtPath:error:](v33, "contentsOfDirectoryAtPath:error:", v30, 0LL));
      objc_release(v33);
      v10 = v45;
      v11 = v26;
      v8 = v43;
      if ( v34 && -[NSArray count](v34, "count") )
      {
        v35 = objc_retainAutoreleasedReturnValue(+[NSURL fileURLWithPath:](&OBJC_CLASS___NSURL, "fileURLWithPath:", v46));
        v36 = objc_retainAutoreleasedReturnValue(
                +[DEArchiver archiveDirectoryAt:deleteOriginal:](
                  &OBJC_CLASS___DEArchiver,
                  "archiveDirectoryAt:deleteOriginal:",
                  v35,
                  1LL));
        objc_release(v35);
        v48 = v36;
        v37 = objc_retainAutoreleasedReturnValue(objc_msgSend(v36, "path"));
        objc_msgSend(v43, "setObject:forKeyedSubscript:", v37, CFSTR("tarballPath"));
        objc_release(v37);
        v38 = (os_log_s *)objc_retainAutoreleasedReturnValue(PLLogSignpostReader());
        if ( os_log_type_enabled(v38, OS_LOG_TYPE_INFO) )
        {
          v39 = objc_retainAutoreleasedReturnValue(objc_msgSend(v48, "path"));
          v40 = (unsigned int)-[NSArray count](v34, "count");
          *(_DWORD *)buf = 138412546;
          v51 = v39;
          v52 = 1024;
          v53 = v40;
          _os_log_impl(
            (void *)&_mh_execute_header,
            v38,
            OS_LOG_TYPE_INFO,
            "File to upload generated at %@ with %d files included.",
            buf,
            0x12u);
          objc_release(v39);
        }
        objc_release(v38);
        objc_release(v48);
        v10 = v45;
      }
      objc_release(v34);
      objc_release(v46);
      v9 = v44;
    }
    v41 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithBool:](&OBJC_CLASS___NSNumber, "numberWithBool:", v22));
    objc_msgSend(v8, "setObject:forKey:", v41, CFSTR("success"));
    objc_release(v41);
    v42 = (os_log_s *)objc_retainAutoreleasedReturnValue(PLLogSignpostReader());
    if ( os_log_type_enabled(v42, OS_LOG_TYPE_INFO) )
    {
      *(_DWORD *)buf = 138412290;
      v51 = v8;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v42,
        OS_LOG_TYPE_INFO,
        "Signpost data submission end: reply = %@",
        buf,
        0xCu);
    }
    objc_release(v42);
    v29 = v8;
    v14 = v49;
  }
  else
  {
    v29 = 0LL;
  }
  ((void (__fastcall **)(id, void *))v6)[2](v6, v29);
  objc_release(v15);
  objc_release(v14);
  objc_release(v12);
  objc_release(v11);
  objc_release(v10);
  objc_release(v9);
  objc_release(v8);
  objc_release(v6);
  objc_release(v5);
}