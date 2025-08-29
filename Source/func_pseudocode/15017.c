-[ATXHeuristicJSEnv _contactsDataSourceWithType:value:identifiers:]
id __cdecl -[ATXHeuristicJSEnv _contactsDataSourceWithType:value:identifiers:](
        ATXHeuristicJSEnv *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v8; // x19
  id v9; // x20
  id v10; // x21
  _QWORD *v11; // x22
  void *v12; // x0
  os_log_s *v13; // x24
  const char *Name; // x0
  id v15; // x23
  void *v16; // x0
  const char *v17; // x0
  void *v18; // x0
  const char *v19; // x0
  void *v20; // x0
  void *v21; // x0
  const char *v22; // x0
  os_log_s *v23; // x23
  _QWORD v25[6]; // [xsp+0h] [xbp-E0h] BYREF
  __int64 v26; // [xsp+30h] [xbp-B0h] BYREF
  _QWORD v27[4]; // [xsp+38h] [xbp-A8h] BYREF
  id v28; // [xsp+58h] [xbp-88h]
  __int64 v29; // [xsp+60h] [xbp-80h] BYREF
  __int64 *v30; // [xsp+68h] [xbp-78h]
  __int64 v31; // [xsp+70h] [xbp-70h]
  __int64 (__fastcall *v32)(); // [xsp+78h] [xbp-68h]
  __int64 (__fastcall *v33)(); // [xsp+80h] [xbp-60h]
  id v34; // [xsp+88h] [xbp-58h]
  uint8_t buf[4]; // [xsp+90h] [xbp-50h] BYREF
  id v36; // [xsp+94h] [xbp-4Ch]
  __int64 vars8; // [xsp+E8h] [xbp+8h]

  v8 = objc_retain(a3);
  v9 = objc_retain(a4);
  v10 = objc_retain(a5);
  if ( !v8 )
  {
    v15 = 0LL;
    goto LABEL_29;
  }
  v29 = 0LL;
  v30 = &v29;
  v31 = 0x3032000000LL;
  v32 = sub_10000D710;
  v33 = sub_10000D720;
  v34 = 0LL;
  v26 = 0LL;
  v27[0] = &v26;
  v27[1] = 0x3032000000LL;
  v27[2] = sub_10000D710;
  v27[3] = sub_10000D720;
  v28 = 0LL;
  v25[0] = _NSConcreteStackBlock;
  v25[1] = 3254779904LL;
  v25[2] = sub_10001620C;
  v25[3] = &unk_100029A80;
  v25[4] = &v29;
  v25[5] = &v26;
  v11 = objc_retainBlock(v25);
  if ( (unsigned int)objc_msgSend(v8, "isEqualToString:", CFSTR("identifiers")) )
  {
    v12 = -[ATXHeuristicDataSources contactsWithIdentifiers:callback:](
            self->_provider,
            "contactsWithIdentifiers:callback:",
            v10,
            v11);
    if ( *(_QWORD *)(v27[0] + 40LL) )
    {
      v13 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_1000050DC(v12));
      if ( os_log_type_enabled(v13, OS_LOG_TYPE_ERROR) )
      {
        Name = sel_getName("contactsWithIdentifiers:callback:");
        sub_10001C044(Name, v27, buf, v13);
      }
LABEL_22:
      objc_release(v13);
LABEL_27:
      v15 = 0LL;
      goto LABEL_28;
    }
  }
  else if ( (unsigned int)objc_msgSend(v8, "isEqualToString:", CFSTR("name")) )
  {
    v16 = -[ATXHeuristicDataSources contactsWithName:callback:](self->_provider, "contactsWithName:callback:", v9, v11);
    if ( *(_QWORD *)(v27[0] + 40LL) )
    {
      v13 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_1000050DC(v16));
      if ( os_log_type_enabled(v13, OS_LOG_TYPE_ERROR) )
      {
        v17 = sel_getName("contactsWithName:callback:");
        sub_10001C044(v17, v27, buf, v13);
      }
      goto LABEL_22;
    }
  }
  else if ( (unsigned int)objc_msgSend(v8, "isEqualToString:", CFSTR("email")) )
  {
    v18 = -[ATXHeuristicDataSources contactsWithEmail:callback:](
            self->_provider,
            "contactsWithEmail:callback:",
            v9,
            v11);
    if ( *(_QWORD *)(v27[0] + 40LL) )
    {
      v13 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_1000050DC(v18));
      if ( os_log_type_enabled(v13, OS_LOG_TYPE_ERROR) )
      {
        v19 = sel_getName("contactsWithEmail:callback:");
        sub_10001C044(v19, v27, buf, v13);
      }
      goto LABEL_22;
    }
  }
  else
  {
    v20 = objc_msgSend(v8, "isEqualToString:", CFSTR("phone"));
    if ( !(_DWORD)v20 )
    {
      v23 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_1000050DC(v20));
      if ( os_log_type_enabled(v23, OS_LOG_TYPE_DEFAULT) )
      {
        *(_DWORD *)buf = 138412290;
        v36 = v8;
        _os_log_impl((void *)&_mh_execute_header, v23, OS_LOG_TYPE_DEFAULT, "Unknown fetch type: '%@'", buf, 0xCu);
      }
      objc_release(v23);
      goto LABEL_27;
    }
    v21 = -[ATXHeuristicDataSources contactsWithPhone:callback:](
            self->_provider,
            "contactsWithPhone:callback:",
            v9,
            v11);
    if ( *(_QWORD *)(v27[0] + 40LL) )
    {
      v13 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_1000050DC(v21));
      if ( os_log_type_enabled(v13, OS_LOG_TYPE_ERROR) )
      {
        v22 = sel_getName("contactsWithPhone:callback:");
        sub_10001C044(v22, v27, buf, v13);
      }
      goto LABEL_22;
    }
  }
  v15 = objc_retain((id)v30[5]);
LABEL_28:
  objc_release(v11);
  _Block_object_dispose(&v26, 8);
  objc_release(v28);
  _Block_object_dispose(&v29, 8);
  objc_release(v34);
LABEL_29:
  objc_release(v10);
  objc_release(v9);
  objc_release(v8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v15);
}