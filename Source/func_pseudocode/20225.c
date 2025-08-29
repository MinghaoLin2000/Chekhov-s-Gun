-[ipp_value_t loggingValue:]
id __cdecl -[ipp_value_t loggingValue:](ipp_value_t *self, SEL a2, int a3)
{
  __CFString *v4; // x0
  NSObject *v5; // x20
  NSMutableArray *v6; // x21
  __int64 v7; // x1
  NSString *v8; // x19
  NSString *v9; // x23
  void *v10; // x0
  int v11; // w1
  int v12; // w19
  time_t v13; // x0
  __int64 v14; // x10
  __int64 v15; // x11
  NSDate *v16; // x20
  NSObject *v17; // x20
  void *v18; // x21
  void *v19; // x22
  void *v20; // x23
  void *v21; // x25
  void *v22; // x24
  void *v23; // x22
  void *v24; // x19
  void *v25; // x22
  void *i; // x19
  void *v27; // x26
  void *v28; // x23
  NSMutableArray *v29; // x24
  void *v30; // x25
  void *v31; // x27
  __int64 v32; // x20
  void *j; // x21
  void *v34; // x28
  NSDictionary *v35; // x25
  NSObject *x_payload; // x20
  __int64 v37; // x0
  __int64 v38; // x1
  __int64 v39; // x0
  NSObject *v41; // [xsp+20h] [xbp-260h]
  id obj; // [xsp+28h] [xbp-258h]
  __int64 v43; // [xsp+30h] [xbp-250h]
  NSMutableArray *v44; // [xsp+38h] [xbp-248h]
  __int128 v45; // [xsp+40h] [xbp-240h] BYREF
  __int128 v46; // [xsp+50h] [xbp-230h]
  __int128 v47; // [xsp+60h] [xbp-220h]
  __int128 v48; // [xsp+70h] [xbp-210h]
  __int128 v49; // [xsp+80h] [xbp-200h] BYREF
  __int128 v50; // [xsp+90h] [xbp-1F0h]
  __int128 v51; // [xsp+A0h] [xbp-1E0h]
  __int128 v52; // [xsp+B0h] [xbp-1D0h]
  tm v53; // [xsp+C0h] [xbp-1C0h] BYREF
  _QWORD v54[2]; // [xsp+F8h] [xbp-188h] BYREF
  _QWORD v55[2]; // [xsp+108h] [xbp-178h] BYREF
  _BYTE v56[128]; // [xsp+118h] [xbp-168h] BYREF
  _BYTE v57[128]; // [xsp+198h] [xbp-E8h] BYREF
  __int64 vars8; // [xsp+288h] [xbp+8h]

  if ( a3 > 32 )
  {
    switch ( a3 )
    {
      case '!':
      case '#':
        v44 = objc_retainAutoreleasedReturnValue(
                +[NSString stringWithFormat:](
                  &OBJC_CLASS___NSString,
                  "stringWithFormat:",
                  CFSTR("%d"),
                  -[ipp_value_t integer](self, "integer")));
        break;
      case '"':
        if ( -[ipp_value_t boolean](self, "boolean") )
          v4 = CFSTR("true");
        else
          v4 = CFSTR("false");
        goto LABEL_46;
      case '0':
        v5 = objc_retain(self->x_payload);
        v6 = objc_opt_new(&OBJC_CLASS___NSMutableArray);
        v8 = objc_retainAutoreleasedReturnValue(
               +[NSString stringWithFormat:](
                 &OBJC_CLASS___NSString,
                 "stringWithFormat:",
                 CFSTR("%@<%p> - %lu bytes {"),
                 objc_opt_class(v5, v7),
                 v5,
                 -[NSObject length](v5, "length")));
        -[NSMutableArray addObject:](v6, "addObject:", v8);
        objc_release(v8);
        *(_QWORD *)&v53.tm_sec = _NSConcreteStackBlock;
        *(_QWORD *)&v53.tm_hour = 3254779904LL;
        *(_QWORD *)&v53.tm_mon = sub_100040410;
        *(_QWORD *)&v53.tm_wday = &unk_10009EDF0;
        v44 = objc_retain(v6);
        *(_QWORD *)&v53.tm_isdst = v44;
        _visitHexLines(v5, 0LL, &v53);
        v9 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", CFSTR("}")));
        -[NSMutableArray addObject:](v44, "addObject:", v9);
        objc_release(v9);
        objc_release(*(id *)&v53.tm_isdst);
        objc_release(v5);
        break;
      case '1':
        v10 = -[ipp_value_t date](self, "date");
        v12 = v11;
        memset(&v53.tm_wday, 0, 32);
        v53.tm_mon = BYTE2(v10) - 1;
        v53.tm_year = (bswap32((unsigned int)v10) >> 16) - 1900;
        v53.tm_hour = BYTE4(v10);
        v53.tm_mday = BYTE3(v10);
        *(int8x8_t *)&v53.tm_sec = vand_s8(
                                     (int8x8_t)vmovn_s64((int64x2_t)vshlq_u64(
                                                                      (uint64x2_t)vdupq_n_s64((unsigned __int64)v10),
                                                                      (uint64x2_t)xmmword_10006D460)),
                                     (int8x8_t)0xFF000000FFLL);
        v13 = mktime(&v53);
        v14 = 3600LL;
        if ( (unsigned __int8)v12 != 45LL )
          v14 = -3600LL;
        v15 = 60LL;
        if ( (unsigned __int8)v12 != 45LL )
          v15 = -60LL;
        v16 = objc_retainAutoreleasedReturnValue(
                +[NSDate dateWithTimeIntervalSince1970:](
                  &OBJC_CLASS___NSDate,
                  "dateWithTimeIntervalSince1970:",
                  (double)(v15 * BYTE2(v12) + v14 * BYTE1(v12) + v13)));
        v44 = objc_retainAutoreleasedReturnValue(-[NSDate description](v16, "description"));
        objc_release(v16);
        break;
      case '2':
        v17 = objc_retain(self->x_payload);
        v18 = objc_retainAutoreleasedReturnValue(-[NSObject objectAtIndexedSubscript:](v17, "objectAtIndexedSubscript:", 0LL));
        v19 = objc_msgSend(v18, "integerValue");
        v20 = objc_retainAutoreleasedReturnValue(-[NSObject objectAtIndexedSubscript:](v17, "objectAtIndexedSubscript:", 1LL));
        v21 = objc_msgSend(v20, "integerValue");
        v22 = objc_retainAutoreleasedReturnValue(-[NSObject objectAtIndexedSubscript:](v17, "objectAtIndexedSubscript:", 2LL));
        v44 = objc_retainAutoreleasedReturnValue(
                +[NSString stringWithFormat:](
                  &OBJC_CLASS___NSString,
                  "stringWithFormat:",
                  CFSTR("resolution<%d, %d, %d>"),
                  v19,
                  v21,
                  objc_msgSend(v22, "integerValue")));
        objc_release(v22);
        goto LABEL_19;
      case '3':
        v17 = objc_retain(self->x_payload);
        v18 = objc_retainAutoreleasedReturnValue(-[NSObject objectAtIndexedSubscript:](v17, "objectAtIndexedSubscript:", 0LL));
        v23 = objc_msgSend(v18, "integerValue");
        v20 = objc_retainAutoreleasedReturnValue(-[NSObject objectAtIndexedSubscript:](v17, "objectAtIndexedSubscript:", 1LL));
        v44 = objc_retainAutoreleasedReturnValue(
                +[NSString stringWithFormat:](
                  &OBJC_CLASS___NSString,
                  "stringWithFormat:",
                  CFSTR("range<%d, %d>"),
                  v23,
                  objc_msgSend(v20, "integerValue")));
        goto LABEL_19;
      case '4':
        v41 = objc_retain(self->x_payload);
        v44 = objc_opt_new(&OBJC_CLASS___NSMutableArray);
        v51 = 0u;
        v52 = 0u;
        v49 = 0u;
        v50 = 0u;
        v24 = objc_retainAutoreleasedReturnValue(-[NSObject attrs](v41, "attrs"));
        obj = v24;
        v25 = objc_msgSend(v24, "countByEnumeratingWithState:objects:count:", &v49, v57, 16LL);
        if ( v25 )
        {
          v43 = *(_QWORD *)v50;
          do
          {
            for ( i = 0LL; i != v25; i = (char *)i + 1 )
            {
              if ( *(_QWORD *)v50 != v43 )
                objc_enumerationMutation(obj);
              v27 = *(void **)(*((_QWORD *)&v49 + 1) + 8LL * (_QWORD)i);
              v28 = objc_retainAutoreleasedReturnValue(objc_msgSend(v27, "name"));
              v29 = objc_opt_new(&OBJC_CLASS___NSMutableArray);
              v47 = 0u;
              v48 = 0u;
              v45 = 0u;
              v46 = 0u;
              v30 = objc_retainAutoreleasedReturnValue(objc_msgSend(v27, "values"));
              v31 = objc_msgSend(v30, "countByEnumeratingWithState:objects:count:", &v45, v56, 16LL);
              if ( v31 )
              {
                v32 = *(_QWORD *)v46;
                do
                {
                  for ( j = 0LL; j != v31; j = (char *)j + 1 )
                  {
                    if ( *(_QWORD *)v46 != v32 )
                      objc_enumerationMutation(v30);
                    v34 = objc_retainAutoreleasedReturnValue(
                            objc_msgSend(
                              *(id *)(*((_QWORD *)&v45 + 1) + 8LL * (_QWORD)j),
                              "loggingValue:",
                              objc_msgSend(v27, "value_tag")));
                    -[NSMutableArray addObject:](v29, "addObject:", v34);
                    objc_release(v34);
                  }
                  v31 = objc_msgSend(v30, "countByEnumeratingWithState:objects:count:", &v45, v56, 16LL);
                }
                while ( v31 );
              }
              objc_release(v30);
              v54[0] = CFSTR("col_name");
              v54[1] = CFSTR("col_vals");
              v55[0] = v28;
              v55[1] = v29;
              v35 = objc_retainAutoreleasedReturnValue(
                      +[NSDictionary dictionaryWithObjects:forKeys:count:](
                        &OBJC_CLASS___NSDictionary,
                        "dictionaryWithObjects:forKeys:count:",
                        v55,
                        v54,
                        2LL));
              -[NSMutableArray addObject:](v44, "addObject:", v35);
              objc_release(v35);
              objc_release(v29);
              objc_release(v28);
            }
            v24 = obj;
            v25 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v49, v57, 16LL);
          }
          while ( v25 );
        }
        objc_release(v24);
        objc_release(v41);
        break;
      default:
        goto LABEL_36;
    }
    goto LABEL_47;
  }
  if ( !a3 || a3 == 16 || a3 == 19 )
  {
    v44 = objc_retainAutoreleasedReturnValue(+[NSNull null](&OBJC_CLASS___NSNull, "null"));
    goto LABEL_47;
  }
LABEL_36:
  x_payload = self->x_payload;
  v37 = objc_opt_class(&OBJC_CLASS___NSArray, a2);
  if ( (objc_opt_isKindOfClass(x_payload, v37) & 1) != 0 )
  {
    v17 = objc_retain(self->x_payload);
    if ( !-[NSObject count](v17, "count") )
    {
      objc_release(v17);
      v44 = (NSMutableArray *)CFSTR("<empty array>");
      goto LABEL_47;
    }
    v18 = objc_retainAutoreleasedReturnValue(-[NSObject objectAtIndexedSubscript:](v17, "objectAtIndexedSubscript:", 0LL));
    v39 = objc_opt_class(&OBJC_CLASS___NSString, v38);
    if ( (objc_opt_isKindOfClass(v18, v39) & 1) != 0 )
    {
      if ( -[NSObject count](v17, "count") == (void *)1 )
      {
        v44 = objc_retain(v18);
LABEL_20:
        objc_release(v18);
        objc_release(v17);
        goto LABEL_47;
      }
      if ( -[NSObject count](v17, "count") == (void *)2 )
      {
        v20 = objc_retainAutoreleasedReturnValue(-[NSObject objectAtIndexedSubscript:](v17, "objectAtIndexedSubscript:", 1LL));
        v44 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", CFSTR("%@ (%@)"), v18, v20));
LABEL_19:
        objc_release(v20);
        goto LABEL_20;
      }
    }
    objc_release(v18);
    objc_release(v17);
  }
  v4 = (__CFString *)self->x_payload;
LABEL_46:
  v44 = objc_retain(v4);
LABEL_47:
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v44);
}