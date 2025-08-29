-[AMParametersObserver _setPreviousParameters:]
void __cdecl -[AMParametersObserver _setPreviousParameters:](AMParametersObserver *self, SEL a2, id a3)
{
  id v4; // x19
  NSDictionary *v5; // x0
  NSDictionary *previousParameters; // x8
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_retain(a3);
  os_unfair_lock_assert_owner(&self->__lock);
  if ( ((unsigned int)objc_msgSend(v4, "isEqualToDictionary:", self->__previousParameters) & 1) == 0 )
  {
    v5 = (NSDictionary *)objc_msgSend(v4, "copy");
    previousParameters = self->__previousParameters;
    self->__previousParameters = v5;
    objc_release(previousParameters);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}