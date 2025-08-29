-[AMLoaderServiceVariableController _updateOrAddVariableReturningChanged:]
bool __cdecl -[AMLoaderServiceVariableController _updateOrAddVariableReturningChanged:](
        AMLoaderServiceVariableController *self,
        SEL a2,
        id a3)
{
  NSMutableArray *v3; // x25
  void *v4; // x26
  id v7; // x19
  void *v8; // x21
  NSAssertionHandler *v9; // x20
  NSMutableArray *v10; // x21
  void *v11; // x22
  NSMutableArray *v12; // x24
  bool v13; // w23
  void *v14; // x0
  void *v15; // x27

  v7 = objc_retain(a3);
  os_unfair_lock_assert_owner(&self->__variablesLock);
  if ( !v7 )
  {
    v9 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v9,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("AMLoaderServiceVariableController.m"),
      82LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("variable"));
    v13 = 0;
    goto LABEL_18;
  }
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "UUID"));
  v9 = (NSAssertionHandler *)objc_retainAutoreleasedReturnValue(-[AMLoaderServiceVariableController _variableWithUUID:](self, "_variableWithUUID:", v8));
  objc_release(v8);
  if ( v9 )
  {
    v10 = objc_retainAutoreleasedReturnValue(-[NSAssertionHandler propertyList](v9, "propertyList"));
    v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "propertyList"));
    if ( (unsigned int)-[NSMutableArray isEqualToDictionary:](v10, "isEqualToDictionary:", v11) )
    {
      v12 = objc_retainAutoreleasedReturnValue(-[NSAssertionHandler value](v9, "value"));
      if ( !v12
        || (v3 = objc_retainAutoreleasedReturnValue(-[NSAssertionHandler value](v9, "value")),
            v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "value")),
            ((unsigned int)-[NSMutableArray isEqual:](v3, "isEqual:", v4) & 1) != 0) )
      {
        v14 = objc_retainAutoreleasedReturnValue(-[NSAssertionHandler value](v9, "value"));
        if ( v14 )
        {
          objc_release(v14);
          if ( v12 )
          {
            objc_release(v4);
            v13 = 0;
LABEL_15:
            objc_release(v3);
            objc_release(v12);
LABEL_16:
            objc_release(v11);
            goto LABEL_17;
          }
        }
        else
        {
          v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "value"));
          objc_release(v15);
          if ( v12 )
          {
            objc_release(v4);
            objc_release(v3);
            objc_release(v12);
          }
          if ( v15 )
            goto LABEL_14;
        }
        v13 = 0;
        goto LABEL_16;
      }
      objc_release(v4);
      objc_release(v3);
      objc_release(v12);
    }
LABEL_14:
    v12 = objc_retainAutoreleasedReturnValue(-[AMLoaderServiceVariableController _variables](self, "_variables"));
    v3 = objc_retainAutoreleasedReturnValue(-[AMLoaderServiceVariableController _variables](self, "_variables"));
    -[NSMutableArray replaceObjectAtIndex:withObject:](
      v12,
      "replaceObjectAtIndex:withObject:",
      -[NSMutableArray indexOfObject:](v3, "indexOfObject:", v9),
      v7);
    v13 = 1;
    goto LABEL_15;
  }
  v10 = objc_retainAutoreleasedReturnValue(-[AMLoaderServiceVariableController _variables](self, "_variables"));
  -[NSMutableArray addObject:](v10, "addObject:", v7);
  v13 = 1;
LABEL_17:
  objc_release(v10);
LABEL_18:
  objc_release(v9);
  objc_release(v7);
  return v13;
}