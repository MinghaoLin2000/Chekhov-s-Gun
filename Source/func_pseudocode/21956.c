-[PAUbiquityController presentedItemURL]
NSURL *__cdecl -[PAUbiquityController presentedItemURL](PAUbiquityController *self, SEL a2)
{
  NSURL *localURL; // x0
  NSURL *v3; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  localURL = self->_localURL;
  if ( localURL )
    v3 = objc_retain(localURL);
  else
    v3 = (NSURL *)objc_retainAutoreleasedReturnValue(
                    +[PAUbiquityController _ubiquitousCardsURL](
                      &OBJC_CLASS___PAUbiquityController,
                      "_ubiquitousCardsURL"));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}