-[ipp_response_t initWithRequest:]
ipp_response_t *__cdecl -[ipp_response_t initWithRequest:](ipp_response_t *self, SEL a2, id a3)
{
  id *v4; // x19
  ipp_response_t *v5; // x20
  void *v6; // x22
  void *v7; // x23
  unsigned int v8; // w21
  void *v9; // x22
  void *v10; // x23
  void *v11; // x24
  void *v12; // x26
  void *v13; // x1
  void *v14; // x25
  void *v15; // x22
  void *v16; // x23
  unsigned int v17; // w21
  NSLocale *v18; // x23
  id v19; // x22
  void *v20; // x23
  void *v21; // x24
  void *v22; // x26
  void *v23; // x1
  void *v24; // x25
  objc_super v26; // [xsp+0h] [xbp-50h] BYREF

  v4 = (id *)objc_retain(a3);
  v26.receiver = self;
  v26.super_class = (Class)&OBJC_CLASS___ipp_response_t;
  v5 = -[ipp_t init](&v26, "init");
  if ( v5 )
  {
    v5->super._request_id = (unsigned int)objc_msgSend(v4, "request_id");
    if ( objc_msgSend(v4[3], "count")
      && (v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4[3], "objectAtIndexedSubscript:", 0LL)),
          v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "name")),
          v8 = (unsigned int)objc_msgSend(v7, "compare:", CFSTR("attributes-charset")),
          objc_release(v7),
          objc_release(v6),
          !v8) )
    {
      v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4[3], "objectAtIndexedSubscript:", 0LL));
      v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "values"));
      v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "objectAtIndexedSubscript:", 0LL));
      v12 = objc_msgSend(v11, "string");
      v14 = v13;
      -[ipp_t _addString:valueTag:name:lang:value:](
        v5,
        "_addString:valueTag:name:lang:value:",
        1LL,
        71LL,
        CFSTR("attributes-charset"),
        0LL,
        v13);
      objc_release(v14);
      objc_release(v12);
      objc_release(v11);
      objc_release(v10);
      objc_release(v9);
    }
    else
    {
      -[ipp_t _addString:valueTag:name:lang:value:](
        v5,
        "_addString:valueTag:name:lang:value:",
        1LL,
        71LL,
        CFSTR("attributes-charset"),
        0LL,
        CFSTR("utf-8"));
    }
    if ( objc_msgSend(v4[3], "count")
      && (v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4[3], "objectAtIndexedSubscript:", 0LL)),
          v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15, "name")),
          v17 = (unsigned int)objc_msgSend(v16, "compare:", CFSTR("attributes-natural-language")),
          objc_release(v16),
          objc_release(v15),
          !v17) )
    {
      v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4[3], "objectAtIndexedSubscript:", 1LL));
      v20 = objc_retainAutoreleasedReturnValue(objc_msgSend(v19, "values"));
      v21 = objc_retainAutoreleasedReturnValue(objc_msgSend(v20, "objectAtIndexedSubscript:", 0LL));
      v22 = objc_msgSend(v21, "string");
      v24 = v23;
      -[ipp_t _addString:valueTag:name:lang:value:](
        v5,
        "_addString:valueTag:name:lang:value:",
        1LL,
        72LL,
        CFSTR("attributes-natural-language"),
        0LL,
        v23);
      objc_release(v24);
      objc_release(v22);
      objc_release(v21);
      objc_release(v20);
    }
    else
    {
      v18 = objc_retainAutoreleasedReturnValue(+[NSLocale currentLocale](&OBJC_CLASS___NSLocale, "currentLocale"));
      v19 = objc_retainAutoreleasedReturnValue(-[NSLocale objectForKey:](v18, "objectForKey:", NSLocaleLanguageCode));
      objc_release(v18);
      -[ipp_t _addString:valueTag:name:lang:value:](
        v5,
        "_addString:valueTag:name:lang:value:",
        1LL,
        72LL,
        CFSTR("attributes-natural-language"),
        0LL,
        v19);
    }
    objc_release(v19);
  }
  objc_release(v4);
  return v5;
}