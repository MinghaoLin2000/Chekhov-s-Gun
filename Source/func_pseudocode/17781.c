-[CoreMLModelSecurityXPCFeatureProvider initWithRemoteProvider:clientProxy:]
CoreMLModelSecurityXPCFeatureProvider *__cdecl -[CoreMLModelSecurityXPCFeatureProvider initWithRemoteProvider:clientProxy:](
        CoreMLModelSecurityXPCFeatureProvider *self,
        SEL a2,
        id a3,
        id a4)
{
  id v7; // x19
  id v8; // x20
  CoreMLModelSecurityXPCFeatureProvider *v9; // x0
  CoreMLModelSecurityXPCFeatureProvider *v10; // x21
  NSMutableDictionary *v11; // x0
  NSMutableDictionary *resolvedFeaturesDict; // x8
  objc_super v14; // [xsp+0h] [xbp-40h] BYREF

  v7 = objc_retain(a3);
  v8 = objc_retain(a4);
  v14.receiver = self;
  v14.super_class = (Class)&OBJC_CLASS___CoreMLModelSecurityXPCFeatureProvider;
  v9 = -[CoreMLModelSecurityXPCFeatureProvider init](&v14, "init");
  v10 = v9;
  if ( v9 )
  {
    objc_storeStrong((id *)&v9->_uniqueKeyForProvider, a3);
    objc_storeStrong((id *)&v10->_clientProxy, a4);
    v11 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
    resolvedFeaturesDict = v10->_resolvedFeaturesDict;
    v10->_resolvedFeaturesDict = v11;
    objc_release(resolvedFeaturesDict);
  }
  objc_release(v8);
  objc_release(v7);
  return v10;
}