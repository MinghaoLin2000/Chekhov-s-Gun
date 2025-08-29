-[AMLoaderServiceVariableController variableNameForUUID:]
id __cdecl -[AMLoaderServiceVariableController variableNameForUUID:](
        AMLoaderServiceVariableController *self,
        SEL a2,
        id a3)
{
  id v5; // x19
  os_unfair_lock_s *p_variablesLock; // x21
  id v7; // x20
  void *v8; // x21
  NSAssertionHandler *v10; // x22
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v5 = objc_retain(a3);
  if ( !objc_msgSend(v5, "length") )
  {
    v10 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v10,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("AMLoaderServiceVariableController.m"),
      242LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("variableUUID.length > 0"));
    objc_release(v10);
  }
  if ( objc_msgSend(v5, "length") )
  {
    p_variablesLock = &self->__variablesLock;
    os_unfair_lock_lock(&self->__variablesLock);
    v7 = objc_retainAutoreleasedReturnValue(-[AMLoaderServiceVariableController _variableWithUUID:](self, "_variableWithUUID:", v5));
    os_unfair_lock_unlock(p_variablesLock);
    if ( v7 )
      v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "name"));
    else
      v8 = 0LL;
    objc_release(v7);
  }
  else
  {
    v8 = 0LL;
  }
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v8);
}