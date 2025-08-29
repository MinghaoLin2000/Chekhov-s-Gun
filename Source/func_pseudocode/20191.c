-[Browse_NAN activatedConnection:forEndpoint:]
void __cdecl -[Browse_NAN activatedConnection:forEndpoint:](Browse_NAN *self, SEL a2, id a3, id a4)
{
  id v6; // x19
  const char *v7; // x1
  id v8; // x20
  os_log_s *v9; // x21
  unsigned __int16 Port; // w0
  unsigned __int16 v11; // w27
  NSString *v12; // x24
  NSNumber *v13; // x25
  void *v14; // x26
  void *v15; // x23
  OS_dispatch_queue *v16; // x24
  OS_dispatch_queue *v17; // x22
  _QWORD v18[4]; // [xsp+0h] [xbp-160h] BYREF
  id v19; // [xsp+20h] [xbp-140h]
  id v20; // [xsp+28h] [xbp-138h]
  id v21; // [xsp+30h] [xbp-130h]
  id v22; // [xsp+38h] [xbp-128h] BYREF
  _QWORD v23[3]; // [xsp+40h] [xbp-120h] BYREF
  int v24; // [xsp+58h] [xbp-108h]
  uint8_t buf[4]; // [xsp+60h] [xbp-100h] BYREF
  _OWORD *v26; // [xsp+64h] [xbp-FCh]
  __int16 v27; // [xsp+6Ch] [xbp-F4h]
  id v28; // [xsp+6Eh] [xbp-F2h]
  _OWORD v29[8]; // [xsp+80h] [xbp-E0h] BYREF

  v6 = objc_retain(a3);
  v8 = objc_retain(a4);
  memset(v23, 0, sizeof(v23));
  v24 = 0;
  if ( v6 )
    objc_msgSend_peerAddress(v23, v6, v7);
  memset(v29, 0, sizeof(v29));
  if ( (unsigned int)SockAddrToString(v23, 5LL, v29) )
  {
    v9 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryDiscovery[0]));
    if ( os_log_type_enabled(v9, OS_LOG_TYPE_DEFAULT) )
    {
      *(_DWORD *)buf = 138412546;
      v26 = v6;
      v27 = 2112;
      v28 = v8;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v9,
        OS_LOG_TYPE_DEFAULT,
        "NAN data path for %@/%@ - couldn't create peer address string",
        buf,
        0x16u);
    }
  }
  else
  {
    Port = SockAddrGetPort(v23);
    if ( Port )
      v11 = Port;
    else
      v11 = 631;
    v12 = objc_retainAutoreleasedReturnValue(+[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", v29));
    v13 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithUnsignedShort:](&OBJC_CLASS___NSNumber, "numberWithUnsignedShort:", v11));
    v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "textInfo"));
    v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "objectForKeyedSubscript:", CFSTR("rp")));
    v9 = (os_log_s *)objc_retainAutoreleasedReturnValue(PKURLWithComponents(CFSTR("ipp"), v12, v13, v15));
    objc_release(v15);
    objc_release(v14);
    objc_release(v13);
    objc_release(v12);
    if ( v9 )
    {
      v16 = objc_retain(self->_queue);
      objc_initWeak((id *)buf, self);
      v18[0] = _NSConcreteStackBlock;
      v18[1] = 3254779904LL;
      v18[2] = sub_100037E8C;
      v18[3] = &unk_10009E5F8;
      v19 = objc_retain(v9);
      v17 = objc_retain(v16);
      v20 = v17;
      objc_copyWeak(&v22, (id *)buf);
      v21 = objc_retain(v6);
      +[PKPrinterBonjourEndpoint resolveWithURL:timeout:completionHandler:](
        &OBJC_CLASS___PKPrinterBonjourEndpoint,
        "resolveWithURL:timeout:completionHandler:",
        v19,
        v18,
        30.0);
      objc_release(v21);
      objc_destroyWeak(&v22);
      objc_release(v20);
      objc_release(v19);
      objc_destroyWeak((id *)buf);
    }
    else
    {
      v17 = (OS_dispatch_queue *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryDiscovery[0]));
      if ( os_log_type_enabled(v17, OS_LOG_TYPE_DEFAULT) )
      {
        *(_DWORD *)buf = 136315394;
        v26 = v29;
        v27 = 1024;
        LODWORD(v28) = v11;
        _os_log_impl(
          (void *)&_mh_execute_header,
          v17,
          OS_LOG_TYPE_DEFAULT,
          "Couldn't create a URL from addr %s port %d",
          buf,
          0x12u);
      }
    }
    objc_release(v17);
  }
  objc_release(v9);
  objc_release(v8);
  objc_release(v6);
}