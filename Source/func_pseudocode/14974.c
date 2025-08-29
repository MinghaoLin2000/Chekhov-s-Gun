-[ATXHeuristicJSEnv _makeIntentDescriptionWithCustomTypeName:parameters:]
id __cdecl -[ATXHeuristicJSEnv _makeIntentDescriptionWithCustomTypeName:parameters:](
        ATXHeuristicJSEnv *self,
        SEL a2,
        id a3,
        id a4)
{
  id v5; // x21
  id v6; // x19
  void *v7; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v5 = objc_retain(a4);
  v6 = objc_retain(a3);
  v7 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___ATXCustomIntentDescription), "initWithTypeName:parameters:", v6, v5);
  objc_release(v5);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}