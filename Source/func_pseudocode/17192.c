-[AMLoaderServiceAction initWithAction:uuid:serivice:workflowUUID:actionDelegate:variableDelegate:variables:]
AMLoaderServiceAction *__cdecl -[AMLoaderServiceAction initWithAction:uuid:serivice:workflowUUID:actionDelegate:variableDelegate:variables:](
        AMLoaderServiceAction *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6,
        id a7,
        id a8,
        id a9)
{
  id v16; // x19
  id v17; // x20
  id v18; // x21
  id v19; // x22
  id v20; // x24
  id v21; // x25
  AMLoaderServiceAction *v22; // x0
  AMLoaderServiceAction *v23; // x27
  NSString *v24; // x0
  NSString *workflowUUID; // x8
  AMParametersObserver *v26; // x0
  AMParametersObserver *parametersObserver; // x8
  AMLoaderServiceVariableController *v28; // x0
  AMLoaderServiceVariableController *variableController; // x8
  AMAction *amAction; // x23
  NSString *v31; // x26
  AMAction *v32; // x23
  NSString *v33; // x26
  NSAssertionHandler *v35; // [xsp+8h] [xbp-78h]
  NSAssertionHandler *v36; // [xsp+8h] [xbp-78h]
  NSAssertionHandler *v37; // [xsp+8h] [xbp-78h]
  id v39; // [xsp+18h] [xbp-68h]
  objc_super v40; // [xsp+20h] [xbp-60h] BYREF

  v16 = objc_retain(a3);
  v17 = objc_retain(a4);
  v18 = objc_retain(a5);
  v19 = objc_retain(a6);
  v39 = objc_retain(a7);
  v20 = objc_retain(a8);
  v21 = objc_retain(a9);
  if ( v16 )
  {
    if ( v18 )
      goto LABEL_3;
LABEL_8:
    v36 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v36,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("AMLoaderServiceAction.m"),
      85LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("service"));
    objc_release(v36);
    if ( v17 )
      goto LABEL_4;
    goto LABEL_9;
  }
  v35 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
  -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
    v35,
    "handleFailureInMethod:object:file:lineNumber:description:",
    a2,
    self,
    CFSTR("AMLoaderServiceAction.m"),
    84LL,
    CFSTR("Invalid parameter not satisfying: %@"),
    CFSTR("action"));
  objc_release(v35);
  if ( !v18 )
    goto LABEL_8;
LABEL_3:
  if ( v17 )
    goto LABEL_4;
LABEL_9:
  v37 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
  -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
    v37,
    "handleFailureInMethod:object:file:lineNumber:description:",
    a2,
    self,
    CFSTR("AMLoaderServiceAction.m"),
    86LL,
    CFSTR("Invalid parameter not satisfying: %@"),
    CFSTR("uuid"));
  objc_release(v37);
LABEL_4:
  v40.receiver = self;
  v40.super_class = (Class)&OBJC_CLASS___AMLoaderServiceAction;
  v22 = -[AMLoaderServiceAction init](&v40, "init");
  v23 = v22;
  if ( v22 )
  {
    objc_storeStrong((id *)&v22->__amAction, a3);
    objc_storeStrong((id *)&v23->_uuid, a4);
    objc_storeWeak((id *)&v23->__service, v18);
    v24 = (NSString *)objc_msgSend(v19, "copy");
    workflowUUID = v23->__workflowUUID;
    v23->__workflowUUID = v24;
    objc_release(workflowUUID);
    objc_storeStrong((id *)&v23->__actionDelegate, a7);
    v23->__executionLock._os_unfair_lock_opaque = 0;
    v26 = -[AMParametersObserver initWithAction:](
            objc_alloc(&OBJC_CLASS___AMParametersObserver),
            "initWithAction:",
            v16);
    parametersObserver = v23->__parametersObserver;
    v23->__parametersObserver = v26;
    objc_release(parametersObserver);
    -[AMParametersObserver setDelegate:](v23->__parametersObserver, "setDelegate:", v23);
    -[AMParametersObserver observe](v23->__parametersObserver, "observe");
    v28 = -[AMLoaderServiceVariableController initWithVariableDelegate:variables:](
            objc_alloc(&OBJC_CLASS___AMLoaderServiceVariableController),
            "initWithVariableDelegate:variables:",
            v20,
            v21);
    variableController = v23->__variableController;
    v23->__variableController = v28;
    objc_release(variableController);
    objc_msgSend(v16, "setVariableController:", v23->__variableController);
    v23->__observingInputOutput = 1;
    amAction = v23->__amAction;
    v31 = objc_retainAutoreleasedReturnValue(NSStringFromSelector("selectedInputType"));
    -[AMAction addObserver:forKeyPath:options:context:](
      amAction,
      "addObserver:forKeyPath:options:context:",
      v23,
      v31,
      1LL,
      off_100024010);
    objc_release(v31);
    v32 = v23->__amAction;
    v33 = objc_retainAutoreleasedReturnValue(NSStringFromSelector("selectedOutputType"));
    -[AMAction addObserver:forKeyPath:options:context:](
      v32,
      "addObserver:forKeyPath:options:context:",
      v23,
      v33,
      1LL,
      off_100024018);
    objc_release(v33);
  }
  objc_release(v21);
  objc_release(v20);
  objc_release(v39);
  objc_release(v19);
  objc_release(v18);
  objc_release(v17);
  objc_release(v16);
  return v23;
}