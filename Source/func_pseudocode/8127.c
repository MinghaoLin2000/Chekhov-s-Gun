-[XPCSignpostReader uploadFile:withTagConfig:]
bool __cdecl -[XPCSignpostReader uploadFile:withTagConfig:](XPCSignpostReader *self, SEL a2, id a3, id a4)
{
  id v6; // x19
  id v7; // x20
  bool v8; // w21
  os_log_s *v9; // x21
  void *v10; // x21
  void *v11; // x23
  void *v12; // x25
  void *v13; // x26
  void *v14; // x27
  void *v15; // x24
  void *v16; // x24
  _UNKNOWN **v17; // x2
  void *v18; // x24
  _UNKNOWN **v19; // x2
  void *v20; // x24
  unsigned int v21; // w22
  void *v22; // x22
  void *v23; // x24
  void *v24; // x22
  void *v25; // x24
  void *v26; // x22
  void *v27; // x24
  void *v28; // x22
  void *v29; // x24
  void *v30; // x22
  void *v31; // x24
  id v32; // x28
  void *v33; // x24
  void *v34; // x22
  void *v35; // x22
  void *v36; // x22
  void *v37; // x22
  os_log_s *v38; // x24
  void *v40; // [xsp+0h] [xbp-E0h]
  id v41; // [xsp+8h] [xbp-D8h]
  _QWORD v42[4]; // [xsp+10h] [xbp-D0h] BYREF
  id v43; // [xsp+30h] [xbp-B0h]
  void *v44; // [xsp+38h] [xbp-A8h]
  id v45; // [xsp+40h] [xbp-A0h]
  __int64 *v46; // [xsp+48h] [xbp-98h]
  __int64 v47; // [xsp+50h] [xbp-90h] BYREF
  __int64 *v48; // [xsp+58h] [xbp-88h]
  __int64 v49; // [xsp+60h] [xbp-80h]
  char v50; // [xsp+68h] [xbp-78h]
  uint8_t buf[4]; // [xsp+70h] [xbp-70h] BYREF
  id v52; // [xsp+74h] [xbp-6Ch]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v47 = 0LL;
  v48 = &v47;
  v49 = 0x2020000000LL;
  v8 = 1;
  v50 = 1;
  if ( v6 )
  {
    v9 = (os_log_s *)objc_retainAutoreleasedReturnValue(PLLogSignpostReader());
    if ( os_log_type_enabled(v9, OS_LOG_TYPE_INFO) )
    {
      *(_DWORD *)buf = 138412290;
      v52 = v6;
      _os_log_impl((void *)&_mh_execute_header, v9, OS_LOG_TYPE_INFO, "Upload file to iCloud: %@", buf, 0xCu);
    }
    objc_release(v9);
    v10 = objc_msgSend(
            objc_alloc((Class)&OBJC_CLASS___CKContainerID),
            "initWithContainerIdentifier:environment:",
            CFSTR("com.apple.perfpowerservices.tasking"),
            1LL);
    v11 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___CKContainer), "initWithContainerID:", v10);
    v41 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "publicCloudDatabase"));
    v12 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___CKRecord), "initWithRecordType:", CFSTR("Attachment"));
    v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "path"));
    v14 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___CKAsset), "initWithFileURL:", v6);
    if ( v14 )
    {
      objc_msgSend(v12, "setObject:forKeyedSubscript:", v14, CFSTR("asset"));
      v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "lastPathComponent"));
      objc_msgSend(v12, "setObject:forKeyedSubscript:", v15, CFSTR("fileName"));
      objc_release(v15);
      v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "objectForKeyedSubscript:", CFSTR("Internal")));
      if ( (unsigned int)objc_msgSend(v16, "isEqualToString:", CFSTR("true")) )
        v17 = &off_1000158A0;
      else
        v17 = &off_100015858;
      objc_msgSend(v12, "setObject:forKeyedSubscript:", v17, CFSTR("internal"), self);
      objc_release(v16);
      v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "objectForKeyedSubscript:", CFSTR("Beta")));
      if ( (unsigned int)objc_msgSend(v18, "isEqualToString:", CFSTR("true")) )
        v19 = &off_1000158A0;
      else
        v19 = &off_100015858;
      objc_msgSend(v12, "setObject:forKeyedSubscript:", v19, CFSTR("seed"));
      objc_release(v18);
      objc_msgSend(v12, "setObject:forKeyedSubscript:", CFSTR("macOS"), CFSTR("machineType"));
      v20 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "objectForKeyedSubscript:", CFSTR("machineType")));
      v21 = (unsigned int)objc_msgSend(v20, "isEqualToString:", CFSTR("iOS"));
      objc_release(v20);
      if ( v21 && (unsigned int)objc_msgSend(v40, "isiPad") )
        objc_msgSend(v12, "setObject:forKeyedSubscript:", CFSTR("iPadOS"), CFSTR("machineType"));
      v22 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "objectForKeyedSubscript:", CFSTR("Model")));
      objc_release(v22);
      if ( v22 )
      {
        v23 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "objectForKeyedSubscript:", CFSTR("Model")));
        objc_msgSend(v12, "setObject:forKeyedSubscript:", v23, CFSTR("deviceModel"));
        objc_release(v23);
      }
      v24 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "objectForKeyedSubscript:", CFSTR("TagUUID")));
      objc_release(v24);
      if ( v24 )
      {
        v25 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "objectForKeyedSubscript:", CFSTR("TagUUID")));
        objc_msgSend(v12, "setObject:forKeyedSubscript:", v25, CFSTR("UUID"));
        objc_release(v25);
      }
      v26 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "objectForKeyedSubscript:", CFSTR("Reason")));
      objc_release(v26);
      if ( v26 )
      {
        v27 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "objectForKeyedSubscript:", CFSTR("Reason")));
        objc_msgSend(v12, "setObject:forKeyedSubscript:", v27, CFSTR("reason"));
        objc_release(v27);
      }
      v28 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "objectForKeyedSubscript:", CFSTR("Build")));
      objc_release(v28);
      if ( v28 )
      {
        v29 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "objectForKeyedSubscript:", CFSTR("Build")));
        objc_msgSend(v12, "setObject:forKeyedSubscript:", v29, CFSTR("build"));
        objc_release(v29);
      }
      v30 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "objectForKeyedSubscript:", CFSTR("Date")));
      objc_release(v30);
      if ( v30 )
      {
        v31 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "objectForKeyedSubscript:", CFSTR("Date")));
        objc_msgSend(v12, "setObject:forKeyedSubscript:", v31, CFSTR("date"));
        objc_release(v31);
      }
      v32 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableArray);
      objc_msgSend(v32, "addObject:", v12);
      v33 = objc_msgSend(
              objc_alloc((Class)&OBJC_CLASS___CKModifyRecordsOperation),
              "initWithRecordsToSave:recordIDsToDelete:",
              v32,
              0LL);
      v34 = objc_retainAutoreleasedReturnValue(objc_msgSend(v33, "configuration"));
      objc_msgSend(v34, "setAllowsCellularAccess:", 0LL);
      objc_release(v34);
      v35 = objc_retainAutoreleasedReturnValue(objc_msgSend(v33, "configuration"));
      objc_msgSend(v35, "setAutomaticallyRetryNetworkFailures:", 1LL);
      objc_release(v35);
      v36 = objc_retainAutoreleasedReturnValue(objc_msgSend(v33, "configuration"));
      objc_msgSend(v36, "setDiscretionaryNetworkBehavior:", 0LL);
      objc_release(v36);
      v37 = objc_retainAutoreleasedReturnValue(objc_msgSend(v33, "configuration"));
      objc_msgSend(v37, "setPreferAnonymousRequests:", 1LL);
      objc_release(v37);
      v42[0] = _NSConcreteStackBlock;
      v42[1] = 3254779904LL;
      v42[2] = sub_10000D688;
      v42[3] = &unk_1000145E8;
      v46 = &v47;
      v43 = objc_retain(v6);
      v44 = v40;
      v45 = objc_retain(v13);
      objc_msgSend(v33, "setPerRecordCompletionBlock:", v42);
      objc_msgSend(v41, "addOperation:", v33);
      objc_release(v45);
      objc_release(v43);
      objc_release(v33);
      objc_release(v32);
    }
    else
    {
      v38 = (os_log_s *)objc_retainAutoreleasedReturnValue(PLLogSignpostReader());
      if ( os_log_type_enabled(v38, OS_LOG_TYPE_ERROR) )
        sub_10000EAC8(v6, v38);
      objc_release(v38);
      -[XPCSignpostReader removeFile:](self, "removeFile:", v13);
      *((_BYTE *)v48 + 24) = 0;
    }
    objc_release(v14);
    objc_release(v13);
    objc_release(v12);
    objc_release(v41);
    objc_release(v11);
    objc_release(v10);
    v8 = *((_BYTE *)v48 + 24) != 0;
  }
  _Block_object_dispose(&v47, 8);
  objc_release(v7);
  objc_release(v6);
  return v8;
}