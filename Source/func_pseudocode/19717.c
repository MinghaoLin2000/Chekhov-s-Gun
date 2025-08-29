-[platform_http_t makeTask:forRequest:]
id __cdecl -[platform_http_t makeTask:forRequest:](platform_http_t *self, SEL a2, id a3, const Real_IPP_Message *a4)
{
  id v6; // x19
  IPPSessionTransaction *v7; // x20
  NSString *v8; // x23
  __int64 add; // x8
  NSString *v10; // x0
  NSString *logLeader; // x8
  IPPControlLogging *v12; // x24
  IPPControlLogging *v13; // x24
  _QWORD v15[4]; // [xsp+20h] [xbp-B0h] BYREF
  id v16; // [xsp+40h] [xbp-90h] BYREF
  id location; // [xsp+48h] [xbp-88h] BYREF
  _QWORD v18[5]; // [xsp+50h] [xbp-80h] BYREF
  _QWORD v19[5]; // [xsp+78h] [xbp-58h] BYREF
  __int64 vars8; // [xsp+D8h] [xbp+8h]

  v6 = objc_retain(a3);
  v7 = -[IPPSessionTransaction initWithURL:ippRequest:session:](
         objc_alloc(&OBJC_CLASS___IPPSessionTransaction),
         "initWithURL:ippRequest:session:",
         self->_url,
         a4->var1,
         self->_session);
  v8 = objc_retainAutoreleasedReturnValue(
         +[NSString stringWithFormat:](
           &OBJC_CLASS___NSString,
           "stringWithFormat:",
           CFSTR("%@(%@)"),
           self->_logLeader,
           v6));
  -[IPPSessionTransaction prependLogLeader:](v7, "prependLogLeader:", v8);
  objc_release(v8);
  add = atomic_fetch_add(dword_1000C0FC8, 1u);
  self->_seq = add;
  v10 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithFormat:](
            &OBJC_CLASS___NSString,
            "stringWithFormat:",
            CFSTR("<platform_http(%p) seq %d, %@>"),
            self,
            add,
            v6));
  logLeader = self->_logLeader;
  self->_logLeader = v10;
  objc_release(logLeader);
  -[IPPSessionTransaction prependLogLeader:](v7, "prependLogLeader:", self->_logLeader);
  if ( self->_trust_callback )
  {
    v19[0] = _NSConcreteStackBlock;
    v19[1] = 3254779904LL;
    v19[2] = sub_10000AD1C;
    v19[3] = &unk_100091198;
    v19[4] = self;
    -[IPPSessionTransaction setTrust_callback:](v7, "setTrust_callback:", v19);
  }
  if ( self->_pass_callback )
  {
    v18[0] = _NSConcreteStackBlock;
    v18[1] = 3254779904LL;
    v18[2] = sub_10000AEE8;
    v18[3] = &unk_1000911F8;
    v18[4] = self;
    -[IPPSessionTransaction setPass_callback:](v7, "setPass_callback:", v18);
  }
  objc_initWeak(&location, self);
  v15[0] = _NSConcreteStackBlock;
  v15[1] = 3254779904LL;
  v15[2] = sub_10000B0F0;
  v15[3] = &unk_100091228;
  objc_copyWeak(&v16, &location);
  -[IPPSessionTransaction setBoundInterfaceSet_callback:](v7, "setBoundInterfaceSet_callback:", v15);
  v12 = objc_retainAutoreleasedReturnValue(-[IPPSession controlLogging](self->_session, "controlLogging"));
  objc_release(v12);
  if ( v12 )
  {
    v13 = objc_retainAutoreleasedReturnValue(-[IPPSession controlLogging](self->_session, "controlLogging"));
    -[IPPControlLogging preserveRequest:forSequence:](
      v13,
      "preserveRequest:forSequence:",
      a4->var1,
      (unsigned int)self->_seq);
    objc_release(v13);
  }
  objc_destroyWeak(&v16);
  objc_destroyWeak(&location);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}