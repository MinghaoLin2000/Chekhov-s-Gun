-[AMParametersObserver _observeParameter:]
void __cdecl -[AMParametersObserver _observeParameter:](AMParametersObserver *self, SEL a2, id a3)
{
  id v4; // x19
  AMAction *v5; // x21
  NSMutableArray *v6; // x22
  unsigned __int8 v7; // w23
  NSMutableArray *v8; // x21
  void *v9; // x22

  v4 = objc_retain(a3);
  os_unfair_lock_assert_owner(&self->__lock);
  if ( objc_msgSend(v4, "length") )
  {
    v5 = objc_retainAutoreleasedReturnValue(objc_msgSend((id)objc_opt_class(self), "_excludedParameters"));
    if ( (unsigned int)-[AMAction containsObject:](v5, "containsObject:", v4) )
    {
LABEL_5:
      objc_release(v5);
      goto LABEL_6;
    }
    v6 = objc_retainAutoreleasedReturnValue(-[AMParametersObserver _observedParameters](self, "_observedParameters"));
    v7 = (unsigned __int8)-[NSMutableArray containsObject:](v6, "containsObject:", v4);
    objc_release(v6);
    objc_release(v5);
    if ( (v7 & 1) == 0 )
    {
      v8 = objc_retainAutoreleasedReturnValue(-[AMParametersObserver _observedParameters](self, "_observedParameters"));
      -[NSMutableArray addObject:](v8, "addObject:", v4);
      objc_release(v8);
      v5 = objc_retainAutoreleasedReturnValue(-[AMParametersObserver action](self, "action"));
      v9 = objc_retainAutoreleasedReturnValue(objc_msgSend((id)objc_opt_class(self), "_keyPathForParametersName:", v4));
      -[AMAction addObserver:forKeyPath:options:context:](
        v5,
        "addObserver:forKeyPath:options:context:",
        self,
        v9,
        3LL,
        off_1000241A8);
      objc_release(v9);
      goto LABEL_5;
    }
  }
LABEL_6:
  objc_release(v4);
}