-[AMParametersObserver initWithAction:]
AMParametersObserver *__cdecl -[AMParametersObserver initWithAction:](AMParametersObserver *self, SEL a2, id a3)
{
  id v5; // x19
  AMParametersObserver *v6; // x0
  AMParametersObserver *v7; // x20
  NSMutableArray *v8; // x0
  NSMutableArray *observedParameters; // x8
  void *v10; // x21
  NSDictionary *v11; // x0
  NSDictionary *previousParameters; // x8
  objc_super v14; // [xsp+0h] [xbp-30h] BYREF

  v5 = objc_retain(a3);
  v14.receiver = self;
  v14.super_class = (Class)&OBJC_CLASS___AMParametersObserver;
  v6 = -[AMParametersObserver init](&v14, "init");
  v7 = v6;
  if ( v6 )
  {
    v6->__lock._os_unfair_lock_opaque = 0;
    objc_storeStrong((id *)&v6->_action, a3);
    v8 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
    observedParameters = v7->__observedParameters;
    v7->__observedParameters = v8;
    objc_release(observedParameters);
    v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "parameters"));
    v11 = (NSDictionary *)objc_msgSend(v10, "copy");
    previousParameters = v7->__previousParameters;
    v7->__previousParameters = v11;
    objc_release(previousParameters);
    objc_release(v10);
  }
  objc_release(v5);
  return v7;
}