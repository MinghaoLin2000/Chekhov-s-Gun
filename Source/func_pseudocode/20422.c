-[PrintdRPCService _ippNetworkingSession:]
id __cdecl -[PrintdRPCService _ippNetworkingSession:](PrintdRPCService *self, SEL a2, bool a3)
{
  _BOOL4 v3; // w19
  NSXPCConnection *connection; // x0
  __SecTask *v6; // x0
  __SecTask *v7; // x20
  CFStringRef v8; // x22
  __objc2_class **v9; // x8
  IPPControlLogging *v10; // x20
  IPPControlLogging *v11; // x19
  NSString *v12; // x23
  IPPControlLogging *v13; // x21
  os_log_s *v14; // x19
  os_log_s *v15; // x20
  audit_token_t token; // [xsp+10h] [xbp-90h] BYREF
  audit_token_t v18; // [xsp+30h] [xbp-70h] BYREF
  uint8_t buf[4]; // [xsp+50h] [xbp-50h] BYREF
  PrintdRPCService *v20; // [xsp+54h] [xbp-4Ch]
  __int64 vars8; // [xsp+A8h] [xbp+8h]

  v3 = a3;
  memset(&v18, 0, sizeof(v18));
  connection = self->_connection;
  if ( connection )
    objc_msgSend_auditToken(&v18, connection, a2);
  if ( (*(_QWORD *)v18.val & *(_QWORD *)&v18.val[2] & *(_QWORD *)&v18.val[4] & *(_QWORD *)&v18.val[6]) != -1LL )
  {
    token = v18;
    v6 = SecTaskCreateWithAuditToken(kCFAllocatorDefault, &token);
    v7 = v6;
    if ( v6 )
    {
      v8 = SecTaskCopySigningIdentifier(v6, 0LL);
      CFRelease(v7);
      if ( v8 )
      {
        v9 = &off_100090AB8;
        if ( !v3 )
          v9 = off_100090AB0;
        v10 = (IPPControlLogging *)objc_retainAutoreleasedReturnValue(objc_alloc(*v9));
        v11 = -[IPPControlLogging initWithBundleIdentifier:clientID:](
                v10,
                "initWithBundleIdentifier:clientID:",
                v8,
                (unsigned int)self->_clientID);
        if ( PreserveControlFiles )
        {
          v12 = objc_retainAutoreleasedReturnValue(
                  +[NSString stringWithFormat:](
                    &OBJC_CLASS___NSString,
                    "stringWithFormat:",
                    CFSTR("%@-%d"),
                    v8,
                    (unsigned int)self->_clientID));
          v13 = -[IPPControlLogging initWithIdentifier:](
                  objc_alloc(&OBJC_CLASS___IPPControlLogging),
                  "initWithIdentifier:",
                  v12);
          -[IPPControlLogging setControlLogging:](v11, "setControlLogging:", v13);
          objc_release(v13);
          objc_release(v12);
        }
        CFRelease(v8);
        goto LABEL_15;
      }
    }
  }
  v14 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryDefault[0]));
  if ( os_log_type_enabled(v14, OS_LOG_TYPE_DEFAULT) )
  {
    *(_DWORD *)buf = 138543362;
    v20 = self;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v14,
      OS_LOG_TYPE_DEFAULT,
      "No bundle identifier for %{public}@, using the global session",
      buf,
      0xCu);
  }
  objc_release(v14);
  v11 = (IPPControlLogging *)objc_retainAutoreleasedReturnValue(+[IPPSession globalSession](&OBJC_CLASS___IPPSession, "globalSession"));
  if ( PreserveControlFiles )
  {
    v10 = -[IPPControlLogging initWithIdentifier:](
            objc_alloc(&OBJC_CLASS___IPPControlLogging),
            "initWithIdentifier:",
            CFSTR("PrinterToolGlobal"));
    -[IPPControlLogging setControlLogging:](v11, "setControlLogging:", v10);
LABEL_15:
    objc_release(v10);
  }
  v15 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryDefault[0]));
  if ( os_log_type_enabled(v15, OS_LOG_TYPE_DEFAULT) )
  {
    *(_DWORD *)buf = 138543362;
    v20 = (PrintdRPCService *)v11;
    _os_log_impl((void *)&_mh_execute_header, v15, OS_LOG_TYPE_DEFAULT, "Created ipp session %{public}@", buf, 0xCu);
  }
  objc_release(v15);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v11);
}