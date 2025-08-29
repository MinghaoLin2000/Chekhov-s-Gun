-[XPCSignpostReader getScrollDirectionForSignpostInterval:]
id __cdecl -[XPCSignpostReader getScrollDirectionForSignpostInterval:](XPCSignpostReader *self, SEL a2, id a3)
{
  id v3; // x19
  void *v4; // x20
  unsigned __int8 v5; // w21
  __CFString *v6; // x20
  void *v7; // x20
  void *v8; // x21
  double v9; // d0
  double v10; // d0
  double v11; // d0
  double v12; // d0
  os_log_s *v13; // x21
  __int64 v15; // x9
  __int64 v16; // x10
  _QWORD v17[6]; // [xsp+0h] [xbp-E0h] BYREF
  __int64 v18; // [xsp+30h] [xbp-B0h] BYREF
  __int64 *v19; // [xsp+38h] [xbp-A8h]
  __int64 v20; // [xsp+40h] [xbp-A0h]
  __int64 (__fastcall *v21)(); // [xsp+48h] [xbp-98h]
  __int64 (__fastcall *v22)(); // [xsp+50h] [xbp-90h]
  id v23; // [xsp+58h] [xbp-88h]
  __int64 v24; // [xsp+60h] [xbp-80h] BYREF
  __int64 *v25; // [xsp+68h] [xbp-78h]
  __int64 v26; // [xsp+70h] [xbp-70h]
  __int64 (__fastcall *v27)(); // [xsp+78h] [xbp-68h]
  __int64 (__fastcall *v28)(); // [xsp+80h] [xbp-60h]
  id v29; // [xsp+88h] [xbp-58h]
  uint8_t buf[4]; // [xsp+90h] [xbp-50h] BYREF
  __CFString *v31; // [xsp+94h] [xbp-4Ch]
  __int16 v32; // [xsp+9Ch] [xbp-44h]
  __int64 v33; // [xsp+9Eh] [xbp-42h]
  __int16 v34; // [xsp+A6h] [xbp-3Ah]
  __int64 v35; // [xsp+A8h] [xbp-38h]

  v3 = objc_retain(a3);
  v24 = 0LL;
  v25 = &v24;
  v26 = 0x3032000000LL;
  v27 = sub_1000091D0;
  v28 = sub_1000091E0;
  v29 = 0LL;
  v18 = 0LL;
  v19 = &v18;
  v20 = 0x3032000000LL;
  v21 = sub_1000091D0;
  v22 = sub_1000091E0;
  v23 = 0LL;
  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "name"));
  v5 = (unsigned __int8)objc_msgSend(v4, "isEqualToString:", CFSTR("Scroll_Zooming"));
  objc_release(v4);
  if ( (v5 & 1) != 0 )
  {
    v6 = CFSTR("Diagonal");
  }
  else
  {
    v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "endEvent"));
    objc_release(v6);
    if ( v6 )
    {
      v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "endEvent"));
      v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "metadataSegments"));
      v17[0] = _NSConcreteStackBlock;
      v17[1] = 3254779904LL;
      v17[2] = sub_1000091E8;
      v17[3] = &unk_1000144C8;
      v17[4] = &v24;
      v17[5] = &v18;
      objc_msgSend(v8, "enumerateObjectsUsingBlock:", v17);
      objc_release(v8);
      objc_release(v7);
      objc_msgSend((id)v25[5], "doubleValue");
      if ( v9 != 0.0 || (objc_msgSend((id)v19[5], "doubleValue"), v10 == 0.0) )
      {
        objc_msgSend((id)v25[5], "doubleValue");
        if ( v11 == 0.0 || (objc_msgSend((id)v19[5], "doubleValue"), v12 != 0.0) )
          v6 = CFSTR("Diagonal");
        else
          v6 = CFSTR("Horizontal");
      }
      else
      {
        v6 = CFSTR("Vertical");
      }
      v13 = (os_log_s *)objc_retainAutoreleasedReturnValue(PLLogSignpostReader());
      if ( os_log_type_enabled(v13, OS_LOG_TYPE_DEBUG) )
      {
        v15 = v25[5];
        v16 = v19[5];
        *(_DWORD *)buf = 138412802;
        v31 = v6;
        v32 = 2112;
        v33 = v15;
        v34 = 2112;
        v35 = v16;
        _os_log_debug_impl(
          (void *)&_mh_execute_header,
          v13,
          OS_LOG_TYPE_DEBUG,
          "Scroll direction %@ (dx=%@, dy=%@)",
          buf,
          0x20u);
      }
      objc_release(v13);
    }
  }
  _Block_object_dispose(&v18, 8);
  objc_release(v23);
  _Block_object_dispose(&v24, 8);
  objc_release(v29);
  objc_release(v3);
  return v6;
}