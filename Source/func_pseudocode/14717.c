-[UINSSystemPreferencesSetting initWithIdentifier:title:icon:preferencePaneIdentifier:preferencePaneRevealKey:usageKeys:instructionsFormat:]
UINSSystemPreferencesSetting *__cdecl -[UINSSystemPreferencesSetting initWithIdentifier:title:icon:preferencePaneIdentifier:preferencePaneRevealKey:usageKeys:instructionsFormat:](
        UINSSystemPreferencesSetting *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6,
        id a7,
        id a8,
        id a9)
{
  id v15; // x19
  id v16; // x20
  id v17; // x21
  id v18; // x22
  id v19; // x23
  id v20; // x25
  id v21; // x26
  UINSSystemPreferencesSetting *v22; // x24
  NSString *v23; // x0
  NSString *identifier; // x8
  NSString *v25; // x0
  NSString *title; // x8
  NSString *v27; // x0
  NSString *preferencePaneIdentifier; // x8
  NSString *v29; // x0
  NSString *preferencePaneRevealKey; // x8
  NSArray *v31; // x0
  NSArray *usageKeys; // x8
  NSString *v33; // x0
  NSString *instructionsFormat; // x8
  objc_super v36; // [xsp+0h] [xbp-60h] BYREF

  v15 = objc_retain(a3);
  v16 = objc_retain(a4);
  v17 = objc_retain(a5);
  v18 = objc_retain(a6);
  v19 = objc_retain(a7);
  v20 = objc_retain(a8);
  v21 = objc_retain(a9);
  v36.receiver = self;
  v36.super_class = (Class)&OBJC_CLASS___UINSSystemPreferencesSetting;
  v22 = -[UINSSystemPreferencesSetting init](&v36, "init");
  if ( v22 )
  {
    v23 = (NSString *)objc_msgSend(v15, "copy");
    identifier = v22->_identifier;
    v22->_identifier = v23;
    objc_release(identifier);
    v25 = (NSString *)objc_msgSend(v16, "copy");
    title = v22->_title;
    v22->_title = v25;
    objc_release(title);
    objc_storeStrong((id *)&v22->_icon, a5);
    v27 = (NSString *)objc_msgSend(v18, "copy");
    preferencePaneIdentifier = v22->_preferencePaneIdentifier;
    v22->_preferencePaneIdentifier = v27;
    objc_release(preferencePaneIdentifier);
    v29 = (NSString *)objc_msgSend(v19, "copy");
    preferencePaneRevealKey = v22->_preferencePaneRevealKey;
    v22->_preferencePaneRevealKey = v29;
    objc_release(preferencePaneRevealKey);
    v31 = (NSArray *)objc_msgSend(v20, "copy");
    usageKeys = v22->_usageKeys;
    v22->_usageKeys = v31;
    objc_release(usageKeys);
    v33 = (NSString *)objc_msgSend(v21, "copy");
    instructionsFormat = v22->_instructionsFormat;
    v22->_instructionsFormat = v33;
    objc_release(instructionsFormat);
  }
  objc_release(v21);
  objc_release(v20);
  objc_release(v19);
  objc_release(v18);
  objc_release(v17);
  objc_release(v16);
  objc_release(v15);
  return v22;
}