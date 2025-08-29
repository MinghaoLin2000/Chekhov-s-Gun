-[CoreMLModelSecurity securePredictionFromLazyFeatures:options:withReply:]
void __cdecl -[CoreMLModelSecurity securePredictionFromLazyFeatures:options:withReply:](
        CoreMLModelSecurity *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v8; // x19
  id v9; // x20
  void (__fastcall **v10)(id, void *, id); // x21
  void *v11; // x22
  CoreMLModelSecurityXPCFeatureProvider *v12; // x23
  CoreMLModelSecurityServiceToClientProtocol *v13; // x25
  CoreMLModelSecurityXPCFeatureProvider *v14; // x23
  MLModel *v15; // x26
  id v16; // x25
  id v17; // x24
  void *v18; // x27
  id v19; // [xsp+8h] [xbp-58h] BYREF

  v8 = objc_retain(a3);
  v9 = objc_retain(a4);
  v10 = (void (__fastcall **)(id, void *, id))objc_retain(a5);
  v11 = objc_autoreleasePoolPush();
  v12 = objc_alloc(&OBJC_CLASS___CoreMLModelSecurityXPCFeatureProvider);
  v13 = objc_retainAutoreleasedReturnValue(-[CoreMLModelSecurity clientProxy](self, "clientProxy"));
  v14 = -[CoreMLModelSecurityXPCFeatureProvider initWithRemoteProvider:clientProxy:](
          v12,
          "initWithRemoteProvider:clientProxy:",
          v8,
          v13);
  objc_release(v13);
  v15 = objc_retainAutoreleasedReturnValue(-[CoreMLModelSecurity decryptedModel](self, "decryptedModel"));
  v19 = 0LL;
  v16 = objc_retainAutoreleasedReturnValue(-[MLModel predictionFromFeatures:options:error:](v15, "predictionFromFeatures:options:error:", v14, v9, &v19));
  v17 = objc_retain(v19);
  objc_release(v15);
  if ( v16 )
  {
    v18 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___MLDictionaryFeatureProvider), "initWithFeatureProvider:", v16);
    v10[2](v10, v18, v17);
  }
  else
  {
    v10[2](v10, 0LL, v17);
    v18 = 0LL;
  }
  objc_release(v16);
  objc_release(v14);
  objc_release(v17);
  objc_release(v18);
  objc_autoreleasePoolPop(v11);
  objc_release(v10);
  objc_release(v9);
  objc_release(v8);
}