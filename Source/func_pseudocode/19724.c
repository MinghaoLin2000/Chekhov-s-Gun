-[platform_http_t createTransactionResult:response:data:]
id __cdecl -[platform_http_t createTransactionResult:response:data:](
        platform_http_t *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v8; // x19
  id v9; // x20
  id v10; // x21
  char *v11; // x23
  id v12; // x23
  void *v13; // x0
  void *v14; // x24
  void *v15; // x25
  unsigned __int8 v16; // w26
  void *v17; // x24
  os_log_s *v18; // x23
  void *v19; // x23
  http_ipp_response_t *v20; // x25
  __CFString *v21; // x23
  http_ipp_response_t *v22; // x24
  void *v23; // x26
  http_ipp_response_t *v24; // x0
  unsigned int v25; // w9
  __int64 v26; // x2
  NSString *v27; // x0
  http_ipp_response_t *v28; // x25
  id v29; // x25
  _BYTE *v30; // x26
  unsigned __int8 *v31; // x0
  int v32; // w24
  IPPControlLogging *v33; // x24
  ipp_response_t *v34; // x24
  IPPControlLogging *v35; // x24
  ipp_response_t *v36; // x26
  uint8_t buf[16]; // [xsp+10h] [xbp-60h] BYREF
  __int64 vars8; // [xsp+78h] [xbp+8h]

  v8 = objc_retain(a3);
  v9 = objc_retain(a4);
  v10 = objc_retain(a5);
  if ( !v9 )
  {
    v22 = (http_ipp_response_t *)objc_retainAutoreleasedReturnValue(-[platform_http_t httpResponseForError:](self, "httpResponseForError:", v8));
    v23 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "domain"));
    v21 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithFormat:](
              &OBJC_CLASS___NSString,
              "stringWithFormat:",
              CFSTR("transport %@/%d"),
              v23,
              objc_msgSend(v8, "code")));
    objc_release(v23);
    goto LABEL_22;
  }
  v11 = (char *)objc_msgSend(v9, "statusCode");
  if ( v11 != (char *)200 )
  {
    v24 = objc_alloc(&OBJC_CLASS___http_ipp_response_t);
    if ( (unsigned __int64)(v11 - 500) >= 0x64 )
      v25 = 1;
    else
      v25 = 5;
    if ( v11 == (char *)401 )
      v25 = 3;
    if ( v11 == (char *)100 )
      v26 = 2LL;
    else
      v26 = v25;
    v22 = -[http_ipp_response_t initWithTransportStatus:](v24, "initWithTransportStatus:", v26);
    v27 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithFormat:](
              &OBJC_CLASS___NSString,
              "stringWithFormat:",
              CFSTR("http statusCode: %d"),
              v11));
    goto LABEL_21;
  }
  v12 = objc_retain(v10);
  v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "valueForHTTPHeaderField:", CFSTR("Content-Type")));
  v14 = v13;
  if ( v13 )
  {
    v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v13, "lowercaseString"));
    v16 = (unsigned __int8)objc_msgSend(v15, "hasPrefix:", CFSTR("application/ipp"));
    objc_release(v15);
    objc_release(v14);
    objc_release(v12);
    if ( (v16 & 1) != 0 )
    {
LABEL_5:
      v17 = objc_retainAutoreleasedReturnValue(+[PKIPP responseFromData:](&OBJC_CLASS___PKIPP, "responseFromData:", v12));
      if ( v17 )
      {
        if ( self->_boundInterfaceFixer )
        {
          v18 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryDefault[0]));
          if ( os_log_type_enabled(v18, OS_LOG_TYPE_DEFAULT) )
          {
            *(_WORD *)buf = 0;
            _os_log_impl(
              (void *)&_mh_execute_header,
              v18,
              OS_LOG_TYPE_DEFAULT,
              "Rewriting urls in ipp response for bound interface",
              buf,
              2u);
          }
          objc_release(v18);
          v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v17, "rewriteURLAttributes:", self->_boundInterfaceFixer));
          objc_release(v17);
          v17 = v19;
        }
        v20 = -[http_ipp_response_t initWithResponse:transportStatus:](
                objc_alloc(&OBJC_CLASS___http_ipp_response_t),
                "initWithResponse:transportStatus:",
                v17,
                0LL);
        objc_release(v17);
        v21 = 0LL;
        v22 = v20;
LABEL_22:
        v28 = v22;
        if ( v22 )
          goto LABEL_31;
        goto LABEL_30;
      }
      v22 = 0LL;
      v27 = objc_retainAutoreleasedReturnValue(
              +[NSString stringWithFormat:](
                &OBJC_CLASS___NSString,
                "stringWithFormat:",
                CFSTR("couldn't parse ipp data (length %d)"),
                objc_msgSend(v12, "length")));
LABEL_21:
      v21 = (__CFString *)v27;
      goto LABEL_22;
    }
  }
  else if ( (unsigned __int64)objc_msgSend(v12, "length") >= 9
         && (v29 = objc_retainAutorelease(v12),
             v30 = objc_msgSend(v29, "bytes"),
             v31 = (unsigned __int8 *)objc_msgSend(v29, "length"),
             *v30 == 2) )
  {
    v32 = v31[(_QWORD)v30 - 1];
    objc_release(v29);
    if ( v32 == 3 )
      goto LABEL_5;
  }
  else
  {
    objc_release(v12);
  }
  v21 = CFSTR("data not ipp");
LABEL_30:
  v28 = -[http_ipp_response_t initWithTransportStatus:](
          objc_alloc(&OBJC_CLASS___http_ipp_response_t),
          "initWithTransportStatus:",
          1LL);
LABEL_31:
  v33 = objc_retainAutoreleasedReturnValue(-[IPPSession controlLogging](self->_session, "controlLogging"));
  objc_release(v33);
  if ( v33 )
  {
    v34 = objc_retainAutoreleasedReturnValue(-[http_ipp_response_t ippResponse](v28, "ippResponse"));
    objc_release(v34);
    if ( v34 )
    {
      v35 = objc_retainAutoreleasedReturnValue(-[IPPSession controlLogging](self->_session, "controlLogging"));
      v36 = objc_retainAutoreleasedReturnValue(-[http_ipp_response_t ippResponse](v28, "ippResponse"));
      -[IPPControlLogging preserveResponse:forSequence:](
        v35,
        "preserveResponse:forSequence:",
        v36,
        (unsigned int)self->_seq);
      objc_release(v36);
    }
    else
    {
      if ( !v21 )
        v21 = CFSTR("Unknown");
      v35 = objc_retainAutoreleasedReturnValue(-[IPPSession controlLogging](self->_session, "controlLogging"));
      -[IPPControlLogging preserveResponseFailure:forSequence:](
        v35,
        "preserveResponseFailure:forSequence:",
        v21,
        (unsigned int)self->_seq);
    }
    objc_release(v35);
  }
  objc_release(v21);
  objc_release(v10);
  objc_release(v9);
  objc_release(v8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v28);
}