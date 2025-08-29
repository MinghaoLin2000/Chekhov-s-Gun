-[PrintdRPCService translationsForPrinter:languageCode:reply:]
void __cdecl -[PrintdRPCService translationsForPrinter:languageCode:reply:](
        PrintdRPCService *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v8; // x19
  id v9; // x24
  id v10; // x25
  os_log_s *v11; // x21
  IPPSession *v12; // x22
  id v13; // x23
  id v14; // x24
  id v15; // x25
  id v16; // x20
  void *v17; // x26
  id v18; // x20
  id v19; // x20
  void **v20; // x21
  void *v21; // x20
  device_http_t *v22; // x20
  id v23; // x27
  void *v24; // x20
  void *v25; // x20
  ipp_attribute_t *v26; // x28
  id v27; // x21
  NSURL *v28; // x20
  void *v29; // x21
  _QWORD v30[4]; // [xsp+18h] [xbp-A8h] BYREF
  id v31; // [xsp+38h] [xbp-88h]
  uint8_t buf[24]; // [xsp+40h] [xbp-80h] BYREF
  int v33[2]; // [xsp+58h] [xbp-68h]

  v8 = objc_retain(a3);
  v9 = objc_retain(a4);
  v10 = objc_retain(a5);
  v11 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryDefault[0]));
  if ( os_log_type_enabled(v11, OS_LOG_TYPE_DEFAULT) )
  {
    *(_WORD *)buf = 0;
    _os_log_impl((void *)&_mh_execute_header, v11, OS_LOG_TYPE_DEFAULT, "translationsForPrinter", buf, 2u);
  }
  objc_release(v11);
  v12 = objc_retainAutoreleasedReturnValue(-[PrintdRPCService ippNetworkingSession](self, "ippNetworkingSession"));
  v13 = objc_retain(objc_retainAutoreleasedReturnValue(-[IPPSession ippURL:](v12, "ippURL:", v8)));
  v14 = objc_retain(v9);
  v15 = objc_retain(v10);
  sub_100013C6C(buf, 11LL, CFSTR("translationsForPrinter"));
  *(_QWORD *)buf = &off_100091890;
  v16 = objc_retainAutoreleasedReturnValue((id)sub_1000370DC(*(_QWORD *)v33));
  v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "_findAttribute0:valueTag:", CFSTR("attributes-natural-language"), 72LL));
  objc_release(v16);
  if ( v17 )
  {
    v18 = objc_retainAutoreleasedReturnValue((id)sub_1000370DC(*(_QWORD *)v33));
    objc_msgSend(v18, "_deleteAttribute:", v17);
    objc_release(v18);
  }
  v19 = objc_retainAutoreleasedReturnValue((id)sub_1000370DC(*(_QWORD *)v33));
  objc_msgSend(v19, "_addString:valueTag:name:lang:value:", 1LL, 72LL, CFSTR("attributes-natural-language"), 0LL, v14);
  objc_release(v19);
  v20 = *(void ***)v33;
  v21 = objc_retainAutoreleasedReturnValue(objc_msgSend(v13, "url"));
  Printd_Parameters::_set_PrinterURI(v20, v21);
  objc_release(v21);
  Printd_Parameters::_set_RequestedAttributes(*(void ***)v33, &off_1000B46B0);
  v22 = -[device_http_t initWithSessionURL:displayNameForCertTrust:](
          objc_alloc(&OBJC_CLASS___device_http_t),
          "initWithSessionURL:displayNameForCertTrust:",
          v13,
          0LL);
  v23 = objc_retainAutoreleasedReturnValue(-[device_http_t sendSingleIPPRequest:](v22, "sendSingleIPPRequest:", buf));
  objc_release(v22);
  v24 = objc_retainAutoreleasedReturnValue(objc_msgSend(v23, "ippResponse"));
  objc_release(v24);
  if ( v24 )
  {
    v25 = objc_retainAutoreleasedReturnValue(objc_msgSend(v23, "ippResponse"));
    v26 = objc_retainAutoreleasedReturnValue(objc_msgSend(v25, "_findAttribute0:valueTag:", CFSTR("printer-strings-uri"), 69LL));
    objc_release(v25);
    if ( v26 )
    {
      v27 = objc_retainAutoreleasedReturnValue(ippGetIXString(v26, 0));
      v28 = objc_retainAutoreleasedReturnValue(PKURLWithString(v27));
      objc_release(v27);
      if ( v28 )
      {
        v29 = objc_retainAutoreleasedReturnValue(objc_msgSend(v13, "session"));
        v30[0] = _NSConcreteStackBlock;
        v30[1] = 3254779904LL;
        v30[2] = sub_10004F3EC;
        v30[3] = &unk_1000918F0;
        v31 = objc_retain(v15);
        platformHTTP_GetDataForURL(v29, v28, v30);
        objc_release(v29);
        objc_release(v31);
      }
      else
      {
        (*((void (__fastcall **)(id, _QWORD))v15 + 2))(v15, 0LL);
      }
      objc_release(v28);
    }
    else
    {
      (*((void (__fastcall **)(id, _QWORD))v15 + 2))(v15, 0LL);
    }
    objc_release(v26);
  }
  else
  {
    (*((void (__fastcall **)(id, _QWORD))v15 + 2))(v15, 0LL);
  }
  objc_release(v23);
  objc_release(v17);
  sub_100013E14(buf);
  objc_release(v15);
  objc_release(v14);
  objc_release(v13);
  objc_release(v13);
  objc_release(v12);
  objc_release(v15);
  objc_release(v14);
  objc_release(v8);
}