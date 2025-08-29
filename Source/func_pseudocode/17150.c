-[AMLoaderServiceVariableController containsVariable:]
bool __cdecl -[AMLoaderServiceVariableController containsVariable:](
        AMLoaderServiceVariableController *self,
        SEL a2,
        id a3)
{
  id v5; // x19
  os_unfair_lock_s *p_variablesLock; // x21
  NSMutableArray *v7; // x22
  unsigned int v8; // w23
  bool v9; // w20
  void *v10; // x23
  NSPredicate *v11; // x22
  NSMutableArray *v12; // x20
  void *v13; // x23
  NSAssertionHandler *v15; // x22

  v5 = objc_retain(a3);
  if ( v5 )
  {
    p_variablesLock = &self->__variablesLock;
    os_unfair_lock_lock(&self->__variablesLock);
    v7 = objc_retainAutoreleasedReturnValue(-[AMLoaderServiceVariableController _variables](self, "_variables"));
    v8 = (unsigned int)-[NSMutableArray containsObject:](v7, "containsObject:", v5);
    objc_release(v7);
    if ( v8 )
    {
      os_unfair_lock_unlock(&self->__variablesLock);
      v9 = 1;
    }
    else
    {
      v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "UUID"));
      v11 = objc_retainAutoreleasedReturnValue(
              +[NSPredicate predicateWithFormat:](
                &OBJC_CLASS___NSPredicate,
                "predicateWithFormat:",
                CFSTR("UUID = %@"),
                v10));
      objc_release(v10);
      v12 = objc_retainAutoreleasedReturnValue(-[AMLoaderServiceVariableController _variables](self, "_variables"));
      v13 = objc_retainAutoreleasedReturnValue(-[NSMutableArray filteredArrayUsingPredicate:](v12, "filteredArrayUsingPredicate:", v11));
      objc_release(v12);
      v9 = objc_msgSend(v13, "count") != 0LL;
      os_unfair_lock_unlock(p_variablesLock);
      objc_release(v13);
      objc_release(v11);
    }
  }
  else
  {
    v15 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v15,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("AMLoaderServiceVariableController.m"),
      271LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("variable"));
    objc_release(v15);
    v9 = 0;
  }
  objc_release(v5);
  return v9;
}