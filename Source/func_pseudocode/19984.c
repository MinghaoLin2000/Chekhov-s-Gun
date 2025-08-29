__Z11pwgInitSizeP10pwg_size_sP23GetMediaInfoForPWGMediaPi
__int64 __fastcall pwgInitSize(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 v3; // x23
  id v7; // x0
  void *v8; // x19
  os_log_s *v9; // x0
  os_log_s *v10; // x20
  unsigned int v11; // w0
  os_log_s *v12; // x0
  __int64 v13; // x23
  os_log_s *v14; // x21
  os_log_s *v15; // x21
  void *v17; // x24
  unsigned int v18; // w25
  _BYTE v19[28]; // [xsp+0h] [xbp-100h] BYREF
  _BYTE v20[144]; // [xsp+28h] [xbp-D8h] BYREF

  v3 = 0LL;
  if ( a1 && a2 && a3 )
  {
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *a3 = 0;
    v7 = objc_retainAutoreleasedReturnValue((id)(**(__int64 (__fastcall ***)(__int64))a2)(a2));
    v8 = v7;
    if ( v7 )
    {
      v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "mediaSize"));
      v10 = v9;
      if ( !v9 )
      {
        v14 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryDefault[0]));
        if ( os_log_type_enabled(v14, OS_LOG_TYPE_ERROR) )
        {
          *(_DWORD *)v19 = 136315650;
          *(_QWORD *)&v19[4] = "pwgInitSize";
          *(_WORD *)&v19[12] = 1024;
          *(_DWORD *)&v19[14] = 1280;
          *(_WORD *)&v19[18] = 2080;
          *(_QWORD *)&v19[20] = "Missing media-size in media-col.";
          _os_log_impl(
            (void *)&_mh_execute_header,
            v14,
            OS_LOG_TYPE_ERROR,
            "%s: setting ipp status %d error message %s",
            v19,
            0x1Cu);
        }
        v3 = 0LL;
        v10 = v14;
        goto LABEL_20;
      }
      *(_DWORD *)a1 = (unsigned int)-[os_log_s xDimension](v9, "xDimension");
      *(_DWORD *)(a1 + 4) = (unsigned int)-[os_log_s yDimension](v10, "yDimension");
      memset(v19, 0, 24);
      v11 = (unsigned int)objc_msgSend(v8, "getMargins:", v19);
      *a3 = v11;
      if ( v11 )
        *(_OWORD *)(a1 + 8) = *(_OWORD *)&v19[8];
      goto LABEL_12;
    }
    v12 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2));
    v10 = v12;
    if ( v12 )
    {
      v13 = pwgMediaForPWG(v12, v20);
      if ( v13 || (v13 = sub_100020ED4(v10)) != 0 )
      {
LABEL_11:
        *(_QWORD *)a1 = *(_QWORD *)(v13 + 24);
LABEL_12:
        v3 = 1LL;
LABEL_20:
        objc_release(v10);
        objc_release(v8);
        return v3;
      }
      v13 = sub_1000205D0(v10, v20);
      if ( v13 )
      {
        v17 = objc_retainAutoreleasedReturnValue(-[os_log_s lowercaseString](v10, "lowercaseString"));
        v18 = (unsigned int)objc_msgSend(v17, "hasSuffix:", CFSTR(".FullBleed"));
        objc_release(v17);
        if ( v18 )
          *a3 = 1;
        goto LABEL_11;
      }
      v15 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryDefault[0]));
      if ( os_log_type_enabled(v15, OS_LOG_TYPE_ERROR) )
      {
        *(_DWORD *)v19 = 136315650;
        *(_QWORD *)&v19[4] = "pwgInitSize";
        *(_WORD *)&v19[12] = 1024;
        *(_DWORD *)&v19[14] = 1280;
        *(_WORD *)&v19[18] = 2080;
        *(_QWORD *)&v19[20] = "Unsupported media value.";
        goto LABEL_18;
      }
    }
    else
    {
      v15 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryDefault[0]));
      if ( os_log_type_enabled(v15, OS_LOG_TYPE_ERROR) )
      {
        *(_DWORD *)v19 = 136315650;
        *(_QWORD *)&v19[4] = "pwgInitSize";
        *(_WORD *)&v19[12] = 1024;
        *(_DWORD *)&v19[14] = 1280;
        *(_WORD *)&v19[18] = 2080;
        *(_QWORD *)&v19[20] = "Missing media or media-col.";
LABEL_18:
        _os_log_impl(
          (void *)&_mh_execute_header,
          v15,
          OS_LOG_TYPE_ERROR,
          "%s: setting ipp status %d error message %s",
          v19,
          0x1Cu);
      }
    }
    objc_release(v15);
    v3 = 0LL;
    goto LABEL_20;
  }
  return v3;
}