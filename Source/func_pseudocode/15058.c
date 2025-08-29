+[ATXActionCriteria atx_criteriaWithDictionary:]
id __cdecl +[ATXActionCriteria atx_criteriaWithDictionary:](id a1, SEL a2, id a3)
{
  id v3; // x19
  void *v4; // x21
  id v5; // x20
  void *v6; // x22
  id v7; // x21
  os_log_s *v8; // x22
  __int64 v9; // d0
  __int64 v10; // d8
  __int64 v11; // d0
  void *v12; // x22
  void *v13; // x22
  void *v14; // x23
  int v16; // [xsp+0h] [xbp-60h] BYREF
  __int64 v17; // [xsp+4h] [xbp-5Ch]
  __int16 v18; // [xsp+Ch] [xbp-54h]
  __int64 v19; // [xsp+Eh] [xbp-52h]
  __int64 vars8; // [xsp+68h] [xbp+8h]

  v3 = objc_retain(a3);
  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "objectForKeyedSubscript:", CFSTR("startDate")));
  v5 = objc_retainAutoreleasedReturnValue((id)sub_10001C404());
  objc_release(v4);
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "objectForKeyedSubscript:", CFSTR("endDate")));
  v7 = objc_retainAutoreleasedReturnValue((id)sub_10001C404());
  objc_release(v6);
  if ( v5 && v7 && objc_msgSend(v5, "compare:", v7) == (void *)1 )
  {
    v8 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_1000050DC(1LL));
    if ( os_log_type_enabled(v8, OS_LOG_TYPE_DEFAULT) )
    {
      objc_msgSend(v5, "timeIntervalSinceReferenceDate");
      v10 = v9;
      objc_msgSend(v7, "timeIntervalSinceReferenceDate");
      v16 = 134218240;
      v17 = v10;
      v18 = 2048;
      v19 = v11;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v8,
        OS_LOG_TYPE_DEFAULT,
        "Start date %f must be before end date %f",
        (uint8_t *)&v16,
        0x16u);
    }
    objc_release(v8);
    v12 = 0LL;
  }
  else
  {
    v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "objectForKeyedSubscript:", CFSTR("lockScreenEligible")));
    v14 = objc_msgSend(v13, "boolValue");
    objc_release(v13);
    v12 = objc_msgSend(
            objc_alloc((Class)&OBJC_CLASS___ATXActionCriteria),
            "initWithStartDate:endDate:lockScreenEligible:predicate:",
            v5,
            v7,
            v14,
            0LL);
  }
  objc_release(v7);
  objc_release(v5);
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v12);
}