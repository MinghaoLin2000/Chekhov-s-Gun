-[CoreMLModelSecurity secureParameterValueForKey:withReply:]
void __cdecl -[CoreMLModelSecurity secureParameterValueForKey:withReply:](
        CoreMLModelSecurity *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x20
  void (__fastcall **v7)(id, void *, id); // x19
  void *v8; // x21
  id v9; // x20
  MLModel *v10; // x23
  id v11; // x22
  id v12; // x24
  id v13; // [xsp+8h] [xbp-38h] BYREF

  v6 = objc_retain(a3);
  v7 = (void (__fastcall **)(id, void *, id))objc_retain(a4);
  v8 = objc_autoreleasePoolPush();
  v9 = objc_retain(v6);
  v10 = objc_retainAutoreleasedReturnValue(-[CoreMLModelSecurity decryptedModel](self, "decryptedModel"));
  v13 = 0LL;
  v11 = objc_retainAutoreleasedReturnValue(-[MLModel parameterValueForKey:error:](v10, "parameterValueForKey:error:", v9, &v13));
  v12 = objc_retain(v13);
  objc_release(v10);
  v7[2](v7, v11, v12);
  objc_release(v12);
  objc_release(v11);
  objc_release(v9);
  objc_autoreleasePoolPop(v8);
  objc_release(v7);
  objc_release(v9);
}