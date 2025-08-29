-[XPCSignpostReader updateHangsForProcess:withInterval:]
void __cdecl -[XPCSignpostReader updateHangsForProcess:withInterval:](XPCSignpostReader *self, SEL a2, id a3, id a4)
{
  id v6; // x19
  id v7; // x20
  os_log_s *v8; // x22
  float v9; // s0
  unsigned __int64 v10; // x23
  void *v11; // x22
  id v12; // x22
  NSNumber *v13; // x21
  NSNumber *v14; // x23

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v8 = (os_log_s *)objc_retainAutoreleasedReturnValue(PLLogSignpostReader());
  if ( os_log_type_enabled(v8, OS_LOG_TYPE_DEBUG) )
    sub_10000E0A8(v7, v8);
  objc_release(v8);
  objc_msgSend(v7, "durationSeconds");
  v10 = (unsigned __int64)(float)(v9 * 1000.0);
  v11 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_hangs, "objectForKeyedSubscript:", v6));
  objc_release(v11);
  if ( v11 )
  {
    v12 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_hangs, "objectForKeyedSubscript:", v6));
    v13 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithUnsignedLongLong:](&OBJC_CLASS___NSNumber, "numberWithUnsignedLongLong:", v10));
    objc_msgSend(v12, "addObject:", v13);
    objc_release(v13);
  }
  else
  {
    v12 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableArray);
    v14 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithUnsignedLongLong:](&OBJC_CLASS___NSNumber, "numberWithUnsignedLongLong:", v10));
    objc_msgSend(v12, "addObject:", v14);
    objc_release(v14);
    -[NSMutableDictionary setObject:forKey:](self->_hangs, "setObject:forKey:", v12, v6);
  }
  objc_release(v12);
  objc_release(v7);
  objc_release(v6);
}