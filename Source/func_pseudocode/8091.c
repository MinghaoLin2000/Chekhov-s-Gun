-[XPCSignpostReader updateLaunchesForProcess:withInterval:]
void __cdecl -[XPCSignpostReader updateLaunchesForProcess:withInterval:](XPCSignpostReader *self, SEL a2, id a3, id a4)
{
  id v6; // x19
  id v7; // x20
  os_log_s *v8; // x21
  void *v9; // x21
  float v10; // s0
  unsigned __int64 v11; // x23
  void *v12; // x0
  void *v13; // x24
  void *v14; // x25
  void *v15; // x26
  void *v16; // x24
  void *v17; // x22
  NSNumber *v18; // x23
  void *v19; // x24
  void *v20; // x24
  void *v21; // x24
  void *v22; // x25
  NSNumber *v23; // x23

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v8 = (os_log_s *)objc_retainAutoreleasedReturnValue(PLLogSignpostReader());
  if ( os_log_type_enabled(v8, OS_LOG_TYPE_DEBUG) )
    sub_10000DD64(v7, v8);
  objc_release(v8);
  v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "number1Value"));
  if ( v9 )
  {
    objc_msgSend(v7, "durationSeconds");
    v11 = (unsigned __int64)(float)(v10 * 1000.0);
    v12 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_launches, "objectForKeyedSubscript:", v6));
    if ( v12 )
    {
      v13 = v12;
      v14 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_launches, "objectForKeyedSubscript:", v6));
      v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "objectForKeyedSubscript:", v9));
      objc_release(v15);
      objc_release(v14);
      objc_release(v13);
      if ( v15 )
      {
        v16 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_launches, "objectForKeyedSubscript:", v6));
        v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "objectForKeyedSubscript:", v9));
        v18 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithUnsignedLongLong:](&OBJC_CLASS___NSNumber, "numberWithUnsignedLongLong:", v11));
        objc_msgSend(v17, "addObject:", v18);
        objc_release(v18);
LABEL_11:
        objc_release(v17);
        objc_release(v16);
        goto LABEL_12;
      }
    }
    v19 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_launches, "objectForKeyedSubscript:", v6));
    objc_release(v19);
    if ( !v19 )
    {
      v20 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
      -[NSMutableDictionary setObject:forKeyedSubscript:](self->_launches, "setObject:forKeyedSubscript:", v20, v6);
      objc_release(v20);
    }
    v21 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_launches, "objectForKeyedSubscript:", v6));
    v22 = objc_retainAutoreleasedReturnValue(objc_msgSend(v21, "objectForKeyedSubscript:", v9));
    objc_release(v22);
    objc_release(v21);
    if ( !v22 )
    {
      v16 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
      v23 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithUnsignedLongLong:](&OBJC_CLASS___NSNumber, "numberWithUnsignedLongLong:", v11));
      objc_msgSend(v16, "addObject:", v23);
      objc_release(v23);
      v17 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_launches, "objectForKeyedSubscript:", v6));
      objc_msgSend(v17, "setObject:forKeyedSubscript:", v16, v9);
      goto LABEL_11;
    }
  }
LABEL_12:
  objc_release(v9);
  objc_release(v7);
  objc_release(v6);
}