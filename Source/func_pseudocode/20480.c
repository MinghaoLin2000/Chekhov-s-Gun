+[PKPrinterBonjourEndpoint txtFromGetPrinterAttributes:url:]
id __cdecl +[PKPrinterBonjourEndpoint txtFromGetPrinterAttributes:url:](
        id a1,
        SEL a2,
        const GET_PRINTER_ATTRIBUTES_Response *a3,
        id a4)
{
  NSMutableDictionary *v5; // x20
  void *v6; // x22
  id v7; // x22
  NSURL *v8; // x22
  NSString *v9; // x23
  id v10; // x22
  void *v11; // x23
  id v12; // x22
  void *v13; // x22
  void *v14; // x22
  NSString *v15; // x23
  id v16; // x22
  unsigned __int8 v17; // w23
  id v18; // x22
  unsigned int v19; // w23
  const __CFString *v20; // x2
  id v21; // x22
  unsigned int v22; // w23
  const __CFString *v23; // x2
  id v24; // x22
  void *v25; // x23
  id v26; // x22
  void *v27; // x23
  NSURL *v28; // x23
  NSString *v29; // x22
  NSString *v30; // x23
  id v31; // x23
  id v32; // x24
  NSMutableDictionary *v33; // x21
  void *v34; // x24
  __int64 v35; // x27
  void *i; // x28
  __int64 v37; // x26
  id v38; // x0
  _BOOL4 v39; // w19
  os_log_s *v40; // x24
  id v42; // [xsp+8h] [xbp-178h]
  __int128 v43; // [xsp+10h] [xbp-170h] BYREF
  __int128 v44; // [xsp+20h] [xbp-160h]
  __int128 v45; // [xsp+30h] [xbp-150h]
  __int128 v46; // [xsp+40h] [xbp-140h]
  _QWORD v47[4]; // [xsp+58h] [xbp-128h] BYREF
  id v48; // [xsp+78h] [xbp-108h]
  uint8_t buf[4]; // [xsp+80h] [xbp-100h] BYREF
  id v50; // [xsp+84h] [xbp-FCh]
  __int16 v51; // [xsp+8Ch] [xbp-F4h]
  __int64 v52; // [xsp+8Eh] [xbp-F2h]
  _BYTE v53[128]; // [xsp+A0h] [xbp-E0h] BYREF
  __int64 vars8; // [xsp+188h] [xbp+8h]

  v42 = objc_retain(a4);
  v5 = objc_opt_new(&OBJC_CLASS___NSMutableDictionary);
  -[NSMutableDictionary setObject:forKeyedSubscript:](v5, "setObject:forKeyedSubscript:", CFSTR("1"), CFSTR("txtvers"));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v5, "setObject:forKeyedSubscript:", CFSTR("1"), CFSTR("qtotal"));
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v42, "path"));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v5, "setObject:forKeyedSubscript:", v6, CFSTR("rp"));
  objc_release(v6);
  v7 = objc_retainAutoreleasedReturnValue(Printd_Parameters::_get_PrinterMakeAndModel((Printd_Parameters *)a3));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v5, "setObject:forKeyedSubscript:", v7, CFSTR("ty"));
  objc_release(v7);
  v8 = objc_retainAutoreleasedReturnValue(Printd_Parameters::_get_PrinterMoreInfo((Printd_Parameters *)a3));
  v9 = objc_retainAutoreleasedReturnValue(-[NSURL absoluteString](v8, "absoluteString"));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v5, "setObject:forKeyedSubscript:", v9, CFSTR("adminurl"));
  objc_release(v9);
  objc_release(v8);
  v10 = objc_retainAutoreleasedReturnValue(Printd_Parameters::_get_PrinterKind((Printd_Parameters *)a3));
  v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "componentsJoinedByString:", CFSTR(",")));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v5, "setObject:forKeyedSubscript:", v11, CFSTR("kind"));
  objc_release(v11);
  objc_release(v10);
  v12 = objc_retainAutoreleasedReturnValue(Printd_Parameters::_get_PrinterLocation((Printd_Parameters *)a3));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v5, "setObject:forKeyedSubscript:", v12, CFSTR("note"));
  objc_release(v12);
  v13 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v5, "objectForKeyedSubscript:", CFSTR("ty")));
  objc_release(v13);
  if ( v13 )
  {
    v14 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v5, "objectForKeyedSubscript:", CFSTR("ty")));
    v15 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", CFSTR("(%@)"), v14));
    -[NSMutableDictionary setObject:forKeyedSubscript:](v5, "setObject:forKeyedSubscript:", v15, CFSTR("product"));
    objc_release(v15);
    objc_release(v14);
  }
  if ( !Printd_Parameters::_has_PrintColorModeSupported(&a3->var0) )
  {
    if ( !Printd_Parameters::_has_OutputModeSupported(&a3->var0) )
      goto LABEL_9;
    v18 = objc_retainAutoreleasedReturnValue(Printd_Parameters::_get_OutputModeSupported((Printd_Parameters *)a3));
    v19 = (unsigned int)objc_msgSend(v18, "containsObject:", CFSTR("color"));
    objc_release(v18);
    if ( !v19 )
      goto LABEL_9;
LABEL_8:
    v20 = CFSTR("T");
    goto LABEL_10;
  }
  v16 = objc_retainAutoreleasedReturnValue(Printd_Parameters::_get_PrintColorModeSupported((Printd_Parameters *)a3));
  v17 = (unsigned __int8)objc_msgSend(v16, "containsObject:", CFSTR("color"));
  objc_release(v16);
  if ( (v17 & 1) != 0 )
    goto LABEL_8;
LABEL_9:
  v20 = CFSTR("F");
LABEL_10:
  -[NSMutableDictionary setObject:forKeyedSubscript:](v5, "setObject:forKeyedSubscript:", v20, CFSTR("color"));
  v21 = objc_retainAutoreleasedReturnValue(Printd_Parameters::_get_SidesSupported((Printd_Parameters *)a3));
  v22 = (unsigned int)objc_msgSend(v21, "containsObject:", CFSTR("two-sided-long-edge"));
  objc_release(v21);
  if ( v22 )
    v23 = CFSTR("T");
  else
    v23 = CFSTR("F");
  -[NSMutableDictionary setObject:forKeyedSubscript:](v5, "setObject:forKeyedSubscript:", v23, CFSTR("duplex"));
  v24 = objc_retainAutoreleasedReturnValue(Printd_Parameters::_get_DocumentFormatSupported((Printd_Parameters *)a3));
  v25 = objc_retainAutoreleasedReturnValue(objc_msgSend(v24, "componentsJoinedByString:", CFSTR(",")));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v5, "setObject:forKeyedSubscript:", v25, CFSTR("pdl"));
  objc_release(v25);
  objc_release(v24);
  v26 = objc_retainAutoreleasedReturnValue(Printd_Parameters::_get_URFSupported((Printd_Parameters *)a3));
  v27 = objc_retainAutoreleasedReturnValue(objc_msgSend(v26, "componentsJoinedByString:", CFSTR(",")));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v5, "setObject:forKeyedSubscript:", v27, CFSTR("urf"));
  objc_release(v27);
  objc_release(v26);
  v28 = objc_retainAutoreleasedReturnValue(Printd_Parameters::_get_PrinterUUID((Printd_Parameters *)a3));
  v29 = objc_retainAutoreleasedReturnValue(-[NSURL absoluteString](v28, "absoluteString"));
  objc_release(v28);
  if ( v29 )
  {
    if ( -[NSString hasPrefix:](v29, "hasPrefix:", CFSTR("urn:uuid:")) )
    {
      v30 = objc_retainAutoreleasedReturnValue(-[NSString substringFromIndex:](v29, "substringFromIndex:", objc_msgSend(CFSTR("urn:uuid:"), "length")));
      objc_release(v29);
      v29 = v30;
    }
    -[NSMutableDictionary setObject:forKeyedSubscript:](v5, "setObject:forKeyedSubscript:", v29, CFSTR("uuid"));
  }
  v31 = objc_retainAutoreleasedReturnValue(Printd_Parameters::_get_PrinterDNS_SD_Name((Printd_Parameters *)a3));
  if ( !v31 )
    v31 = objc_retainAutoreleasedReturnValue(Printd_Parameters::_get_PrinterMakeAndModel((Printd_Parameters *)a3));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v5, "setObject:forKeyedSubscript:", v31, CFSTR("display-name"));
  v32 = objc_retainAutoreleasedReturnValue(Printd_Parameters::_get_URIAuthenticationSupported((Printd_Parameters *)a3));
  v47[0] = _NSConcreteStackBlock;
  v47[1] = 3254779904LL;
  v47[2] = sub_10005FFAC;
  v47[3] = &unk_10009FA38;
  v33 = objc_retain(v5);
  v48 = v33;
  objc_msgSend(v32, "enumerateObjectsUsingBlock:", v47);
  objc_release(v32);
  v45 = 0u;
  v46 = 0u;
  v43 = 0u;
  v44 = 0u;
  v34 = objc_msgSend(&off_1000B4770, "countByEnumeratingWithState:objects:count:", &v43, v53, 16LL);
  if ( v34 )
  {
    v35 = *(_QWORD *)v44;
    while ( 2 )
    {
      for ( i = 0LL; i != v34; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v44 != v35 )
          objc_enumerationMutation(&off_1000B4770);
        v37 = *(_QWORD *)(*((_QWORD *)&v43 + 1) + 8LL * (_QWORD)i);
        v38 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKey:](v33, "objectForKey:", v37));
        v39 = v38 == 0LL;
        objc_release(v38);
        if ( v39 )
        {
          v40 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryDiscovery[0]));
          if ( os_log_type_enabled(v40, OS_LOG_TYPE_ERROR) )
          {
            *(_DWORD *)buf = 138543618;
            v50 = v42;
            v51 = 2114;
            v52 = v37;
            _os_log_impl(
              (void *)&_mh_execute_header,
              v40,
              OS_LOG_TYPE_ERROR,
              "txt record for '%{public}@' does not contain '%{public}@', not AirPrint compliant",
              buf,
              0x16u);
          }
          objc_release(v40);
          objc_release(v33);
          v33 = 0LL;
          goto LABEL_31;
        }
      }
      v34 = objc_msgSend(&off_1000B4770, "countByEnumeratingWithState:objects:count:", &v43, v53, 16LL);
      if ( v34 )
        continue;
      break;
    }
  }
LABEL_31:
  objc_release(v48);
  objc_release(v31);
  objc_release(v29);
  objc_release(v42);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v33);
}