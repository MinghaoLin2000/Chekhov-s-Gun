-[XPCSignpostReader updateExtendedLaunchesForProcess:withInterval:]
void __cdecl -[XPCSignpostReader updateExtendedLaunchesForProcess:withInterval:](
        XPCSignpostReader *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x19
  id v7; // x20
  os_log_s *v8; // x21
  void *v9; // x21
  NSNumber *v10; // x22
  float v11; // s0
  unsigned __int64 v12; // x24
  void *v13; // x0
  void *v14; // x25
  void *v15; // x26
  void *v16; // x27
  void *v17; // x25
  void *v18; // x23
  NSNumber *v19; // x24
  void *v20; // x25
  void *v21; // x25
  void *v22; // x25
  void *v23; // x26
  NSNumber *v24; // x24

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v8 = (os_log_s *)objc_retainAutoreleasedReturnValue(PLLogSignpostReader());
  if ( os_log_type_enabled(v8, OS_LOG_TYPE_DEBUG) )
    sub_10000DE30(v7, v8);
  objc_release(v8);
  v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "string2Value"));
  v10 = objc_retainAutoreleasedReturnValue(
          +[NSNumber numberWithBool:](
            &OBJC_CLASS___NSNumber,
            "numberWithBool:",
            objc_msgSend(v9, "isEqualToString:", CFSTR("YES"))));
  objc_msgSend(v7, "durationSeconds");
  v12 = (unsigned __int64)(float)(v11 * 1000.0);
  v13 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_extendedLaunches, "objectForKeyedSubscript:", v6));
  if ( v13 )
  {
    v14 = v13;
    v15 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_extendedLaunches, "objectForKeyedSubscript:", v6));
    v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15, "objectForKeyedSubscript:", v10));
    objc_release(v16);
    objc_release(v15);
    objc_release(v14);
    if ( v16 )
    {
      v17 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_extendedLaunches, "objectForKeyedSubscript:", v6));
      v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v17, "objectForKeyedSubscript:", v10));
      v19 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithUnsignedLongLong:](&OBJC_CLASS___NSNumber, "numberWithUnsignedLongLong:", v12));
      objc_msgSend(v18, "addObject:", v19);
      objc_release(v19);
LABEL_10:
      objc_release(v18);
      objc_release(v17);
      goto LABEL_11;
    }
  }
  v20 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_extendedLaunches, "objectForKeyedSubscript:", v6));
  objc_release(v20);
  if ( !v20 )
  {
    v21 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
    -[NSMutableDictionary setObject:forKeyedSubscript:](
      self->_extendedLaunches,
      "setObject:forKeyedSubscript:",
      v21,
      v6);
    objc_release(v21);
  }
  v22 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_extendedLaunches, "objectForKeyedSubscript:", v6));
  v23 = objc_retainAutoreleasedReturnValue(objc_msgSend(v22, "objectForKeyedSubscript:", v10));
  objc_release(v23);
  objc_release(v22);
  if ( !v23 )
  {
    v17 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
    v24 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithUnsignedLongLong:](&OBJC_CLASS___NSNumber, "numberWithUnsignedLongLong:", v12));
    objc_msgSend(v17, "addObject:", v24);
    objc_release(v24);
    v18 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_extendedLaunches, "objectForKeyedSubscript:", v6));
    objc_msgSend(v18, "setObject:forKeyedSubscript:", v17, v10);
    goto LABEL_10;
  }
LABEL_11:
  objc_release(v10);
  objc_release(v9);
  objc_release(v7);
  objc_release(v6);
}