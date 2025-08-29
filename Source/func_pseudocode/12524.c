-[NSURL tsu_isVolumeKnownToBeRemovable]
bool __cdecl -[NSURL tsu_isVolumeKnownToBeRemovable](NSURL *self, SEL a2)
{
  unsigned __int8 v3; // w22
  id v4; // x19
  id v5; // x21
  void *v6; // x22
  unsigned __int8 v7; // w20
  id v9; // [xsp+0h] [xbp-30h] BYREF
  id v10; // [xsp+8h] [xbp-28h] BYREF

  v10 = 0LL;
  v9 = 0LL;
  v3 = -[NSURL getPromisedItemResourceValue:forKey:error:](
         self,
         "getPromisedItemResourceValue:forKey:error:",
         &v10,
         NSURLVolumeIsRemovableKey,
         &v9);
  v4 = objc_retain(v10);
  v5 = objc_retain(v9);
  if ( (v3 & 1) == 0 )
  {
    if ( TSUDefaultCat_init_token != -1 )
      dispatch_once(&TSUDefaultCat_init_token, &stru_1001DC508);
    v6 = TSUDefaultCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUDefaultCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016DFA8(self, v6, v5);
    objc_release(v4);
    v4 = &__kCFBooleanFalse;
  }
  v7 = (unsigned __int8)objc_msgSend(v4, "boolValue");
  objc_release(v5);
  objc_release(v4);
  return v7;
}