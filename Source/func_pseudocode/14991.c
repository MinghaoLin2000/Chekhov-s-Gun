-[ATXHeuristicJSEnv _addAction:withCriteria:]
void __cdecl -[ATXHeuristicJSEnv _addAction:withCriteria:](ATXHeuristicJSEnv *self, SEL a2, id a3, id a4)
{
  id v6; // x19
  id v7; // x20
  __int64 v8; // x0
  __int64 v9; // x0
  __int64 v10; // x0
  id v11; // x0
  id v12; // x21
  __int64 v13; // x0
  void *v14; // x23
  os_log_s *v15; // x24
  NSString *v16; // x23
  os_log_s *v17; // x0
  os_log_s *v18; // x22
  __int16 v19[8]; // [xsp+0h] [xbp-50h] BYREF
  uint8_t buf[16]; // [xsp+10h] [xbp-40h] BYREF

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  if ( v6
    && ((v8 = objc_opt_class(&OBJC_CLASS___ATXAction), (objc_opt_isKindOfClass(v6, v8) & 1) != 0)
     || (v9 = objc_opt_class(&OBJC_CLASS___ATXHeuristicActionMaker), (objc_opt_isKindOfClass(v6, v9) & 1) != 0)) )
  {
    v10 = objc_opt_class(&OBJC_CLASS___ATXAction);
    if ( (objc_opt_isKindOfClass(v6, v10) & 1) != 0 )
      v11 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___ATXHeuristicActionMakerForAction), "initWithAction:", v6);
    else
      v11 = objc_retain(v6);
    v12 = v11;
    if ( v7 && (v13 = objc_opt_class(&OBJC_CLASS___ATXActionCriteria), (objc_opt_isKindOfClass(v7, v13) & 1) == 0) )
    {
      v18 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_1000050DC());
      if ( os_log_type_enabled(v18, OS_LOG_TYPE_DEFAULT) )
      {
        v19[0] = 0;
        _os_log_impl(
          (void *)&_mh_execute_header,
          v18,
          OS_LOG_TYPE_DEFAULT,
          "Expected nil or ATXActionCriteria",
          (uint8_t *)v19,
          2u);
      }
      v17 = v18;
    }
    else
    {
      objc_msgSend(v12, "setCriteria:", v7);
      v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "actionTypeName"));
      v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(CFSTR(":"), "stringByAppendingString:", v14));
      objc_release(v14);
      v16 = objc_retainAutoreleasedReturnValue(-[NSString stringByAppendingString:](self->_currentHeuristicName, "stringByAppendingString:", v15));
      objc_msgSend(v12, "setHeuristic:", v16);
      objc_release(v16);
      -[NSMutableArray addObject:](self->_currentActionsBuffer, "addObject:", v12);
      v17 = v15;
    }
    objc_release(v17);
  }
  else
  {
    v12 = objc_retainAutoreleasedReturnValue((id)sub_1000050DC());
    if ( os_log_type_enabled((os_log_t)v12, OS_LOG_TYPE_DEFAULT) )
    {
      *(_WORD *)buf = 0;
      _os_log_impl(
        (void *)&_mh_execute_header,
        (os_log_t)v12,
        OS_LOG_TYPE_DEFAULT,
        "Expected non-null ATXAction",
        buf,
        2u);
    }
  }
  objc_release(v12);
  objc_release(v7);
  objc_release(v6);
}