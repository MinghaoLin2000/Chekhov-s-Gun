-[AMLoaderServiceVariableController addVariable:]
id __cdecl -[AMLoaderServiceVariableController addVariable:](AMLoaderServiceVariableController *self, SEL a2, id a3)
{
  id v5; // x19
  id v6; // x21
  void *v7; // x22
  unsigned int v8; // w23
  NSMutableArray *v9; // x22
  void *v10; // x23
  NSPredicate *v11; // x24
  NSAssertionHandler *v12; // x21
  NSAssertionHandler *v13; // x0
  void *v14; // x22
  id v15; // x23
  NSArray *v16; // x22
  void *v17; // x22
  id v18; // x23
  NSAssertionHandler *v19; // x20
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v5 = objc_retain(a3);
  if ( !v5 )
  {
    v12 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v12,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("AMLoaderServiceVariableController.m"),
      357LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("variableToAdd"));
    goto LABEL_13;
  }
  v6 = objc_retainAutoreleasedReturnValue((id)_AMVariableBuiltInIdentifiers());
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "identifier"));
  v8 = (unsigned int)objc_msgSend(v6, "containsObject:", v7);
  objc_release(v7);
  objc_release(v6);
  if ( v8 )
  {
    v9 = objc_retainAutoreleasedReturnValue(-[AMLoaderServiceVariableController _variables](self, "_variables"));
    v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "identifier"));
    v11 = objc_retainAutoreleasedReturnValue(
            +[NSPredicate predicateWithFormat:](
              &OBJC_CLASS___NSPredicate,
              "predicateWithFormat:",
              CFSTR("identifier LIKE %@"),
              v10));
    v12 = objc_retainAutoreleasedReturnValue(-[NSMutableArray filteredArrayUsingPredicate:](v9, "filteredArrayUsingPredicate:", v11));
    objc_release(v11);
    objc_release(v10);
    objc_release(v9);
    if ( -[NSAssertionHandler count](v12, "count") )
    {
      v13 = objc_retainAutoreleasedReturnValue(-[NSAssertionHandler objectAtIndexedSubscript:](v12, "objectAtIndexedSubscript:", 0LL));
    }
    else
    {
      -[AMLoaderServiceVariableController _addVariableViaXPC:expectingNewUUID:](
        self,
        "_addVariableViaXPC:expectingNewUUID:",
        v5,
        1LL);
      v13 = (NSAssertionHandler *)objc_retain(v5);
    }
    goto LABEL_16;
  }
  if ( !-[AMLoaderServiceVariableController containsVariable:](self, "containsVariable:", v5) )
  {
    v12 = (NSAssertionHandler *)objc_msgSend(v5, "copy");
    if ( ((unsigned int)-[NSAssertionHandler isTemplate](v12, "isTemplate") & 1) != 0
      || (unsigned int)-[NSAssertionHandler isChild](v12, "isChild") )
    {
      -[NSAssertionHandler convertTemplateIdentifier](v12, "convertTemplateIdentifier");
    }
    v14 = objc_retainAutoreleasedReturnValue(-[NSAssertionHandler name](v12, "name"));
    v15 = objc_retainAutoreleasedReturnValue(-[AMLoaderServiceVariableController variableWithName:](self, "variableWithName:", v14));
    objc_release(v15);
    objc_release(v14);
    if ( v15 )
    {
      v16 = objc_retainAutoreleasedReturnValue(-[AMLoaderServiceVariableController variableNames](self, "variableNames"));
      -[NSAssertionHandler renameUniquelyWithExistingVariableNames:](
        v12,
        "renameUniquelyWithExistingVariableNames:",
        v16);
      objc_release(v16);
    }
    v17 = objc_retainAutoreleasedReturnValue(-[NSAssertionHandler name](v12, "name"));
    v18 = objc_retainAutoreleasedReturnValue(-[AMLoaderServiceVariableController variableWithName:](self, "variableWithName:", v17));
    objc_release(v18);
    objc_release(v17);
    if ( !v18 )
    {
      -[AMLoaderServiceVariableController _addVariableViaXPC:expectingNewUUID:](
        self,
        "_addVariableViaXPC:expectingNewUUID:",
        v12,
        1LL);
      v13 = objc_retain(v12);
      v12 = v13;
      goto LABEL_16;
    }
LABEL_13:
    v19 = 0LL;
    goto LABEL_17;
  }
  v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "UUID"));
  v13 = (NSAssertionHandler *)objc_retainAutoreleasedReturnValue(-[AMLoaderServiceVariableController variableWithUUID:](self, "variableWithUUID:", v12));
LABEL_16:
  v19 = v13;
LABEL_17:
  objc_release(v12);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v19);
}