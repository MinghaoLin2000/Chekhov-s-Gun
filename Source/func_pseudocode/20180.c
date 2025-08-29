-[NANBrowse_Entity initWithURL:txt:dataSession:]
NANBrowse_Entity *__cdecl -[NANBrowse_Entity initWithURL:txt:dataSession:](
        NANBrowse_Entity *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v8; // x19
  id v9; // x20
  id v10; // x21
  NANBrowse_Entity *v11; // x22
  void *v12; // x23
  const __CFString *v13; // x0
  __CFString *v14; // x25
  const __CFString *v15; // x8
  NSString *v16; // x26
  PKPrinterBonjourEndpoint *v17; // x0
  PKPrinterBonjourEndpoint *bonjourName; // x8
  PKNANDataSession *v19; // x25
  objc_super v21; // [xsp+10h] [xbp-50h] BYREF

  v8 = objc_retain(a3);
  v9 = objc_retain(a4);
  v10 = objc_retain(a5);
  v21.receiver = self;
  v21.super_class = (Class)&OBJC_CLASS___NANBrowse_Entity;
  v11 = -[NANBrowse_Entity init](&v21, "init");
  if ( v11 )
  {
    v12 = objc_msgSend(v9, "mutableCopy");
    v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "objectForKeyedSubscript:", CFSTR("note")));
    v14 = (__CFString *)v13;
    v15 = CFSTR("no location");
    if ( v13 )
      v15 = v13;
    v16 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithFormat:](
              &OBJC_CLASS___NSString,
              "stringWithFormat:",
              CFSTR("FROM NAN BROWSE: %@"),
              v15));
    objc_msgSend(v12, "setObject:forKeyedSubscript:", v16, CFSTR("note"));
    objc_release(v16);
    objc_release(v14);
    v17 = (PKPrinterBonjourEndpoint *)objc_msgSend(
                                        objc_alloc((Class)&OBJC_CLASS___PKPrinterBonjourEndpoint),
                                        "initWithURL:txtRecord:provenance:provenanceIdentifier:",
                                        v8,
                                        v12,
                                        32LL,
                                        0LL);
    bonjourName = v11->_bonjourName;
    v11->_bonjourName = v17;
    objc_release(bonjourName);
    objc_storeStrong((id *)&v11->_txt, v12);
    objc_storeStrong((id *)&v11->_dataSession, a5);
    v19 = objc_retain(v11->_dataSession);
    if ( qword_1000C3F28 != -1 )
      dispatch_once(&qword_1000C3F28, &stru_10009E7A8);
    objc_msgSend((id)qword_1000C3F20, "addObject:", v19);
    objc_release(v19);
    objc_release(v12);
  }
  objc_release(v10);
  objc_release(v9);
  objc_release(v8);
  return v11;
}