-[CoreMLModelSecurity secureModelMLFeatureValue:withReply:]
void __cdecl -[CoreMLModelSecurity secureModelMLFeatureValue:withReply:](
        CoreMLModelSecurity *self,
        SEL a2,
        id a3,
        id a4)
{
  id v5; // x19
  void (__fastcall **v6)(id, id, void *); // x20
  void *v7; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v5 = objc_retain(a3);
  v6 = (void (__fastcall **)(id, id, void *))objc_retain(a4);
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "description"));
  v6[2](v6, v5, v7);
  objc_release(v7);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}